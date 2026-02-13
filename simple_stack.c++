#include <iostream>
using namespace std;

class Stack{
    int top;
    int array[100];

    public:
    Stack() { top = -1; }
    bool push(int x){
        if(top >= (100 - 1)){
            cout << "Stack full" << endl;
            return false;
        }else {
            array[++top] = x;
            cout << x << "Add into stack" << endl;
            return true;
        }
    }

    int pop(){
        if(top < 0){
            cout << "Stack is empty" << endl;
            return false;
        }else{
            int val = array[top--];
            cout << "Remove from stack" << endl;
            return val;
        }
    }

    int peek(){
        if (top == 0){
            cout << "Stack is empty" << endl;
            return false;
        }else{
            return array[top];
        }
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element is: " << s.peek() << endl;
    cout << s.pop() << endl;
    cout << "New Top element is: " << s.peek() << endl;

}