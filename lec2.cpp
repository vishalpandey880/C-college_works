#include <iostream>
using namespace std;

// int main(){
// int a , b ; 
//     cout << "enter the first number:";
//     cin >> a;

//         cout << "enter second number:";
//     cin >> b;
//     if (a > b){
//     cout << "greater number is " << a << endl;
//     };
//             if  (a < b){
//         cout << "greater number is " << b << endl;
//     }
//     }

//-----------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int marks, num;

//     cout << "Enter marks: ";
//     cin >> marks;

//     string result = (marks >= 40) ? "Pass" : "Fail";
//     cout << "Result: " << result << endl;

//     cout << "Enter number: ";
//     cin >> num;

//     (num % 2 == 0) ? cout << "Even number" : cout << "Odd number";

//     return 0;
// }
//---------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
    int age, marks;
    cout << "enter your age :";
    cin >> age;

    cout<<"enter your marks:";
    cin >> marks;
if(age>=18 && marks >= 40){
    cout<<"eligible and passed"<<endl;

}else{
    cout<<" not eligable or failed"<<endl;
}
}