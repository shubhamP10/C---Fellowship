#include <any>
#include "Printer.h"
#include "Reader.h"
#include "PrinterConfig.h"
#include <cassert>

#ifdef USE_LIB
#include "addition.h"
#endif

int main() {
    std::any value = 13;
    std::string name = "Shyam";
    Printer::print("Hello ");
    Printer::println(name);
    
    
    int first = 12;
    int second = 13;
    
    int result;
    
#ifdef USE_LIB
    result = add(first, second); // 25
#else
    result = first + second + 1; // 26
#endif
    
    Printer::println("The result is " + std::to_string(result));
    
    // uncomment the below line to fail the tests
//    assert(result == 26);
}
