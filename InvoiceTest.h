// InvoiceTest.h
#ifndef INVOICETEST_H
#define INVOICETEST_H
#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
        testConstructor();
        testGetDollarsOwed();
        testGetInvoiceId();
        testNegativeServiceCost();
        testZeroServiceCost();
        testMultipleServiceCosts();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here
    }
    void testConstructor() {
        Invoice invoice("INV-001");
        if (invoice.getDollarsOwed() != 0.0) {
            std::cout << "Constructor test failed: Initial dollars owed should be 0.0" << std::endl;
        }
        
        if (invoice.getInvoiceID() != "INV-001") {
            std::cout << "Constructor test failed: Invoice ID not set correctly" << std::endl;
        }
    }
    void testGetDollarsOwed() {
        Invoice invoice("INV-003");
        invoice.addServiceCost(50.0);
        invoice.addServiceCost(25.0);
        
        if (invoice.getDollarsOwed() != 75.0) {
            std::cout << "GetDollarsOwed test failed: Incorrect total" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("INVOICE-123");
        
        if (invoice.getInvoiceID() != "INVOICE-123") {
            std::cout << "GetInvoiceId test failed: ID doesn't match" << std::endl;
        }
    }
    void testNegativeServiceCost() {
        Invoice invoice("INV-004");
        bool result = invoice.addServiceCost(-50.0);
        
        if (result) {
            std::cout << "Negative cost test failed: Should reject negative costs" << std::endl;
        }
        
        if (invoice.getDollarsOwed() != 0.0) {
            std::cout << "Negative cost test failed: Amount should not be changed" << std::endl;
        }
    }

    void testZeroServiceCost() {
        Invoice invoice("INV-005");
        bool result = invoice.addServiceCost(0.0);
        
        if (result) {
            std::cout << "Zero cost test failed: Should reject zero costs" << std::endl;
        }
        
        if (invoice.getDollarsOwed() != 0.0) {
            std::cout << "Zero cost test failed: Amount should not be changed" << std::endl;
        }
    }
    void testMultipleServiceCosts() {
        Invoice invoice("INV-006");
        invoice.addServiceCost(10.0);
        invoice.addServiceCost(20.0);
        invoice.addServiceCost(30.0);
        
        if (invoice.getDollarsOwed() != 60.0) {
            std::cout << "Multiple costs test failed: Incorrect total" << std::endl;
        }
    }

    // Add other test functions here
};

#endif
