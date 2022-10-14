#include <iostream>

using namespace std; // Tells the compiler to use the std (standerd) C++ Library

int main()
{
  cout << "Hello world" << endl; // The cout does not put a new line. we use endl to provide it
  cout << "C++ is awesome!";

  cout << "Hello World \n"; // We can also achieve the new line by using \n
  cout << "C++ is awesome";

  // this is a comment it is egnored by the compiler we can also comment a block by using /* ... */

  int myVariable = 10;
  cout << myVariable; // we declared a valiable with myVariable identifier and c++ is case sensitive myVariable is different from myvariable

  // int a, b; variable of the same data type can be declared on the same line separeted by a comma

  int a = 5;
  int b = 6;
  int sum;
  sum = a + b; // example of how variables must be mantained

  int num;
  cin >> num; // we declared a variable num and we get it from the user

  int num_a;
  cout << "Please Enter a number" << endl;
  cin >> num_a;
  int num_b;
  cout << "Enter a nother number" << endl;
  cin >> num_b;

  int a1 = 100;
  a1 = 5;
  cin >> a1; // a variable's value

  // the auto keyword allows you to automatically detect the data type being declared
  auto x = 12;      // integer
  auto y = 3.12;    // float
  auto z = "hello"; // string

  // conditions in c++
  // if statment

  // syntax
  //  if (condition) {
  // statement(s);
  // }

  if (7 < 4)
  {
    cout << "No";
  }

  auto active = true;
  if (active)
  {
    cout << "Online";
  }

  // while loop

  // syntax
  //  while (condition) {
  // statement(s);
  //}
  // program to dispay number btn 1 and 5
  int num_test = 1;
  while (num_test < 6)
  {
    cout << num_test << endl;
    num_test++;
  }

  // program to calculate sum of numbers
  int total = 0;
  int number;
  while (true)
  {
    cin >> number;
    total += number;
    if (total > 130)
    {
      cout << total << endl;
      break;
    }
  }

  // for loop
  // syntax

  // for (init; condition; increment) {
  // statement(s);
  // }

  // program to print numbers from 0 to 9
  for (int i = 0; i < 10; i++)
  {
    cout << i << endl;
  }

  // do while loop
  // syntax
  //  do {
  // statement(s);
  //} while (condition);

  // program to calculate sum of numbers
  int total2 = 0;
  int number2;
  do
  {
    cin >> number2;
    total2 += number2;
    if (total2 > 150)
    {
      cout << total2 << endl;
      break;
    }
  } while (true);

  // switch case
  // syntax

  // switch (expression) {
  // case value1:
  // statemet(s);
  // break;
  //}

  int age;
  cin >> age;
  switch (age)
  {
  case 16:
    cout << "Young" << endl;
    break;
  case 24:
    cout << "Adult" << endl;
    break;
  case 70:
    cout << "Older" << endl;
    break;
  default:
    cout << "not considered" << endl;
  }

  // Arrays
  int arr[5];
  int arr_2[] = {1, 2, 3, 4};
  int sum_arr = 0
      // Array and loops
      for (int i = 0; i <= 3; i++)
  {
    cout << arr_2[i] << endl;
    sum_arr += i;
  }

  cout << sum_arr << endl;

  // Pointers

  // memeory address
  int memo_address = 5;
  cout << &memo_address << endl; // this outputs the memory address which stores the variable memo_address

  int score = 5;
  int *scorePtr;
  scorePtr = &score;
  cout << score << endl;     // outputs 5 the value of score
  cout << scorePtr << endl;  // outputs a Hexdecimal value score memory alocation
  cout << *scorePtr << endl; // outputs 5 the value to the variable stored in the pointer scorePtr

  // dynamic memory alocation
  int *p = new int; // the pointer p is stored in the stack as a local variable and holds the heap's allocated address as its value
  *p = 5;           // the value 5 is stored at that address in the heap

  // manually managing dynamically alocated memory
  int *pa = new int;  // request a memory
  pa = 5;             // store the value
  cout << pa << endl; // use the value
  delete pa;          // free up the memory

  // dynamic memory allocation with arrays
  int *arr_p = NULL;   // a pointer initialized with NULL
  arr_p = new int[20]; // requesting a memory
  delete arr_p;        // deleting the array pointed by arr_p

  // Program to print the maximum number in a array
  int size; // size of the array
  cin >> size;

  int *nums_arr;            // pointer for the array
  nums_arr = new int[size]; // requesting memory

  int temp; // temporary stack memory to hold inputs
  for (int i = 0; i < size; i++)
  {
    cin >> temp;
    nums_arr[i] = temp;
  }

  int max_num = nums_arr[0];
  for (int i = 0; i < size; i += 1)
  {
    if (nums_arr[i] > max_num)
    {
      max_num = nums_arr[i]
    }
  }

  cout << max_num << endl;

  delete[] nums_arr;
  // end

  // discount calculation program among 5 (price 10 per one) with regard of the min age
  int ages[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> ages[i];
  }

  int min_age = ages[0];
  for (int i = 0; i < 5; i++)
  {
    if (ages[i] < min_age)
    {
      min_age = ages[i];
    }
  }

  double discount = (50 * min_age) / 100.0;

  double price = 50 - discount;
  cout << price << endl;
  // end
  return 0;
}
