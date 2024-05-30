#ifndef PAYMENTHANDLING_H
#define PAYMENTHANDLING_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "CardDetails.h"
class PaymentHandling {
private:
    int paymentID;
    double amount;
    std::tm paymentDate;
    std::string paymentStatus;

public:
    PaymentHandling(double amt, std::tm date, std::string status)
        : amount(amt), paymentDate(date), paymentStatus(status) {
        paymentID = rand() % 10000 + 1; // Generate a random payment ID between 1 and 10000
    }

    bool processPayment(double amt, CardDetails cardDetails) {
        if (cardDetails.validateCardDetails()) {
            amount = amt;
            // Add logic to process payment
            paymentStatus = "Processed";
            return true;
        }
        return false;
    }

    bool verifyPayment(int id) {
        // Add logic to verify payment
        return id == paymentID;
    }

    bool refundPayment(int id) {
        if (verifyPayment(id)) {
            // Add logic to process refund
            paymentStatus = "Refunded";
            return true;
        }
        return false;
    }

    void displayPaymentDetails() {
        std::cout << "Payment ID: " << paymentID << std::endl;
        std::cout << "Amount: " << amount << std::endl;
        std::cout << "Payment Date: " << std::asctime(&paymentDate);
        std::cout << "Payment Status: " << paymentStatus << std::endl;
    }
};

#endif