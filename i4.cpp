/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class Discounted-Item (discount-percent). A customer 
purchases 'n' items. Display the item-wise bill and total amount using appropriate format.*/

#include <iostream>
#include <iomanip>
using namespace std;

class Item {
protected:
    int item_no;
    string name;
    float price;

public:
    void read() {
        cout << "Enter Item No: ";
        cin >> item_no;
        cin.ignore();
        cout << "Enter Item Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display_basic() const {
        cout << setw(10) << item_no << setw(20) << name << setw(10) << fixed << setprecision(2) << price;
    }

    float get_price() const {
        return price;
    }
};

class DiscountedItem : public Item {
private:
    float discount_percent;

public:
    void read() {
        Item::read();
        cout << "Enter Discount Percentage: ";
        cin >> discount_percent;
    }

    void display_with_discount() const {
        display_basic();
        float discounted_price = price - (price * discount_percent / 100);
        cout << setw(15) << discount_percent << "%" << setw(15) << fixed << setprecision(2) << discounted_price << endl;
    }

    float get_discounted_price() const {
        return price - (price * discount_percent / 100);
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    DiscountedItem* items = new DiscountedItem[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        items[i].read();
    }

    cout << "\n\n" << setw(10) << "Item No" << setw(20) << "Name" << setw(10) << "Price" << setw(15) << "Discount"
    << setw(15) << "Final Price" << endl;

    cout << string(70, '-') << endl;

    float total = 0;
    for (int i = 0; i < n; ++i) {
        items[i].display_with_discount();
        total += items[i].get_discounted_price();
    }

    cout << string(70, '-') << endl;
    cout << setw(55) << "Total Amount: " << setw(15) << fixed << setprecision(2) << total << endl;

    delete[] items;
    return 0;
}
