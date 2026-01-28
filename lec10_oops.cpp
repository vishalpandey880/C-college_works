// #include <iostream>
// using namespace std;
// class Car
// {
// public:
// string brand;
// int year;
// void show()
// {
// cout << "Brand: " << brand << endl;
// cout << "Year: " << year << endl;
// }
// };
// int main()
// {
// Car c1;
// c1.brand = "Toyota";
// c1.year = 2022;
// c1.show();
// return 0;
// }

//-------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    int year;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setYear(int y)
    {
        year = y;
    }

    string getBrand()
    {
        return brand;
    }

    int getYear()
    {
        return year;
    }
};

int main()
{
    Car c1;

    c1.setBrand("Toyota");
    c1.setYear(2022);

    cout << "Brand: " << c1.getBrand() << endl;
    cout << "Year: " << c1.getYear() << endl;

    return 0;
}
