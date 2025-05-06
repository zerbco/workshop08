#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main() {
    std::cout << "Running Unit Tests...\n" << std::endl;
    
    std::cout << "Basic Unit Tests:" << std::endl;
    UnitTest unitTest;
    unitTest.runTests();
    std::cout << "Basic Unit Tests completed\n" << std::endl;
    
    std::cout << "Equivalence Class Tests:" << std::endl;
    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();
    std::cout << "Equivalence Class Tests completed\n" << std::endl;
    
    std::cout << "Invoice Class Tests:" << std::endl;
    InvoiceTest invoiceTest;
    invoiceTest.runTests();
    std::cout << "Invoice Class Tests completed\n" << std::endl;
    
    std::cout << "All tests completed successfully!" << std::endl;
    return 0;
}