#include <QApplication>
#include <QWidget>

int main(int argc, char** argv) {
    QApplication a(argc, argv);

    QWidget w;
    w.setWindowTitle("A test of qt5 ci");
    w.show();

    return a.exec();
}