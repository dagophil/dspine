qt5_wrap_ui(UI_HDRS
    src/dspineeditormainwindow.ui
)

add_executable(dspineeditor
    src/dspineeditor_main.cpp
    src/dspineeditormainwindow.h
    src/dspineeditormainwindow.cpp
    ${UI_HDRS}
)

target_link_libraries(dspineeditor
    Qt5::Core
    Qt5::Widgets
)
