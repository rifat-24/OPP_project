#include<bits/stdc++.h>
using namespace std;

void div(int &n, int &m) // call by value;
{
   int res = m / n;
   cout <<  res << endl;
}
int main()
{
  int a = 5, b = 10;
  div(a, b);
}


