#include "Student.h"

Student::Student()
{
  cout << "This is a constructor" << endl;
  // constructor
}

Student::~Student()
{
  cout << "This is a destructor" << endl;
  // destructor
}

void Student::myPrint() // always have their type
{
  cout << "Print details" << endl;
}

void Student::sayHi() const // const function definition
{
  cout << "const function" << endl;
}
