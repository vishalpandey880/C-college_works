// star triange
// #include <iostream>
// using namespace std;
// int main(){
//     int i, j, space;

//     for (i = 1; i <= 5; i++) {

//         for (space = 1; space <= 5 - i; space++) {
//             cout << " ";
//         }

//         for (j = 1; j <= i; j++) {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

//----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int i, j, count;

    for (i = 2; i <= 100; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout << i << " ";
        }
    }

    return 0;
}