project(QtOpenCVExample)

cmake_minimum_required(VERSION 2.6)

find_package(Qt4 REQUIRED)
find_package(OpenCV REQUIRED)

set(QT_USE_QTOPENGL TRUE)

include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})

set(QtOpenCVExample_SOURCES
  "CustomGLWidget.cpp"
  "MainWindow.cpp"
  "QtOpenCVExample.cpp"
  )

set(QtOpenCVExample_FORMS
  "QtOpenCVExample.ui"
)

set(QtOpenCVExample_MOC_HEADERS
  "CustomGLWidget.h"
  "MainWindow.h"
  )

qt4_wrap_ui(QtOpenCVExample_FORMS_HEADERS ${QtOpenCVExample_FORMS})
qt4_wrap_cpp(QtOpenCVExample_MOC_SOURCES ${QtOpenCVExample_MOC_HEADERS})


include_directories(
  ${CMAKE_CURRENT_BINARY_DIR} 
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

add_executable(QtOpenCVExample
  ${QtOpenCVExample_SOURCES}
  ${QtOpenCVExample_MOC_SOURCES}
  ${QtOpenCVExample_FORMS_HEADERS}
 )

target_link_libraries(QtOpenCVExample
  ${QT_LIBRARIES}
  ${OpenCV_LIBS})
