#include <iostream>
using namespace std;
int main() {
int choice;
double a, b;

cout << "Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
case 1:
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a + b;
break;
case 2:
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a - b;
break;
case 3:
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a * b;
break; 
case 4:
cout << "Enter two numbers: ";
cin >> a >> b;
if (b != 0) cout << "Result: " << a / b;
else cout << "Error: Division by zero";
break;
case 5:
cout << "Exiting program.";
break;
default:
cout << "Invalid choice";
    }
    return 0;
}

