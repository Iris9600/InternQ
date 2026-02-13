#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter Number: ";
    cin >> number;

    if (number %2 == 0){
        cout << number << " is even number";
        return number;

    }else if (number %2 != 0) {
        cout << number << " is odd number";
        return number;
    }
}