// Array of Even odd Numbers

#include <iostream>
using namespace std;

// int main() {
//   int array[6] = {10, 15, 20, 25, 30, 35};

//   cout << "Even numbers: ";
//   for (int i = 0; i < 6; i++) {
//     if (array[i] % 2 == 0)
//       cout << array[i] << " ";
//   }

//   cout << "\nOdd Number: ";
//   for (int i = 0; i < 6; i++) {
//     if (array[i] % 2 != 0)
//       cout << array[i] << " ";
//   }
//   return 0;
// }

//-----------------------------------------------------------------------------------------------------
//positive negative 

// int main() {
//     int arr[6]={5,-2,9,-7,3,-1};
//     int pos = 0,neg=0;

//     for(int i = 0; i<6; i++){
//         if(arr[i]>=0)
//         pos++;
//         else
//         neg++;
//     }
// cout << "Positive numbers = " << pos << endl;
// cout << "Negative numbers = " << neg << endl;

// return 0;
// }

//----------------------------------------------------------------------------
//Search an Element in Array(Linear search)

int main(){
    int arr[5]={10,20,30,40,50};
    int key,found=0;

    cout << "Enter Number to search: ";
    cin >> key;

    for(int i=0;i<5; i++){
        if(arr[i]==key){
            found = 1;
            break;
        }
    }

    if(found)
    cout << "Element found";
    else
    cout << "Element not found";
    return 0;
}