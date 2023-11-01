cmake_minimum_required(VERSION 3.26)
project(cpp00)

set(CMAKE_CXX_STANDARD 11)

add_executable(megaphone
		ex00/megaphone.cpp
		ex00/megaphone.h)

add_executable(phoneBook
		ex01/main.cpp)