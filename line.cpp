#include <iostream>
using namespace std;

void printFunc(int m, int b) {
  
  cout << "The final equation is: y = " << m << "x" 
  << (b>0?" + ":"")
  << (b>0?std::to_string(b):"") << endl;
  

}

void testLinear(int range = 10) {
  for (size_t i = 0; i < range; i++)
  {
    printFunc(i+1, 3);
  }
}

void printFuncIE(int m, int b) {
  
  string yintercept = "";
  if (b > 0) {
    yintercept = " + ";
    yintercept += std::to_string(b);
  }

  cout << "The final equation is: y = " << m << "x" << yintercept << endl;

}

void getLinearInput(int &slope, int &yintercept) {

  // int slope = 0;
  // int yintercept = 0;
  cout << "Enter the slope: ";
  cin >> slope;
  cout << "Enter the y-intercept: ";
  cin >> yintercept;
  // printFunc(slope, yintercept);

}

// void printScratch() {
//   int clowns = 10;
//   printf("%i\n", clowns);
// }

int main() {
  int m = 0;
  int b = 0;
  getLinearInput(m, b);
  // cout << "Slope is: " << m << endl;
  // cout << "y-intercept is: " << b << endl;
  printFunc(m, b);
  // printScratch();
  // testLinear(5000000);
  return 0;
}