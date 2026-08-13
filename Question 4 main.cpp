#include "product.h"
#include <iomanip>

using namespace std;

int main()
{
    const int arraySize = 30;
    int amountOfProducts = 0;

    while (amountOfProducts < 1 || amountOfProducts > 30){
        cout << "Enter the amount of products: ";
        cin >> amountOfProducts;
        }

    Product products[arraySize];
    // Loop to get the values to the arguments of the overloaded constructor.
    for (int i = 0; i < amountOfProducts; i++){

        double price, warranty = 0, discount = 0;
        // Answer is used for the user's answer to warranty plan.
        char answer = ' ';
        string detail, type;

        cout << "+++++++++++++++++++++\n";

        cout << "Type: ";
        cin >> type;

        cout << "Price: ";
        cin >> price;
        // Determine if user would like warranty plan.
        while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n'){
            cout << "Would you like to purchase a warranty plan?(y/n): ";
            cin >> answer;
        }
        // If user enters n/N, discount and warranty value are set to zero. See else condition.
        if (answer == 'Y' || answer == 'y'){
            while (warranty <= 0 || discount <= 0){
                cout << "Warranty amount in Rands: ";
                cin >> warranty;
                // Option for discount is only available if user selects yes for warranty.
                cout << "Enter discount amount in Rands: ";
                cin >> discount;
            }

        }
        else{

            warranty = 0;
            discount = 0;
        }

        cout << "Detail: ";
        // Ignores anything left over from user input.
        // Ensures getline() doesn't get the newline chracter by accident.
        cin.ignore();
        getline(cin, detail);

        cout << "+++++++++++++++++++++\n";

        products[i] = Product(price, warranty, type, discount, detail);
    }
    // Setting precision so two digits after the comma appear.
    cout.setf(ios::fixed);
    cout.precision(2);
    // Print prices to the screen.
     for (int j = 0; j < amountOfProducts; j++){
        // Price and warranty plan value added.
        products[j].displayPrice();
        // Price, warranty plan value added and discount subtracted.
        products[j].displayPriceDiscountAdded();
     }
}
