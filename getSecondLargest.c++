#include <iostream>
using namespace std;

int main(){
    int array[] = {3,1,4,1,5,9,7};
    int n = sizeof(array)/sizeof(array[0]);

    int num1 = INT_MIN;
    int num2 = INT_MIN;

    for (int i = 0; i < n; i++){
        if(array[i] > num1){
            num2 = num1;
            num1 = array[i];
        }else if(array[i] > num2 && array[i] != num1){
            num2 = array[i];
        }
    }
    cout << "The second largest number is: " << num2 << endl;
}