#include <iostream>
#include <string>

using namespace std;

class Produto {
private:
    string name;
    double price;

public:
    Produto(string name, double price){
        this->name = name;
        this->price = price;
    }

    Produto(string name) {
        this->name = name;
        this->price = 10;
    }

    void showDetails() {
        cout<<"Product: "<< name << ", Price: "<<price<<endl;
    }
};

int main() {

    Produto p1("Pen", 3.5);
    Produto p2("pencil");

    p1.showDetails();
    p2.showDetails();

    return 0;
}
