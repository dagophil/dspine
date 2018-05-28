#include "mainwindow.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    DSpineEditor::MainWindow main_window;
    main_window.show();
    return app.exec();
}
