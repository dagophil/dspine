#pragma once

#include <QMainWindow>
#include <memory>

namespace Ui
{
class DSpineEditorMainWindowUi;
}

class DSpineEditorMainWindow : public QMainWindow
{
public:
    explicit DSpineEditorMainWindow(QWidget* const f_parent = nullptr);
    virtual ~DSpineEditorMainWindow();

private:
    std::unique_ptr<Ui::DSpineEditorMainWindowUi> m_ui;
};
