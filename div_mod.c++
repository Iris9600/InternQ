#include <iostream>
using namespace std;

void computemethod(int x, int y){
  
    if (y == 0){
        cout << "error, give an positive number" << endl;
        return;
    }

    //q = /, r = % 
    int q = 0;
    int r = x;

    while (r >= y){
        r = r - y;
        q++;
    }

    cout << "The integer division of " << x << " and " << y << " is: " << q << endl;
    cout << "The remainder of " << x << " and " << y << " is: " << r << endl;
}

int main(){
    int x;
    int y;

    cout << "Enter first integer: " << endl;
    cin >> x;

    cout << "Enter second integer: " << endl;
    cin >> y;

    computemethod(x,y);
}