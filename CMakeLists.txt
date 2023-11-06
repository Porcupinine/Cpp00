cmake_minimum_required(VERSION 3.26)
project(cpp00)

set(CMAKE_CXX_STANDARD 11)

add_executable(megaphone
		ex00/megaphone.cpp
		ex00/megaphone.hpp)

add_executable(phoneBook
		ex01/main.cpp
		ex01/PhoneBook.cpp
		ex01/PhoneBook.hpp
		ex01/Contact.cpp
		ex01/Contact.hpp
		ex01/PhoneBook.cpp)

add_executable(account
		ex02/Account.cpp
		ex02/Account.hpp
		ex02/tests.cpp
)