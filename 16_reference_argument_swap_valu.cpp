#include<iostream>
using namespace std;
class swp{
    public :
    void swapvalue(int &a,int &b)
    {
        int t = a;
        a = b;
        b = t;

    }
};
int main()
{
    swp obj;
    int a, b;
    cin >> a >> b;
    obj.swapvalue(a,b);
    cout<<"The value of p = "<< a <<"\nThe value of q = "<< b <<endl;
    return 0;
}
