/*1. Basic Structure of a C++ Program
2. Variables and comments in C++

*/ 



// # include <iostream> // include the iostream library for input and output operations (header file)

// int main() {
//     std::cout << "Hello, World!"; // print "Hello, World!" to the console
//     return 0; // return 0 to indicate successful execution of the program
// } // write "std::" when using cout while namespace std is not used, and "std::" is used to specify that cout is part of the std namespace.

// # include <iostream> 
// using namespace std;
// int main() {
//     int a = 4;
//     int b = 5;
//     cout << "This is tutorial 4. The value of a is " << a << " and the value of b is " << b; 
//     return 0;

// }
 
// # include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World!"; 
//     return 0;
// }

// # include <iostream>
// using namespace std;

// int main() {

//     int num1, num2;
//     cout<< "Enter the value of num1:\n";
//     cin>> num1; // take input from user and store it in num1
//     cout<< "Enter the value of num2:\n";
//     cin>> num2; // take input from user and store it in num2

//     cout<< "The sum of num1 and num2 is:"<< num1 + num2;
    
//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
//     // int age;
//     // cout<<"Enter your age: ";
//     // cin >> age;
//     // cout << "your age is:" << age << endl;
//     // return 0;
//     int a =5;
//     double b = 2;
//     cout <<(5 / (double)2) << endl; // typecasting
//     return 0;

// }

// conditonal statements in C++

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;

//     if (n >= 0) {
//         cout << "n is a positive number." << endl;

//     } else {
//         cout << "n is a negative number." << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout <<"enter your age: ";
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are eligible to vote.\n" << endl;
//     } else {
//         cout << "You are not eligible to vote.\n" << endl;
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()  {
//     int marks;
//     cout << "Enter your marks: ";
//     cin >> marks;
//     if (marks >= 90) {
//         cout <<"A\n";
//         cin >>marks;
//     } else if(marks >= 80 && marks < 90) {
//         cout << "B\n";
//     } else  {
//         cout << "C\n";
//     }
//     return 0;
// }

// termary statements

// #include <iostream>
// using namespace std;
// int main(){ 
//     int n = 45;
//     cout << ( n >= 0? "positive" : "negative" ) << endl;
//     return 0;
// }


// LOOPS --

// #include <iostream>
// using namespace std;
// int main() {
//     int count = 0;
//     while (count <= 5) {
//         cout << count << "     ";
//         count++;

//     }
//     cout << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";

//     cin >> n;
//     int i = 1;
//     while (i <= n){
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     int sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         sum = sum + i;
    
//     }
//     cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
//     return 0;
// }

// DO WHILE LOOP

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;
//     int i = 1;
//     do {
//         cout << i << " ";
//         i++;
//     } while (i <= n);
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int i = 0;
//     bool isPrime = true;

//     for (int i=2; i < n-1; i++) {
//         if (n % i == 0) { // non prime number
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true) {
//         cout << n << " is a prime number\n" << endl;
//     } else {
//         cout << n << " is not a prime number\n" << endl;
//     }
//     return 0;
// }

//  NESTED LOOPS- 
// #include <iostream>
// using namespace std; 
// int main(){
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         int m = 3;
//         for (int j = 1; j<=m; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// PATTERNS

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for (int i=0; i<n; i++){
//         char ch = 'A';
//         for (int j=0; j<n; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;+
// int main(){
//     int n=3;
//     int m=1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout << m << " ";
//             m++;
//         }
//         cout << endl;
//     }
    
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=3;
//     char ch='A';
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=0; i<n; i++){ 
//         for (int j=0; j<i+1; j++){
//             cout << i+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;

//     int num=1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i; j++){
//             cout << " ";
            
//         }
//         for (int j=0; j<n-1; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++){
//         for (int j=0; j<n-1-i; j++){
//             cout << " ";
        
//         }
//         for (int j=1; j<=i+1; j++){
//             cout << j;
//         }
//         for (int j=i; j>=1; j--){
//             cout << j;
//         }
//         cout << endl;
    
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout << "*";
//         if (i != 0){
//             for (int j=0; j<2*i-1; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i=0; i<n-1; i++){
//         for (int j=0; j<i+1; j++){
//             cout << " ";
//         }
//         cout << "*";
//         if (i != n-1){
//             for (int j=0; j<2*(n-i)-5; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// FUCTIONS

// #include <iostream>
// using namespace std;
// void printHello() {
//     cout << "Hello, World!" << endl;
// }
// int main(){
    
//     printHello(); // call the function to print "Hello, World!"
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a + b;
// }
// int main(){
//     cout << sum(10, 5) <<endl;
//     cout << (10+5);
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int sumN(int n){
//     int sum=0;
//     for (int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;

// }

// int main(){
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int  factN(int n) {
//     int fact = 1;
//     for (int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     cout << "Factorial of " << n << " is " << factN(n) << endl;
//     return 0;
// }
 
// #include <iostream>
// using namespace std;

// int digitSum(int n){
//     int digSum = 0;
//     while (n > 0){
//         int lastDigit = n % 10;
//         n /= 10;
//         digSum += lastDigit;

//     }
//     return digSum;
// }
// int main(){
//     cout << "Sum of digits: " << digitSum(23456) << endl;
//     return 0;
// }
 
// #include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//     int binaryNum = 0;
//     int placeValue = 1;

//     while (decNum > 0) {
//         int lastDigit = decNum % 2;
//         decNum /= 2;
//         binaryNum += lastDigit * placeValue;
//         placeValue *= 10;
    
//     }
//     return binaryNum;
// }
// int main() {
//     int decNum = 50;
//     cout << "Binary of " << decNum << " is " << decToBinary(decNum) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binTODec(int binNum){
    
//     int decNum = 0;
//     int power = 1; // 2^0 = 1

//     while (binNum > 0) {
//         int lastDigit = binNum % 10;
//         binNum /= 10;
//         decNum += lastDigit * power;
//         power *= 2;
//     }
//     return decNum;
// }
// int main() {
//     int binNum = 101;
//     cout << "Decimal of " << binNum << " is " << binTODec(binNum) << endl;
//     return 0;
// }

// BITWISE OPERATORS

// #include <iostream>
// using namespace std;

// int main(){
//     int a =4, b = 8;
//     cout << "a & b = " << (a & b) << endl; 
//     cout << "a | b = " << (a | b) << endl;
//     cout << "a ^ b = " << (a ^ b) << endl;
//     cout << (4 << 1) << endl; // left shift operator
//     cout << (4 >> 1) << endl; // right shift operator
//     return 0;
// }

// Data type modifiers
// #include <iostream>
// using namespace std;
// int main(){
//     // cout << sizeof(int) << endl; // 4 bytes
//     // cout << sizeof(long int) << endl; 
//     // cout << sizeof(short int) << endl;
//     // cout << sizeof(long long int) << endl;
//     unsigned int a = -1;
//     signed int b = 1;
//     cout << a << endl;
//     cout << b << endl;
// }


