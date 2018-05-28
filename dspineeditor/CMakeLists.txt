# Add source directory to include paths, so that placeholders in the .ui files work correctly.
include_directories("src/")

qt5_wrap_ui(UI_HDRS
    src/mainwindow.ui
)

add_executable(dspineeditor
    src/dspineeditor_main.cpp
    src/mainwindow.h
    src/mainwindow.cpp
    ${UI_HDRS}
)

target_link_libraries(dspineeditor
    Qt5::Core
    Qt5::Widgets
)
