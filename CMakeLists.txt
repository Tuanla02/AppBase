cmake_minimum_required(VERSION 3.16)

project(AppUI VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ===== QT MODULES =====
find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    Network
    WebSockets
    LinguistTools
)

set(TS_FILES AppUI_vi_VN.ts)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${TS_FILES}
)

qt_add_executable(AppUI
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

# ===== LINK LIBRARIES =====
target_link_libraries(AppUI PRIVATE
    Qt6::Widgets
    Qt6::Network
    Qt6::WebSockets
)

set_target_properties(AppUI PROPERTIES
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS AppUI
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_finalize_executable(AppUI)
