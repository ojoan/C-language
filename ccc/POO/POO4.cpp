#include <iostream>
#include<string>

using namespace std;

int main () {
    int i = 1;
    int j = 1;

    while (i <= 10) {
        cout<<"number: "<< i <<endl;
        i++;
    };
    cout<<endl<<"End of the \"While\"."<<endl<<endl;


    do {
        cout<<"number: "<< j <<endl;

        j++;
    } while (j <= 10);
    cout<<endl<<"End of \"Do While\"."<<endl<<endl;


    for (int k = 1; k <= 10; k++) {
        cout<<"number: "<< k <<endl;
    }
    cout<<endl<<"End of the \"For\"."<<endl;


    cout<<endl<<"End of the program.";
    return 0;
}