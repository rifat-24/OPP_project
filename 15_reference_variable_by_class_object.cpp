#include<bits/stdc++.h>
using namespace std;
class referenc
{
public:
    void ans()
    {
    int n;
    cin >> n;
    int &ref = n;
    cout << n << endl;
    n = 35;
    cout << ref << endl;
    }
};
int main()
{
    referenc obj;
    obj.ans();
}
