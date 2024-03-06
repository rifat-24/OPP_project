#include<bits/stdc++.h>
using namespace std;
class arithmatic
{
 public:
     void sum()
     {
         int a ,b;
         cin >> a >> b;
         cout <<"sum is =" << a + b << endl;
     }
     void sub()
     {
         int n, m;
         cin >> n >>m;
         cout << "subtraction is = " << n - m << endl;
     }
     void div()
     {
         int x, y;
         cin >> x >> y;
         float ans = (float)x / y;
         cout << "division is = " << ans << endl;
     }
};
int main()
{

    arithmatic obj;
    obj.sum();
    obj.sub();
    obj.div();
}
