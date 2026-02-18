#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  int choice;

  cout << "Enter a string: ";
  getline(cin, str);

  // Save the original input to a file
  ofstream outFile("output.txt");
  if (!outFile) {
    cout << "Error: Could not create output file!\n";
    return 1;
  }
  outFile << "Original String: " << str << endl;
  outFile << "----------------------------\n";

  do {
    cout << "\n------ MENU ------\n";
    cout << "1. Find Length\n";
    cout << "2. Replace Word\n";
    cout << "3. Count Vowels\n";
    cout << "4. Search Word\n";
    cout << "5. Save to File\n";
    cout << "6. Read from File\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // clear buffer

    if (choice == 1) {
      cout << "Length of string: " << str.length() << endl;
      outFile << "Length of string: " << str.length() << endl;
    }

    else if (choice == 2) {
      string oldWord, newWord;
      cout << "Enter word to replace: ";
      cin >> oldWord;
      cout << "Enter new word: ";
      cin >> newWord;

      size_t pos = str.find(oldWord);

      if (pos == string::npos) {
        cout << "Word \"" << oldWord << "\" not found in the string!\n";
        outFile << "Replace: \"" << oldWord << "\" not found.\n";
      } else {
        while (pos != string::npos) {
          str.replace(pos, oldWord.length(), newWord);
          pos = str.find(oldWord, pos + newWord.length());
        }
        cout << "Modified string: " << str << endl;
        outFile << "Replaced \"" << oldWord << "\" with \"" << newWord
                << "\": " << str << endl;
      }
    }

    else if (choice == 3) {
      int vowels = 0;

      for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
          vowels++;
      }

      cout << "Total Vowels: " << vowels << endl;
      outFile << "Total Vowels: " << vowels << endl;
    }

    else if (choice == 4) {
      string searchWord;
      cout << "Enter word to search: ";
      cin >> searchWord;

      size_t pos = str.find(searchWord);

      if (pos != string::npos) {
        cout << "Word \"" << searchWord << "\" found at position " << pos
             << endl;
        outFile << "Search: \"" << searchWord << "\" found at position " << pos
                << endl;
      } else {
        cout << "Word \"" << searchWord << "\" not found in the string.\n";
        outFile << "Search: \"" << searchWord << "\" not found.\n";
      }
    }

    else if (choice == 5) {
      // Save current string to file
      ofstream saveFile("output.txt");
      if (saveFile) {
        saveFile << "Current String: " << str << endl;
        saveFile.close();
        cout << "String saved to output.txt successfully!\n";
      } else {
        cout << "Error: Could not save to file!\n";
      }
    }

    else if (choice == 6) {
      // Read string from file
      ifstream readFile("output.txt");
      if (readFile) {
        string line;
        cout << "\n--- File Contents ---\n";
        while (getline(readFile, line)) {
          cout << line << endl;
        }
        cout << "---------------------\n";
        readFile.close();
      } else {
        cout << "Error: Could not open file for reading!\n";
      }
    }

    else if (choice == 7) {
      outFile << "----------------------------\n";
      outFile << "Program Ended.\n";
      cout << "Program Ended.\n";
    }

    else {
      cout << "Invalid Choice!\n";
    }

  } while (choice != 7);

  outFile.close();
  return 0;
}