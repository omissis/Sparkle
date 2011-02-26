#ifndef XMLHANDLER_H
#define XMLHANDLER_H

#include <QtGui>
#include <QXmlDefaultHandler>

class XmlHandler : public QXmlDefaultHandler
{
public:
    XmlHandler();
    bool startElement(const QString &namespaceURI, const QString &localName,
                      const QString &qName, const QXmlAttributes &attributes);
    bool endElement(const QString &namespaceURI, const QString &localName,
                    const QString &qName);
    bool characters(const QString &str);
    bool fatalError(const QXmlParseException &exception);

private:
    QString currentText;
};

#endif // XMLHANDLER_H
