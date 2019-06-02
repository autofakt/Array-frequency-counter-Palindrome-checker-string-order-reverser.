#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int count (int arr[], int target, int first, int last);
bool isPal (string s, int first, int last);
string reverse (string s);


int main ()
{

  int arr1[] = { 3, 9, 2, 7, 9, 4, 4, 3, 9 };
  int arr2[] = { 6 };
  int arr3[] = { 4, 6, 2, 3 };
  int arr4[] = { 12 };

  cout << setw (20) << left << "Array" << setw (18) << left << "Target Number"
    << setw (12) << left << "Expected Results" << endl;
  cout << setw (22) << left << "{3,9,2,7,9,4,4,3,9}" << setw (20) << left <<
    "9" << setw (12) << left << count (arr1, 9, 0, 8) << endl;
  cout << setw (22) << left << "{3,9,2,7,9,4,4,3,9}" << setw (20) << left <<
    "4" << setw (12) << left << count (arr1, 4, 0, 8) << endl;
  cout << setw (22) << left << "{6}" << setw (20) << left << "6" << setw (12)
    << left << count (arr2, 6, 0, 0) << endl;
  cout << setw (22) << left << "{4,6,2,3}" << setw (20) << left << "9" <<
    setw (12) << left << count (arr3, 9, 0, 3) << endl;
  cout << setw (22) << left << "{12}" << setw (20) << left << "5" << setw (12)
    << left << count (arr4, 5, 0, 1) << endl;

  cout << endl;
  cout << endl;

  cout << boolalpha;

  string radar = "radar";
  string x = "x";
  string aba = "aba";
  string xx = "xx";

  string ab = "ab";
  string abc = "abc";
  string numbers = "123321";
  string alphaNum = "xx1x";

  cout << setw (14) << left << "String" << setw (18) << left <<
    "Expected Result" << setw (12) << left << "String" << setw (18) << left <<
    "Expected Result" << endl;

  cout << setw (14) << left << radar << setw (18) << left <<
    isPal (radar, 0, 4) << setw (12) << left << ab << setw (18) << left <<
    isPal (ab, 0, 1) << endl;
  cout << setw (14) << left << x << setw (18) << left <<
    isPal (x, 0, 0) << setw (12) << left << abc << setw (18) << left <<
    isPal (abc, 0, 2) << endl;
  cout << setw (14) << left << aba << setw (18) << left <<
    isPal (aba, 0, 2) << setw (12) << left << numbers << setw (18) << left <<
    isPal (numbers, 0, 5) << endl;
  cout << setw (14) << left << xx << setw (18) << left <<
    isPal (xx, 0, 1) << setw (12) << left << alphaNum << setw (18) << left <<
    isPal (alphaNum, 0, 3) << endl;

  cout << endl;
  cout << endl;

  string hello = "Hello";
  string hello2 = "Hello world";
  string hello3 = "When in the course of human events";

  cout << setw (36) << left << "String" << setw (18) << left <<
    "Result" << endl;
  cout << setw (36) << left << hello << setw (18) << left <<
    reverse (hello) << endl;
  cout << setw (36) << left << hello2 << setw (18) << left <<
    reverse (hello2) << endl;
  cout << setw (36) << left << hello3 << setw (18) << left <<
    reverse (hello3) << endl;

  return 0;
}

int
count (int arr[], int target, int first, int last)
{
  int counter = 0;

  if (arr[first] == target)
    counter++;

  if (first == last)
    return counter;

  else
    return counter + count (arr, target, first + 1, last);
}

bool
isPal (string s, int first, int last)
{

  bool status;

  if (first == last && s[first] == s[last])
    return status = true;

  if (first + 1 == last && s[first] == s[last])
    return status = true;

  if (s[first] == s[last])
    return isPal (s, first + 1, last - 1);

  else
    return status;

}

string
reverse (string s)
{
  string temp;
  int wordPosition = s.find (' ');
  if (wordPosition == -1)
    return s;

  else
    {
      temp = s.substr (0, wordPosition);
      s = s.substr (s.find (' ') + 1, s.length ());
      return reverse (s) + " " + temp;
    }

}
