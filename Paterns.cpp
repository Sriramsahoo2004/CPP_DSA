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
void print11(int n)
{
  int a = 6;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    for (int j = a; j > 0; j--)
    {
      cout << " ";
    }
    a = a - 2;
    for (int j = i; j > 0; j--)
    {
      cout << j;
    }
    cout << endl;
  }

  /*
  int space = 2*(n-1);
   for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
      cout << j;
    }
    for(int j=1;j<=space;j++){
      cout << " ";
    }
    for(int j=i;j>=1;j--){
      cout << j;
    }
    cout<<endl;
    sapce -= 2;
  }
  */
}
void print12(int n)
{
  int a = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << a << " ";
      a++;
    }
    cout << endl;
  }
}
void print13(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + (n - 1 - i); ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print15(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print16(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "*";
    }
    char ch = 'A';
    int Break = ((1 + 2 * i) / 2) + 1;
    for (int j = 0; j < 1 + (2 * i); j++)
    {
      cout << ch;
      if (j < Break - 1)
        ch++;
      else
        ch--;
    }
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print17(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'E' - i; ch <= 'E'; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < (2 * i); j++)
    {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < 8 - (2 * i); j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print19(int n)
{
  int spaces = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int starts = i;
    if (i > n)
      starts = 2 * n - i;
    for (int j = 1; j <= starts; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= starts; j++)
    {
      cout << "*";
    }
    cout << endl;
    if (i < n)
      spaces -= 2;
    else
      spaces += 2;
  }
}
void print20(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
        cout << "*";
      else
        cout << " ";
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