#include <iostream>
using namespace std;
//     class Sports {
//         public :
//             int goals;
//             string name;
//             int assists;
//             void show() {
//                 cout << "Enter Player Name : ";
//                 cin>>name;
//                 cout << "Amount of goals scored : ";
//                 cin>>goals;
//                 cout << "Amount of assists given : ";
//                 cin>>assists;
//             }
//     };

//     class Club {
//         public : 
//             string team;
//             void sh() {
//                 cout <<"Team that the player plays for : ";
//                 cin>>team;
//             }
//     };

//     class Student : public Sports, public Club {
//         public :
//             void total() {
//                 cout<< "Name of the player is "<< name << endl;
//                 cout << "Team that the player plays for is "<<team<<endl;
//                 cout<< "Goals the player has scored is "<<goals<<endl;
//                 cout << "Assists the player has given are "<<assists<<endl;
//                 cout << "Total G/A = "<< goals + assists << endl;
                
//         }
//     };


// int main() {
//     Student s;
//     s.show();
//     s.sh();
//     s.total();
// }
//----------------------------------------------------------

class Student {
public:
 int roll;
 void input() { cin >> roll; }
};


class marks : public Student {
public:
 int python = 80, cpp = 85, HTML = 90, JS = 75;
};


class Result : public marks {
public:
 void display() {
   cout << "Roll no: " << roll << endl;
   cout << "Total Marks: " << python + cpp + HTML + JS << endl;
   cout << "Total percentage: " << ((python + cpp + HTML + JS) * 100 / 400)
        << endl;
 }
};


int main() {
 Result r;
 r.input();
 r.display();
 return 0;
}
