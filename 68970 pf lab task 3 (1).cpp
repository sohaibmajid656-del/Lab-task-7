#include <iostream>
using namespace std;
int main()
 {
int marks;
cout << "Enter marks (0�100): ";
cin >> marks;

switch (marks / 10) {
case 10:
case 9: cout << "Grade: A"; break;
case 8: cout << "Grade: B"; break;
case 7: cout << "Grade: C"; break;
case 6: cout << "Grade: D"; break;
default: cout << "Grade: F";
    }
    return 0;
}

