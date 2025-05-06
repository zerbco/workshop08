// EquivalenceTests.h
#ifndef EQUIVALENCETEST_H
#define EQUIVALENCETEST_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        testZeroValues();
        testMixedValues();
        testLargeNumbers();
        testSpecialCases();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    // Add other test functions here
    void testZeroValues() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Zero test failed!" << std::endl;
        }

        if (addition.add(0,10) != 10) {
            std::cout << "Zero + positive test failed!" << std::endl;
        }
        if (addition.add(0, -5) != -5) {
            std::cout << "Zero + negative test failed!" << std::endl;
        }
    }

    void testMixedValues() {
        Addition addition;

        if (addition.add(100, -50) != 50) {
            std::cout << "Mixed test 1 failed!" << std::endl;
        }

        if (addition.add(-100, 25) != -75) {
            std::cout << "Mixed test 2 failed!" << std::endl;
        }

    }

    void testLargeNumbers() {
        Addition addition;

        if (addition.add(10000, 20000) != 30000) {
            std::cout << "Large numbers test 1 failed!" << std::endl;
        }
        
        if (addition.add(-50000, -30000) != -80000) {
            std::cout << "Large numbers test 2 failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Special case test 1 failed!" << std::endl;
        }
        
        if (addition.add(-1, -1) != -2) {
            std::cout << "Special case test 2 failed!" << std::endl;
        }
    }

};

#endif