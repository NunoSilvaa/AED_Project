cmake_minimum_required(VERSION 3.20)
project(airport)

set(CMAKE_CXX_STANDARD 14)

add_executable(airport main.cpp src/planes.h src/passenger.h src/luggage.h src/passenger.cpp src/luggage.cpp src/ticket.h src/ticket.cpp menus/mainMenu.cpp menus/mainMenu.h menus/clientMenu.cpp menus/clientMenu.h)
