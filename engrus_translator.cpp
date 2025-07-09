#include "engrus_translator.h"

//class TMyException
// void TMyException::operator =(const TMyException &e) {}

// TMyException::TMyException(const char *str) {
//     assert(str != NULL);
//     msg = new char[strlen(str) + 1];
//     strcpy(msg, str);
// }

// TMyException::TMyException(const TMyException &e) {
//     msg = new char [strlen(e.msg) + 1];
//     strcpy(msg, e.msg);
// }

// const char *TMyException::getMessage() const { return msg; }

// TMyException::~TMyException() { delete [] msg; }


//class EngRus_translator
EngRus_translator::EngRus_translator(QString eng, QString rus){
    addWord(eng, rus);
}

EngRus_translator::EngRus_translator(){
    // dictionary["placeholder"] = "placeholder";
}

EngRus_translator::~EngRus_translator(){}

QString EngRus_translator::findWord(QString eng){
    if(dictionary.contains(eng.toLower())){
        return dictionary[eng.toLower()];
    }
    return "Слова нет в словаре!";
}

void EngRus_translator::addWord(QString eng, QString rus){
    if(dictionary[eng.toLower()] == nullptr){
        dictionary[eng.toLower()] = rus.toLower();
    }
    else QMessageBox::warning(nullptr, "Ошибка!", "Слово уже присутствует в словаре!");
}

void EngRus_translator::replaceWord(QString eng, QString newRus){
    if(dictionary[eng.toLower()] != nullptr){
        dictionary[eng.toLower()] = newRus.toLower();
    }
    else QMessageBox::warning(nullptr, "Ошибка!", "Слова нет в словаре!");
}

void EngRus_translator::removeWord(QString eng){
    dictionary.remove(eng.toLower());
}

void EngRus_translator::printDictionary() {
    QTextStream out(stdout);
    out<<"Англо-русский словарь: \n"; out.flush();
    for (auto it = dictionary.begin(); it != dictionary.end(); it++) {
        out << it.key() << " -> " << it.value() << '\n';
        out.flush();
    }
    out<<'\n'; out.flush();
}

bool EngRus_translator::readFromFile(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Ошибка!", "Не удалось открыть файл для чтения!");
        return false;
    }

    QTextStream in(&file);
    int line_number = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        ++line_number;
        if (line.trimmed().isEmpty()) continue;

        QStringList parts = line.split(';');
        if (parts.size() != 2) {
            QString errMsg = QString("Некорректный формат строки в файле (строка %1): %2").arg(line_number).arg(line);
            (errMsg.toUtf8().data());
        }

        QString eng = parts[0].trimmed();
        QString rus = parts[1].trimmed();
        addWord(eng, rus);
    }
    file.close();
    return true;
}

QVector<QStringList> EngRus_translator::returnDoubleDatabase(){
    QVector<QStringList> result;
    for (const auto& [key, value] : dictionary.asKeyValueRange()) {
        result.push_back({key, value});
    }
    return result;
}

//class EngBelRus_translator : public EngRusTranslator
EngBelRus_translator::EngBelRus_translator(){}

EngBelRus_translator::EngBelRus_translator(QString eng, QString rus, QString bel) : EngRus_translator(eng, rus) {
    addBelWord(eng, bel);
}

EngBelRus_translator::~EngBelRus_translator() {}

void EngBelRus_translator::addBelWord(QString eng, QString bel) {
    QTextStream out(stdout);
    if (!dictionary.contains(eng.toLower())) {
        QMessageBox::warning(nullptr, "Ошибка!", "Слово отсутствует в Англо-Русском словаре!");
    }
    if (belarusianWords.contains(eng.toLower())) {
        QMessageBox::warning(nullptr, "Ошибка!", "Белорусский перевод уже добавлен!");
    }
    belarusianWords[eng.toLower()] = bel.toLower();
}

void EngBelRus_translator::replaceBelWord(QString eng, QString newBel) {
    if (!dictionary.contains(eng.toLower())) {
        QMessageBox::warning(nullptr, "Ошибка!", "Слово отсутствует в Англо-Русском словаре!");
    }
    if (!belarusianWords.contains(eng.toLower())) {
        QMessageBox::warning(nullptr, "Ошибка!", "Белорусский перевод отсутствует!");
    }
    belarusianWords[eng.toLower()] = newBel.toLower();
}

void EngBelRus_translator::removeBelWord(QString eng) {
    if (!belarusianWords.contains(eng.toLower())) {
        QMessageBox::warning(nullptr, "Ошибка!", "Белорусский перевод отсутствует!");
    }
    belarusianWords.remove(eng.toLower());
}

void EngBelRus_translator::printDictionary() {
    QTextStream out(stdout);
    out << "Англо-русско-белорусский словарь:\n"; out.flush();
    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        QString eng = it.key();
        QString rus = it.value();
        QString bel = belarusianWords.contains(eng) ? belarusianWords[eng] : "нет перевода";
        out << eng << " -> " << rus << " -> " << bel << '\n';
        out.flush();
    }
    out << '\n'; out.flush();
}

bool EngBelRus_translator::readFromFile(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Ошибка!", "Не удалось открыть файл для чтения!");
        return false;
    }

    QTextStream in(&file);
    int line_number = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        ++line_number;
        if (line.trimmed().isEmpty()) continue;

        QStringList parts = line.split(';');
        if (parts.size() != 3) {
            QString errMsg = QString("Некорректный формат строки в файле (строка %1): %2").arg(line_number).arg(line);
            (errMsg.toUtf8().data());
        }

        QString eng = parts[0].trimmed();
        QString rus = parts[1].trimmed();
        QString bel = parts[2].trimmed();
        addWord(eng, rus);
        addBelWord(eng, bel);
    }
    file.close();
    return true;
}

QVector<QStringList> EngBelRus_translator::returnTripleDatabase() {
    QVector<QStringList> result;
    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        QString eng = it.key();
        QString rus = it.value();
        QString bel = belarusianWords.contains(eng)
                          ? belarusianWords[eng]
                          : QString();
        result.push_back({ eng, bel, rus });
    }
    return result;
}
