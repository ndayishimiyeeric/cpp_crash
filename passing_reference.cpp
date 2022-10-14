#include <iostream>
using namespace std;

void changeNum(int *numPtr) // declare a functio with a integer pointer
{
  *numPtr = 100; // change the value to 100
}

void main()
{

  int num = 50;
  changeNum(&num);     // call the function passing the meemory refence to the parameter pointer
  cout << num << endl; // the value of num changes to 100
}