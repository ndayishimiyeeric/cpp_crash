#include <iostream>
using namespace std;

void printSomething();  // valueless func this is function prototyping
int double_func(int x); // function with parameters

int addNumbers(int x, int y)
{
  int result = x + y;
  return result;
}

int main()
{
  printSomething(); // function call
  double_func(2);
  int x = addNumbers(5, 6); // assign a value from a functions
  return 0;
}

void printSomething() // function definition
{
  cout << "C++ functions" << endl;
}

int double_func(int x)
{
  return x * 2;
}
