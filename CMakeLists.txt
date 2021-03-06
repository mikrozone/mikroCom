cmake_minimum_required(VERSION 2.4.3 FATAL_ERROR )

project(mikroCom)

set(QT_MIN_VERSION 4.1.0)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_BINARY_DIR})
add_definitions(-DQT3_SUPPORT)
set(mikrocomSrcs main.cpp qcppdialogimpl.cpp)

qt4_wrap_cpp(mikrocomSrcs qcppdialogimpl.h)

qt4_wrap_ui(mikrocomSrcs mikrocomdlg.ui)

set(exeType)
set(binInstallDir bin )

if(APPLE)
   # with cmake < 2.6 install(TARGETS ... BUNDLE DESTINATION ... ) doesn't work:
   cmake_minimum_required(VERSION 2.6 FATAL_ERROR )
   set(exeType MACOSX_BUNDLE)
   set(binInstallDir /Applications )
   # hint to linker for indirect referenced libs inside qt3support
   set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -dylib_file QtSql.framework/Versions/4/QtSql:/Library/Frameworks/QtSql.framework/Versions/4/QtSql")
   set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -dylib_file QtNetwork.framework/Versions/4/QtNetwork:/Library/Frameworks/QtNetwork.framework/Versions/4/QtNetwork")
   set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -dylib_file QtXml.framework/Versions/4/QtXml:/Library/Frameworks/QtXml.framework/Versions/4/QtXml")
endif(APPLE)

add_executable(mikrocom ${exeType} ${mikrocomSrcs})
target_link_libraries(mikrocom ${QT_QT3SUPPORT_LIBRARY} ${QT_QTGUI_LIBRARY} ${QT_QTCORE_LIBRARY})

if (APPLE)
   set_target_properties(mikrocom PROPERTIES OUTPUT_NAME mikroCom)
endif (APPLE)

install(TARGETS mikrocom DESTINATION ${binInstallDir} )

#install(FILES mikrocom.1 DESTINATION share/man/man1 )

find_program(KDECONFIG_EXECUTABLE NAMES kde-config )

if (KDECONFIG_EXECUTABLE)
   # then ask kde-config for the kde data dirs
   exec_program(${KDECONFIG_EXECUTABLE} ARGS --install apps --expandvars OUTPUT_VARIABLE _apps_DIR )
   install(FILES mikrocom.desktop DESTINATION ${_apps_DIR}/Utilities)
endif (KDECONFIG_EXECUTABLE)
