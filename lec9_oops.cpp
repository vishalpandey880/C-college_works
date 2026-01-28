// how to create class and how to access user data
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//       int rollNo;
//       string name;

//       void display()
//       {
//         cout << "RollNo : " << rollNo << endl;
//         cout << "Name : " << name << endl;
//       }
//     };

//     int main()
//     {
//         Student s1; // Object creation

//         s1.rollNo = 101;
//         s1.name = "Vishal";

//         s1.display();

//         return 0;
  //  }
// ---------------------------------------------------------------------------------
// same code its for book

// #include <iostream>
// using namespace std;

// class Book
// {
// public:
//       string bookname;
//       float price;

//       void display()
//       {
//         cout << "Bookname : " << bookname << endl;
//         cout << "Price : " << price << endl;
//       }
//     };

//     int main()
//     {
//         Book b1; // Object creation

//         b1.bookname = "hello kitty";
//         b1.price = 100;


//         b1.display();

//         return 0;
//     }

// -------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class BankAccount 
// {
//  private:
//         int Balance;
        
//   public:
//        void setBalance(int b)
//     {
//         Balance = b;
//     }

//     int getBalance()
//     {
//         return Balance;
//     }
// };

// int main()
// {
//     BankAccount acc;

//     acc.setBalance(324);
//     cout << "Balance: " << acc.getBalance()<<endl ;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------
// Calculate the area of rectangle 

// #include <iostream>
// using namespace std; 

// class Rectangle 
// {
// public:
//       int length,width;
//       int area()
//       {
//         return length * width;
//       }
// };
// int main()
// {   
//     Rectangle r;
//     r.length = 5;
//     r.width = 4;
     
//     cout << "Area = "<< r.area()<<endl ;
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea() const
    {
        return length * width;
    }
};

int main() {
    double l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Rectangle rect(l, w);   

    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
