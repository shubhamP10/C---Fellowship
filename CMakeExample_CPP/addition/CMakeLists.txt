add_library(addition addition.cpp)
install(TARGETS addition DESTINATION lib)
install(FILES addition.h DESTINATION include)