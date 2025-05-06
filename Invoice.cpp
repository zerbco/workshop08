#include "Invoice.h"

Invoice::Invoice(const std::string& invoiceID) : invoiceId(invoiceID), dollarsOwed(0.0) {
}

bool Invoice::addServiceCost(double costDollars) {
    if (costDollars <= 0) {
        return false;
    }
    
    dollarsOwed += costDollars;
    return true;
}

double Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

std::string Invoice::getInvoiceID() const {
    return invoiceId;
}