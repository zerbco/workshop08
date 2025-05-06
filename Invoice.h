
#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
    public:
    Invoice(const std::string& invoiceID);

    bool addServiceCost(double costDollars);

    double getDollarsOwed() const;

    std::string getInvoiceID() const;

    private:
    std::string invoiceId;
    double dollarsOwed;
};


#endif