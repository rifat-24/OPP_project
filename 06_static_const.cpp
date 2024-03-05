#include<bits/stdc++.h>
using namespace std;
void sta()
{
    static int count = 0;
    cout << count << " ";
    // value is updated
     ++count;
}
int main()
{
    const int num = 15;
    cout << "const value; " << num << endl;
    for (int i = 1; i <= 5; ++i)
    {
        sta();
    }


}
