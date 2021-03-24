cmake_minimum_required(VERSION 3.7)
project(foobar LANGUAGES C VERSION 0.0.1)

include(GNUInstallDirs)
include(CTest)

add_executable(foobar src/foo.c src/bar.c)
