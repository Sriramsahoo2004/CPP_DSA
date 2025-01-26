#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
  // ****
  // ****
  // ****
  // ****
  for (int i = 0; i < n; i++)
  {
    for (int i = 0; i < n; i++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print2(int n)
{
  // *
  // **
  // ***
  // ****
  // *****
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print3(int n)
{
  // 1
  // 12
  // 123
  // 1234
  // 12345
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print4(int n)
{
  // 1
  // 22
  // 333
  // 4444
  // 55555
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void print5(int n)
{
  // * * * * *
  // * * * *
  // * * *
  // * *
  // *
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
int main()
{
  cout << "Enter the number if rows :";
  int n;
  cin >> n;
  print5(n);
}