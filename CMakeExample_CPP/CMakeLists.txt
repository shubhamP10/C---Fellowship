cmake_minimum_required(VERSION 3.16.3)

project(Printer)

option(USE_LIB "Using Addition Library" ON)
option(RUN_TESTS "Run Unit Tests" ON)

configure_file(PrinterConfig.h.in PrinterConfig.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES Printer/source/Printer.cpp Reader/source/Reader.cpp)

if(USE_LIB)
	add_subdirectory(addition)
	list(APPEND EXTRA_LIBS addition)
	list(APPEND EXTRA_INCLUDES addition)
endif()

set(INCLUDE_DIRS Printer/include Reader/include ${PROJECT_BINARY_BIN} ${EXTRA_INCLUDES})

include_directories(${INCLUDE_DIRS})

add_executable(printer_exec Main.cpp ${SOURCES})

target_link_libraries(printer_exec PUBLIC ${EXTRA_LIBS})

add_executable(runner_exec Runner.cpp ${SOURCES})

install(TARGETS printer_exec DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/PrinterConfig.h"
  DESTINATION include
  )

# testing 		(command => make test |or| /usr/local/bin/ctest -VV)
enable_testing()

# does the application run
add_test(NAME AppRunsOrNot COMMAND printer_exec)

# does the regex usage message work?
add_test(NAME CheckResult COMMAND printer_exec)
set_tests_properties(CheckResult
  PROPERTIES PASS_REGULAR_EXPRESSION "The result is 25"
)





