#include "dspineeditormainwindow.h"
#include "ui_dspineeditormainwindow.h"

DSpineEditorMainWindow::DSpineEditorMainWindow(QWidget* const f_parent)
    : QMainWindow(f_parent)
    , m_ui(new Ui::DSpineEditorMainWindowUi())
{
    m_ui->setupUi(this);
}

DSpineEditorMainWindow::~DSpineEditorMainWindow() = default;
