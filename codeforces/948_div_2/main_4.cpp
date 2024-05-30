#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "CardDetails.h"
#include "PaymentHandling.h"



int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed for random number generation

    std::tm paymentDate = {};
    time_t t = time(0);
    paymentDate = *localtime(&t);

    CardDetails cardDetails;
    cardDetails.cardNumber = "1234567812345678";
    cardDetails.cardHolderName = "John Doe";
    cardDetails.expiryDate = paymentDate; // For example
    cardDetails.CVV = 123;

    double amount;
    std::cout << "Enter payment amount: ";
    std::cin >> amount;

    if (std::cin.fail()) {
        std::cerr << "Invalid input for payment amount. Please enter a numeric value." << std::endl;
        return 1;
    }

    PaymentHandling payment(amount, paymentDate, "Initialized");

    if (payment.processPayment(amount, cardDetails)) {
        std::cout << "Payment processed successfully!" << std::endl;
    } else {
        std::cout << "Payment processing failed!" << std::endl;
    }

    payment.displayPaymentDetails();

    return 0;
}
