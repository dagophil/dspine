#pragma once

#include <QMainWindow>
#include <memory>

namespace Ui
{
class DSpineEditorMainWindowUi;
}

namespace DSpineEditor
{
class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(QWidget* const f_parent = nullptr);
    virtual ~MainWindow();

private:
    std::unique_ptr<Ui::DSpineEditorMainWindowUi> m_ui;
};
}
