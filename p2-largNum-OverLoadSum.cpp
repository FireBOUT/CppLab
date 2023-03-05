//2a Find Largest Number Using if...else Statement

#include <iostream>
using namespace std;

int main() {

double n1, n2, n3;

cout << "Enter three numbers: ";
cin >> n1 >> n2 >> n3;

// check if n1 is the largest number
if(n1 >= n2 && n1 >= n3)
cout << "Largest number: " << n1;

// check if n2 is the largest number
else if(n2 >= n1 && n2 >= n3)
cout << "Largest number: " << n2;

// if neither n1 nor n2 are the largest, n3 is the largest
else
cout << "Largest number: " << n3;

return 0;
}

// Output:
// Enter three numbers: 2.3
// 8.3
// -4.2
// Largest number: 8.3









// C++ program to overload sum() function
#include <iostream>
using namespace std;
// Function with 2 int parameters
int sum(int num1, int num2) {
return num1 + num2;
}
// Function with 2 double parameters
double sum(double num1, double num2) {
return num1 + num2;
}
// Function with 3 int parameters
int sum(int num1, int num2, int num3) {
return num1 + num2 + num3;
}
int main() {
// Call function with 2 int parameters
cout << "Sum 1 = " << sum(5, 6) << endl;
// Call function with 2 double parameters
cout << "Sum 2 = " << sum(5.5, 6.6) << endl;
// Call function with 3 int parameters
cout << "Sum 3 = " << sum(5, 6, 7) << endl;
return 0;
}
// Output
// Sum 1 = 11
// Sum 2 = 12.1
// Sum 3 = 18