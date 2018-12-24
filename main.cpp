#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <MyClass.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    MyClass *myclass = new MyClass(0);
    myclass->m_setProperty();
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext * ctx = engine.rootContext();
    ctx->setContextProperty("MyClass", myclass);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
