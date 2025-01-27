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
void print6(int n)
{
  int a = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < a; k++)
    {
      cout << "*";
    }
    a = a + 2;
    for (int z = 0; z < n - i - 1; z++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print7(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < (2 * n - (2 * i + 1)); k++)
    {
      cout << "*";
    }
    for (int z = 0; z < i; z++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print8(int n)
{
  int a = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < a; k++)
    {
      cout << "*";
    }
    a = a + 2;
    for (int z = 0; z < n - i - 1; z++)
    {
      cout << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < (2 * n - (2 * i + 1)); k++)
    {
      cout << "*";
    }
    for (int z = 0; z < i; z++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print9(int n)
{
  for (int i = 1; i <= (2 * n - 1); i++)
  {
    int star = i;
    if (i > n)
      star = (2 * n - i);
    for (int j = 1; j <= star; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print10(int n)
{
  int start;
  for (int i = 0; i <= n - 1; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      if (start == 1)
        start = 0;
      else if (start == 0)
        start = 1;
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