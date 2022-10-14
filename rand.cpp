#include <iostream>
#include <cstdlib> // include the cstdlib library
using namespace std;

int main()
    // srand()  function is used to generate truly random numbers.
    srand(98); // This function allows to specify a seed value as its parameter
{

  for (int i = 0; i < 10; i++)
  {
    cout << rand() << endl; // print 10 random numbers
    // use the modulo (%) sign to generate random numbers within a specific range
    cout << 1 + (rand() % 6) << endl; // this generates whole numbers in the range 1 to 6
  }

  return 0;
}
