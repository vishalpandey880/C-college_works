// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     switch (ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             cout << "Vowel"<<endl;
//             break;
//         default:
//             cout << "Consonant"<<endl;
//     }
//    return 0;
// }

//---------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
// for (int i = 5; i >= 1; i--) {        
// for (int j = 1; j <= i; j++) {    
// cout << "*";
// }
// cout << endl;
//     }
//     return 0;
// }

//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {        
        for (int j = 1; j <= i; j++) {    
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
