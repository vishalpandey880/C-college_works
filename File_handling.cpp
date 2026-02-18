//Write Data to a file 
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include <iostream>

// int main() {

// ofstream fout;
//  fout.open("data.txt");

// fout << "Welcome to C++ File Handling";

// fout.close();

// cout << "Data written to file";

// return 0;
// }

//==============================================

// int main() {
//   ifstream fin;
//   string line;
//   fin.open("lololol.txt");
//   getline(fin, line);
//   cout << line << endl;

//   fin.close();
//   return 0;
// }

//Write Multiple Lines to a File 

// int main() {
    


//     fout << "Roll:1\n";
//     fout << "Name: Rahul\n";
//     fout << "Marks: 85\n";

//     fout.close();
//     cout << "Student data saved";
//     return 0;
// }

//Append Data to Existing File :

// int main() {
//     ofstream fout("student.txt" , ios::app);
     
//  fout << "Greade: A\n";
//  fout.close();

//  cout << "Data appended";
//  return 0;
// }

//Write User Input From user

// int main() {
//     ofstream fout("input.txt");
//     string name;

//     cout << "Enter your name: ";
//     cin >> name;

//     fout << name;
//     fout.close();

//     cout << "Name saved to file ";
//     return 0;
// }

//Count number of words in a file 

int main() {
    ifstream file("data.txt");
    string word;
    int count=0;

    while(file >> word) {
        count++;
    }

    file.close();
    cout << "Number of words: " << count << endl;
    return 0;
}

//Search a word in a file 

int main() {
    ifstream file("data.txt");
    string word,search;
    bool found = false;

    cout << "Enter word to search:";
    cin >> search;

    while (file >> word) {
        if(word == search ) {
            found = true;
            break;
        }
    }
    file.close();
    if(found)

    cout << "Word found";
    else
    cout << "Word not found";
    return 0;
}