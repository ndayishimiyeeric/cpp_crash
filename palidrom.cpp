#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
  int reverse = 0, temp;
  temp = x;
  while (x > 0)
  {
    reverse = reverse * 10 + x % 10;
    x = x / 10;
  }

  return (temp == reverse);
}

void main()
{
  int num;
  cin >> num;

  if (isPalindrome(num))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}