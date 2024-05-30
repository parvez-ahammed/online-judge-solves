#include <string>
#include <ctime>
class CardDetails {
public:
    std::string cardNumber;
    std::string cardHolderName;
    std::tm expiryDate;
    int CVV;

    bool validateCardDetails() {
        // Add logic to validate card details
        return true;
    }

    std::string maskCardNumber() {
        // Add logic to mask card number, e.g., "**** **** **** 1234"
        return "**** **** **** " + cardNumber.substr(cardNumber.size() - 4);
    }
};