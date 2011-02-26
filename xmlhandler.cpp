#include "xmlhandler.h"

XmlHandler::XmlHandler()
{
}

bool XmlHandler::startElement(const QString &namespaceURI,
                              const QString &localName,
                              const QString &qName,
                              const QXmlAttributes &attributes)
{
    if (qName == "webapp") {

    } else if (qName == "shortcuts") {

    } else if (qName == "icon") {

    }

    qWarning() << namespaceURI << qName;

    currentText.clear();
    return true;
}

bool XmlHandler::endElement(const QString &namespaceURI,
                            const QString &localName,
                            const QString &qName)
{
    return true;
}

bool XmlHandler::characters(const QString &str)
{
    currentText += str;
    return true;
}

bool XmlHandler::fatalError (const QXmlParseException & exception)
{
    qWarning() << "Fatal error on line" << exception.lineNumber()
               << ", column" << exception.columnNumber() << ":"
               << exception.message();

    return false;
}
