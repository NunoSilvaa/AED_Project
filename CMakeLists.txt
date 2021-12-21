cmake_minimum_required(VERSION 3.20)
project(airport)

set(CMAKE_CXX_STANDARD 14)

add_executable(airport main.cpp src/passenger.h src/luggage.h src/passenger.cpp src/luggage.cpp src/ticket.h src/ticket.cpp menus/mainMenu.cpp menus/mainMenu.h menus/clientMenu.cpp menus/clientMenu.h src/plane.cpp src/plane.h src/flight.cpp src/flight.h menus/flightsMenu.cpp menus/flightsMenu.h utilities/time.cpp utilities/time.h utilities/date.cpp utilities/date.h utilities/os.h menus/bookingMenu.cpp menus/bookingMenu.h menus/reservationMenu.cpp menus/reservationMenu.h menus/bossMenu.cpp menus/bossMenu.h)

# Doxygen Build
find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(BUILD_DOC_DIR "${CMAKE_SOURCE_DIR}/docs/output")
    if(NOT EXISTS "${BUILD_DOC_DIR}")
        file(MAKE_DIRECTORY "${BUILD_DOC_DIR}")
    endif()
    set(DOXYGEN_IN "${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile")
    set(DOXYGEN_OUT "${CMAKE_CURRENT_BINARY_DIR}/Doxyfile")
    configure_file("${DOXYGEN_IN}" "${DOXYGEN_OUT}" @ONLY)
    message("Doxygen build started")
    add_custom_target(Doxygen ALL
            COMMAND "${DOXYGEN_EXECUTABLE}" "${DOXYGEN_OUT}"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
            COMMENT "Generating API documentation with Doxygen"
            VERBATIM)
else(DOXYGEN_FOUND)
    message("Doxygen needs to be installed to generate the documentation.")
endif(DOXYGEN_FOUND)
