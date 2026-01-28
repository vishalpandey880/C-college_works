#include <iostream>
using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++)
//          fact *= i;
//     return fact;
// }

// int main() {
//     int num;
//     cout << "Enter number:" ;
//     cin >> num;
//     cout << "Factorial = " << factorial(num) << endl;
//     return 0;
// }


// int reverse(int a) {
//     int rev = 0;
//    do {
//         rev = rev * 10 + (a % 10);
//         a /= 10;
//     } while (a != 0);

//     return rev;
// }

// int main() {
//    int num;
//    cout << "Enter a number:" ;
//    cin >> num;
//         cout << "Reverse = " << reverse(num) << endl;
//     return 0;
// }

//fibonacci series

// int fibonacci(int n) {
//     if(n <= 1)
//        return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {
//     int n;
//     cout << "Enter terms: ";
//     cin >> n;
//     for(int i = 0; i < n; i++)
//       cout << fibonacci(i) << " ";
//       return 0;
// }

//Inline function 

// inline int maximum(int a, int b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     cout << "Max = " << maximum(10,20) << endl;
//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------------

// with temp variable //

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 5, y = 10;

//     swap(x, y);   

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     return 0;
// }

// without temp variable //
// void swap(int &a, int &b) {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int main() {
//     int x = 5, y= 10;
//     swap(x,y);
//     cout << "x =" << x << endl;
//     cout << "y =" << y << endl;
//     return 0;
// }


// ---------------------------------------------------------------------------------------------------------------------------

//function overloading

// int add(int a, int b) {
//     return a + b ;
// }

// float add(float a, float b) {
//     return a + b ;
// }

//--------------------------------------------------------------------------------------------------------------------------

// void areasquare(float s) {
//     cout << "Area of Square = " << s*s << endl;
// }

// void arearectangle(float l, float b) {
//      cout << "Area of Rectangle = " << l*b << endl;
// }

// void areacircle(float r) {
//     cout << "Area of circle = " << 3.14*r*r << endl;
// }

// void areatriangle(float height, float base) {
//     cout << "Area Trangle = " << 0.5*height*base << endl;
// }

// int main() {
//     int choice;
// }

//--------------------------------------------------------------------------------------------------------------------------

// int main() {
//     int x = 25;
//     int *p = &x;
//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value stored in p: " << p << endl;
//     cout << "Value pointed by p: " << *p << endl;
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------

//pointer as function argument(call by Address)

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 10, y = 20;

//     swap(&x, &y);   

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------------

// null pointer 

// int main() {
//     int *p = nullptr;

//     if (p == nullptr) {
//         cout << "Pointer is null." << endl;
        
//         return 0;
//     }
// }

//------------------------------------------------------------------------------------------------------------------------
// taking array input from user
int main() {
    int arr[3];
    cout << "Enter 3 numbers:\n ";
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are:\n";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}