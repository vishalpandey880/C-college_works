// #include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "enter marks :";
//     cin >> marks;

//     if (marks>=90){
//         cout<<"grade A"<<endl;
//     }
//     else if (marks >=75){
//         cout << "grade b"<<endl;
//     }
//     else if ( marks >= 50){
//         cout << "grade c"<<endl;
//     }
//     else {
//         cout <<"fail";
// };
// };

//-----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day";
    }

    return 0;
}

