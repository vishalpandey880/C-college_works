#include <iostream>
using namespace std;

int main() {
    int a , b ,addition,subtraction,multiplication;
    cout << "enter the first number:";
    cin >> a;

    cout << "enter second number:";
    cin >> b;
    addition = a + b;
    subtraction=a -b;
    multiplication=a*b;


    cout << "addition= " << addition << endl;
    cout << "subtraction= " << subtraction << endl;
    cout << "multiplication= " << multiplication << endl;
}