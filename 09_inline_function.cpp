#include <iostream>
using namespace std;
inline int area(int l, int w) { return l * w; }
int main()
{
    int length = 10;
    int wide = 5;
    cout << "The area is: " << area(length, wide) << endl;
}
