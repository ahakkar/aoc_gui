cmake_minimum_required(VERSION 3.27)

project(src LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

add_executable(src    
    main.h main.cpp
    results.h results.cpp
    capabilities.h capabilities.cpp
    jsonhandler.h jsonhandler.cpp
    logging.h logging.cpp
    idatahandler.h idatahandler.cpp
)

set_target_properties(src PROPERTIES
    AUTOMOC ON
    AUTORCC ON
    AUTOUIC ON
)

target_link_libraries(src PRIVATE Qt6::Widgets)

include(GNUInstallDirs)
install(TARGETS src
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
