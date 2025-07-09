#ifndef ENGRUS_TRANSLATOR_H
#define ENGRUS_TRANSLATOR_H
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QMap>
#include <QFile>
// class TMyException {
//     char* msg;
//     void operator =(const TMyException& e);
// public:
//     TMyException(const char* str);

//     TMyException(const TMyException& e);

//     const char* getMessage() const;

//     ~TMyException();
// };
class EngRus_translator{
protected:
    QMap<QString, QString> dictionary;
public:
    EngRus_translator(QString eng, QString rus);

    EngRus_translator();
    ~EngRus_translator();

    QString findWord(QString eng);
    void addWord(QString eng, QString rus);
    void replaceWord(QString eng, QString newRus);
    void removeWord(QString eng);
    void printDictionary();

    bool readFromFile(const QString& filename);
    QVector<QStringList> returnDoubleDatabase();
};
class EngBelRus_translator : public EngRus_translator {
protected:
    QMap<QString, QString> belarusianWords;

public:
    EngBelRus_translator();
    EngBelRus_translator(QString eng, QString rus, QString bel);
    ~EngBelRus_translator();

    void addBelWord(QString eng, QString bel);
    void replaceBelWord(QString eng, QString newBel);
    void removeBelWord(QString eng);
    void printDictionary();

    bool readFromFile(const QString& filename);

    QVector<QStringList> returnTripleDatabase();

};



#endif // ENGRUS_TRANSLATOR_H
