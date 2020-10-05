#include "Printer.h"
#include "Reader.h"

int main() {
    std::string name = Reader::read();
    
    Printer::print("Hello ");
    Printer::println(name);
}
