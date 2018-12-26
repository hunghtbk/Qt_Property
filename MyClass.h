#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>

class MyClass: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString m_textQML READ getText WRITE setText NOTIFY emitChangedtext)
public:
    MyClass(QObject *parent = 0);
    void m_setProperty();
public slots:
    QString getText();
    void setText(QString _text);
signals:
    void emitChangedtext();

private:
    QString m_text = "hunght";
};

#endif // MYCLASS_H
