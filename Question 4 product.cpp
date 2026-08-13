#include "product.h"
using namespace std;

Product::Product() : price(0), warrantyValue(0), type(""), discount(0), details("")
{
    // No body.
}
// Initializes an object of type Product with the values of the given arguments.
// A loop is used in main to get all of the values for the arguments.
Product::Product(double price, double warranty, string type, double discount, string details) : price(price), warrantyValue(warranty), type(type),
         discount(discount), details(details)
{
    // No body.
}

void Product::setPrice(double amount)
{
    price = amount;
}

void Product::setWarranty(double value)
{
    warrantyValue = value;
}

void Product::setType(string typeOf)
{
    type = typeOf;
}

void Product::setDiscount(double amount)
{
    discount = amount;
}

void Product::setDetails(string detail)
{
    details = detail;
}

double Product::getPrice() const
{
    return price;
}

double Product::getWarranty() const
{
    return warrantyValue;
}

string Product::getType() const
{
    return type;
}

double Product::getDiscount() const
{
    return discount;
}

string Product::getDetails() const
{
    return details;
}
// Returns price with warranty added and discount given.
// Helper function for displayPriceDiscountAdded().
double Product::getPriceWithDiscount() const
{
    // No check added to see if warranty plan purchased.
    // Check is done in main.
    double tempPrice = price;
    tempPrice -= discount;
    tempPrice += warrantyValue;
    return tempPrice;
}
// Returns price with warranty added and no discount.
// Helper function for displayPrice().
double Product::getPriceWithWarranty() const
{
    double tempPrice = price;
    tempPrice += warrantyValue;
    return tempPrice;
}

void Product::displayPrice() const
{
    cout << "==============================\n";
    cout << "Type of product: " << type << "\n";
    cout << "Details: " << details << "\n";
    cout << "Price with warranty plan: " << getPriceWithWarranty() <<endl;
}

void Product::displayPriceDiscountAdded() const
{
    cout << "Price with warranty plan and discount: " << getPriceWithDiscount() <<endl;
    cout << "==============================\n";
}
