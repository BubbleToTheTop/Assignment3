#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    // Creates object of type Product with default values.
    Product();
    // Creates objects of type Product with provided values.
    Product(double price, double warranty, string type, double discount, string details = "");
    // Setters
    void setPrice(double amount);
    void setWarranty(double value);
    void setType(string typeOf);
    void setDiscount(double amount);
    void setDetails(string detail);
    // Getters
    double getPrice() const;
    double getWarranty() const;
    string getType() const;
    double getDiscount() const;
    string getDetails() const;
    // Subtract discount amount from price, adds warranty value and returns final value.
    double getPriceWithDiscount() const;
    // Adds warranty plan amount to price and returns final value.
    double getPriceWithWarranty() const;
    // Displays only the price with warranty plan value added.
    void displayPrice() const;
    // Displays price with discount given.
    void displayPriceDiscountAdded() const;

private:
    double price;
    double warrantyValue;
    string type;
    double discount;
    string details;
};




#endif // PRODUCT_H_INCLUDED
