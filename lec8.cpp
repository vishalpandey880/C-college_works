//factorial of strong number check
// #include <iostream>
// using namespace std;
// int main() { 
//     int mum, temp, digit, sum = 0, fact;
//     cout << "Enter a number: ";
//     cin >> mum;
//     temp = mum;
//     while (temp > 0) {
//         digit = temp % 10;
//         fact = 1;
//         for (int i = 1; i <= digit; i++) {
//             fact *= i;
//         }
//         sum += fact;
//         temp /= 10;
//     }
//     if (sum == mum) {
//         cout << "It is a strong number." << endl;
//     } else {
//         cout << "It is not a strong number." << endl;
//     }
//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------

//identify a armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder,n = 0;
    double result = 0.0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
    }
    originalNum = num;
    while (originalNum > 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num) {
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is not an Armstrong number." << endl;
    }
    return 0;
}