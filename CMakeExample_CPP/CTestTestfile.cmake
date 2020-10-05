# CMake generated Testfile for 
# Source directory: /home/shubham/Desktop/Fellowship/CMakeExample_CPP
# Build directory: /home/shubham/Desktop/Fellowship/CMakeExample_CPP
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AppRunsOrNot "/home/shubham/Desktop/Fellowship/CMakeExample_CPP/printer_exec")
set_tests_properties(AppRunsOrNot PROPERTIES  _BACKTRACE_TRIPLES "/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeLists.txt;40;add_test;/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeLists.txt;0;")
add_test(CheckResult "/home/shubham/Desktop/Fellowship/CMakeExample_CPP/printer_exec")
set_tests_properties(CheckResult PROPERTIES  PASS_REGULAR_EXPRESSION "The result is 25" _BACKTRACE_TRIPLES "/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeLists.txt;43;add_test;/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeLists.txt;0;")
subdirs("addition")
