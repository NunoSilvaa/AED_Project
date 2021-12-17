cmake_minimum_required(VERSION 3.20)
project(airport)

set(CMAKE_CXX_STANDARD 14)

add_executable(airport main.cpp src/passenger.h src/luggage.h src/passenger.cpp src/luggage.cpp src/ticket.h src/ticket.cpp menus/mainMenu.cpp menus/mainMenu.h menus/clientMenu.cpp menus/clientMenu.h src/plane.cpp src/plane.h src/flight.cpp src/flight.h menus/flightsMenu.cpp menus/flightsMenu.h utilities/time.cpp utilities/time.h utilities/date.cpp utilities/date.h utilities/os.h menus/bookingMenu.cpp menus/bookingMenu.h src/service.cpp src/service.h)
