cmake_minimum_required(VERSION 3.7)
project(foobar VERSION 0.0.1)

include(GNUInstallDirs)
include(CTest)

add_executable(foobar src/foo.cpp src/bar.cpp src/baz.c)

add_executable(foo src/foo.c)
add_executable(bar src/bar.c)

install(
  TARGETS foobar foo bar
  EXPORT "${CMAKE_PROJECT_NAME}"
  DESTINATION "${CMAKE_INSTALL_BINDIR}")
