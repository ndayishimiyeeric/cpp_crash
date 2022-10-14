#include <iostream>
using namespace std;

class BankAcount // class definition
{
public: // access specifier
  void details()
  {
    cout << "Hello" << endl;
  }
};

void main()
{
  BankAcount test; // instatiation
  test.details;

  BankAcount obj; // working with pointers
  BankAcount *ptr = &obj;
  ptr->details;
}

// class with constructors

class Dog
{
  Dog(string name) // constructor
  {
    dog_name = name;
  }

  void get_name()
  {
    cout << "The dog name is" << dog_name << endl;
  }

private:
  string dog_name;
};
