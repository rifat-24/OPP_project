#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b) // call by value;
{
   int res = a + b;
   return res;
}
int main()
{
 int a = 4, b = 6;
  cout << sum(a, b) << endl;
}

