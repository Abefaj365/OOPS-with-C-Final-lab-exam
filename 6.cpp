//  6. Program to Calculate the Solution of Quadratic Equation
 #include <iostream>
 #include <cmath>
 using namespace std;
 class output {
 public:
 void display();
 };
 void output::display() {
 double a, b, c;
 cout << "Enter coeficients a, b, and c: ";
 cin >> a >> b >> c;
 double discriminant = b * b - 4 * a * c;
if (discriminant >= 0) {
 double root1 = (-b + sqrt(discriminant)) / (2 * a);
 double root2 = (-b - sqrt(discriminant)) / (2 * a);
 cout << "Roots: " << root1 << " and " << root2 << endl;
 } else {
 cout << "No real roots" << endl;
 }
 }
 int main() {
 output obj;
 obj.display();
 return 0;
 }