#include <iostream>
using namespace std;

// function overloading is having more than one functions uner the same name

void printNumber(int x)
{
  cout << "Print Integer" << x << endl;
}

void printNumber(float x)
{
  cout << "Print flaot" << x << endl;
}

void main()
{
  printNumber(2);
  printNumber(3.4);
}