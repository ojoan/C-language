#include<iostream>

using namespace std;

int main() {
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    if (number > 0) {
        cout<<"The number is positive: "<<number<<endl;
    }
    else if (number < 0) {
        cout<<"The number is negative: "<<number<<endl;
    }
    else {
        cout<<"The number is equal to zero: "<<number<<endl;
    }

    cout<<"End of the program";
}
