// #include<iostream>
// using namespace std;

// class Employee{
//     public:
//     int empID;

//     void showID(){
//         cout << "Emplyee ID: "<< empID<<endl;

//     }
// };

// class Salary: public Employee{
//     public:
//     int salary;

//     void showSalary(){
//         cout << "Salary: "<< salary<<endl;
//     }
// };

// int main()
// {
//     Salary s;
//     s.empID = 123;
//     s.salary = 5000;
//     s.showID();
//     s.showSalary();
//     return 0;
// }

// -------------------------------------------------------------------------------------

// Multilevel Inheritance(Marks -> result)

#include <iostream>
using namespace std;

// class student {
// public:
//   int roll = 1;
// };

// class marks : public student {
// public:
//   int m1 = 80, m2 = 85;
// };

// class result : public marks {
// public:
//   void display() {
//     cout << "Roll: " << roll << endl;
//     cout << "Total marks: " << m1 + m2 << endl;
//   }
// };

// int main() {
//   result r;
//   r.display();
//   return 0;
// }

//-----------------------------------------------------------------------------------------

// class Student {
// public:
//   int roll;
//   void input() { cin >> roll; }
// };

// class marks : public Student {
// public:
//   int python = 80, cpp = 85, HTML = 90, JS = 75;
// };

// class Result : public marks {
// public:
//   void display() {
//     cout << "Roll no: " << roll << endl;
//     cout << "Total Marks: " << python + cpp + HTML + JS << endl;
//     cout << "Total percentage: " << ((python + cpp + HTML + JS) * 100 / 400)
//          << endl;
//   }
// };

// int main() {
//   Result r;
//   r.input();
//   r.display();
//   return 0;
// }

// ----------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// class sports {
//     public:
//     int score = 20;
// };
// class academic {
//     public:
//     int marks = 80;
// };
// class student : public sports, public academic {
//     public:
//     void total() {
        
//         cout << "Total: " << (marks + score) << endl;
//     }
// };
// int main() {
//     student s;
//     s.total();
//     return 0;
// }

//-----------------------------------------------------------------------------------------

// base class
// class shape {
//     public:
//      void draw() {
//         cout << "Drawing shape" << endl;
//      }
// };

// // Derived class1 
// class Rectangle : public shape {
//     public:
//     float length,breadth;

//     void area() {
//         cout << "Area of Rectangle =" << length * breadth << endl;

//         //formula : Area = length * breadth
//     }
// };


//--------------------------------------------------------------------

//Base class  

class Account {
    protected:
    int accNo;
    float balance;

    public:
         void getAccountDetails() {
            cout << "Enter Account Number: " ;
            cin >> accNo;
            cout << "Enter Balance: " ;
            cin >> balance;
         }

    void showBalance() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

//Derived class 1

class SavingAccount : public Account {
    public:
    float intrestRate;

    void calculateIntrest() {
        cout << "Enter Intrest Rate (%): ";
        cin >> intrestRate;

        float intrest = (balance*intrestRate)/100;
        cout << "Intrest = " << intrest << endl;
    }
};

// class 2

class CurrentAccount : public Account {
    public:
    float overdraftLimit;

    void checkOverdraft() {
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;

        cout << "Total Available Amount = "<< balance+overdraftLimit << endl;
    }
};

int main() {
    SavingAccount sa;
    CurrentAccount ca;

    cout << "/n--- saving Account ---\n";
    sa.getAccountDetails();
    sa.showBalance();
    sa.calculateIntrest();

    cout << "\n--- Current Account ---\n";
    ca.getAccountDetails();
    ca.showBalance();
    ca.checkOverdraft();

    return 0;
}

//------------------------------------------------

//function Overloading

#include <iostream>
using namespace std;
class Add {
    public :
    int sum (int a, int b) {
        return a + b;
    }
    float sum (float a, float b) {
        return a + b;
    }
    float sum (int a, float b) {
        return a + b;
    }
    float sum (float a, int b) {
        return a + b;
    }
};

int main() {
    Add obj;
    cout << obj.sum(10,20) << endl;
    cout << obj.sum(2.5f, 3.5f) << endl;
    cout << obj.sum(5, 3.5f) << endl;
    cout << obj.sum(6.5f, 7) << endl;
    return 0;
}

//-------------------------------------------------------------------
