#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num = 15;
   int *p = &num;
    cout << "value stored at p; " << *p << endl;
    cout << "Address stored at p; " << p << endl;
    cout << "Address stored at p;" << &p << endl;
}
