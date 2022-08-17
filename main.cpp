#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

list<string> Cart;
string CartList = "";

class ShoppingCart {
public:
    string ItemOne, ItemTwo, ItemThree;

    virtual void addToCart(string item) {
        ItemOne = item;
        Cart.emplace_front(ItemOne);
        cout << ItemOne << " has been added to cart." << endl;
    }
};

class ShoppingCartExt:public ShoppingCart {
public:
    using ShoppingCart::addToCart;

    void addToCart(string item, string item2) {
        ItemOne = item, ItemTwo = item2;
        Cart.emplace_front(ItemOne);
        Cart.emplace_front(ItemTwo);
        cout << ItemOne << " and " << ItemTwo << " has been added to cart." << endl;
    }

    void addToCart(string item, string item2, string item3) {
        ItemOne = item, ItemTwo = item2, ItemThree = item3;
        Cart.emplace_front(ItemOne);
        Cart.emplace_front(ItemTwo);
        Cart.emplace_front(ItemThree);
        cout << ItemOne << ", " << ItemTwo << ", and " << ItemThree << " has been added to cart." << endl;
    }

    void viewCart() {
        cout << "The cart currently has: " << endl;
        for(auto& it: Cart) {
            cout << it << " " << endl;
        }
    }
    
    void exportToFile() {
        
        for(auto& it: Cart) {
            CartList = CartList + it + "\n";
        }
        
        ofstream CartFile;
        CartFile.open("cartlist.txt");
        CartFile << CartList;
        CartFile.close();
    }
};


int main() {    // test class

    ShoppingCart test;
    ShoppingCartExt test1;
    test.addToCart("CD");
    test1.addToCart("Eraser");   // test to see that ShoppingCartExt can also add a single item
    //test.addToCart("0");       // can submit unwanted characters, numbers, etc
    test1.addToCart("Book", "Magazine");
    test1.addToCart("Pen", "Paper", "Pencil");
    test1.viewCart();
    test1.exportToFile();

    return 0;
}