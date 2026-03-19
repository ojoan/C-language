#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product(string name, double price){
        this->name = name;
        this->price = price;
    }

    Product(string name) {
        this->name = name;
        this->price = 10;
    }

    void showDetails() {
        cout<<"Product: "<< name << ", Price: "<<price<<endl;
    }
};

int main() {

    Product p1("Pen", 3.5);
    Product p2("pencil");

    p1.showDetails();
    p2.showDetails();

    return 0;
}
