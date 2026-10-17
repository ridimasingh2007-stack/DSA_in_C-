

// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99, 100, 54, 36, 88};

//     double price[] = {99.99, 105.00, 30.00};
//     marks[0] = 100;
//     cout << marks[0] << endl;
// } 

// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99, 100, 54, 36, 88};
//     int size = 5;

//     for(int i=0; i<size; i++){
//         cout << marks[i] << endl; // prints each element from 0 to size-1
//     }

   
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int size = 5;
//     int marks[size];

//     for(int i=0; i<size; i++){
//         cin >> marks[i];
//     }
//     for (int i=0; i<size; i++){
//         cout << marks[i] << endl;
//     }
//     return 0;  
// }

// find largest and smallest in arrays

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] = {5, 15, 22, 1, -15, -24};
//     int size = 6;
//     int smallest = INT8_MAX;
//     for(int i=0; i<size; i++) {
//         // if(nums[i] < smallest){
//         //     smallest = nums[i];

//         // }
//         smallest = min(nums[i],smallest);

//     }
//     cout <<"smallest = " << smallest << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int nums[] = {5, 15, 22, 1, -15, -24};
//     int size = 6;
//     int largest = INT8_MIN;
//     for(int i=0; i<size; i++) {
//         largest = max(nums[i], largest);
        
    
//     }
//     cout <<"largest = " << largest << endl;

//     return 0;
// }

// pass by reference
// #include <iostream>
// using namespace std;
// void changeArr(int arr[], int size){
//     cout << "in function\n";
//     for(int i=0; i<size; i++){
//         arr[i] = 2* arr[i];
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3};
//     changeArr(arr, 3);
//     cout << "in main\n";
//     for(int i=0; i<3; i++){
//         cout << arr[i] <<" ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void changeArr(int arr[], int size){
//     cout << "in function\n";
//     for(int i=0; i<size; i++){
//         arr[i] = 2* arr[i];
//     }
// }
// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 8 ;

//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }
// REVERSING AN ARRAY
// #include <iostream>
// using namespace std;
// void reverseArr(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 3, 5};
//     int size = 7;
//     reverseArr(arr, size);
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
    
//     cout << endl;
//     return 0;
// }
 
// Calulating sum and product of all numbers in an array.
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 3, 5};
//     int size = 7;
//     int sum = 0;
//     int product = 1;
//     for(int i=0; i<size; i++){
//         sum += arr[i];
//         product *= arr[i];
//     }   
//     cout << "Sum = " << sum << endl;
//     cout << "Product = " << product << endl;
//     return 0;

// }

// swap minimum and maximum elements in an array
#include <iostream>
using namespace std;
int main(){
    
    int arr[] = {10, 9, 8, 7, 6, 5, 4};
    int size = 7;
    int minIndex = 0;
    int maxIndex = 0;

    for(int i=1; i<size; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
