//  11. Program to Find the Largest Value from a Set of Numbers
 #include <iostream>
#include <climits>
 using namespace std;
 class output {
 public:
 void display();
 };
 void output::display() {
 int n;
 cout << "Enter number of elements: ";
 cin >> n;
int max_val = INT_MIN;
 for (int i = 0; i < n; i++) {
 int num;
 cout << "Enter number " << i + 1 << ": ";
 cin >> num;
 if (num > max_val) {
 max_val = num;
 }
 }
 cout << "Largest value: " << max_val << endl;
 }
 int main() {
 output obj;
 obj.display();
 return 0;
 }