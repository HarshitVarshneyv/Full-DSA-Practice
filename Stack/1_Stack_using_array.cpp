#include<iostream>
#include<vector>
using namespace std;

class Stack {
    int capacity ;
    int* arr;
    int top;

    public :
    Stack(){
        capacity  = 1000;
        top = -1;
        arr = new int[capacity]; 
    }

    void push(int x){
        arr[++top] = x;
    }

    int pop(){
        return arr[top--];
    }

    int peek() {
        return arr[top];
  }

    int getsize() {
        return top + 1;
  }
};
int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop();
    return 0;
}