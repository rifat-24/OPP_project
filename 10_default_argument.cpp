#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2, int x = 0, int y = 0)
{
    return (num1 + num2 + x + y);
}

int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
}

