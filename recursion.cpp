#include <iostream>
using namespace std;

int factorial(int n); // the factorial function demostrate the recursion techinique

void main()
{
  cout << factorial(5) << endl;
}

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
