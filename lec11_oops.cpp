#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

//non-void functions 
int add(int a, int b){
    return a+ b;
}

// void function 
void greet() {
    cout << "Welcome to C++ Function\n";
} 

//boolean return Function 

bool isEvent(int n) {
    return(n % 2 == 0);
}

// call by value 
void callByValue(int x) {
    x = 100;
    cout << "Inside callByValue function: " << x << endl;
}

//call by reference
void callByReference(int &x) {
    x = 200;
}

//call by pointer
void callByPointer(int *x) {
    *x = 300;
}

int main() { 
    cout << "\n==== call by value ====\n";
    int a = 10;
    callByValue(a);
    cout << "After callByValue function: " << a << endl;

    cout << "\n==== call by reference ====\n";
    int b = 20;
    callByReference(b);
    cout << "After callByReference function: " << b << endl;

    cout << "\n==== call by pointer ====\n";
    int c = 30;
    callByPointer(&c);
    cout << "After callByPointer function: " << c << endl;
    return 0;
}

