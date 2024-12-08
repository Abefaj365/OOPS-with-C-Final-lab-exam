//  15. Program to Generate Fibonacci Sequence
#include <iostream>
 using namespace std;
 class output {
 public:
 void display();
 };
 void output::display() {
 int n;
 cout << "Enter number of terms: ";
 cin >> n;
 long long a = 0, b = 1;
 cout << "Fibonacci sequence: ";
 for (int i = 0; i < n; i++) {
 cout << a << " ";
 long long next = a + b;
 a = b;
 b = next;
 }
 cout << endl;
 }
int main() {
 output obj;
 obj.display();
 return 0;
 }
