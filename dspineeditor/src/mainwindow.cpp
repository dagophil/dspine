#include "mainwindow.h"
#include "ui_mainwindow.h"

DSpineEditor::MainWindow::MainWindow(QWidget* const f_parent)
    : QMainWindow(f_parent)
    , m_ui(new Ui::DSpineEditorMainWindowUi())
{
    m_ui->setupUi(this);

    setCorner(Qt::BottomLeftCorner, Qt::LeftDockWidgetArea);
    setCorner(Qt::BottomRightCorner, Qt::RightDockWidgetArea);

    m_ui->tabWidget->hide();
}

DSpineEditor::MainWindow::~MainWindow() = default;
