#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15;
    int &ref = n;
    ref = 25;
    cout << n << endl;
    n = 35;
    cout << ref << endl;
}

