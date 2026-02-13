#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y, result;

    cout << "Enter First Integer number: ";
    cin >> x;

    cout << "Enter Second number: ";
    cin >> y;

    result = max(x,y);

    cout << "The maximum number is: " << result;

}