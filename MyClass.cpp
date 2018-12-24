#include "MyClass.h"
#include <QDebug>

MyClass::MyClass(QObject *parent)
{
    Q_UNUSED(parent);
}

void MyClass::m_setProperty()
{
    qDebug() << "Set property";
}

QString MyClass::getText()
{
    return m_text;
}

void MyClass::setText(QString _text)
{
    m_text = _text;
    qDebug() << m_text;
    emit emitChangedtext();
}
