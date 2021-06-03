cmake_minimum_required(VERSION 3.7)
project(foobar VERSION 0.0.1)

include(GNUInstallDirs)
include(CTest)

add_executable(foobar src/foo.cpp src/bar.cpp src/baz.c)

install(
  TARGETS foobar
  EXPORT "${CMAKE_PROJECT_NAME}"
  DESTINATION "${CMAKE_INSTALL_BINDIR}")
