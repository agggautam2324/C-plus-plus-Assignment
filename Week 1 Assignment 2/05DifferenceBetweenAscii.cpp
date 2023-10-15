#include <iostream>
using namespace std;
int main()
{
    char ch1, ch2;
    int x, y, z;
    cout << "Enter first character : ";
    cin >> ch1;
    cout << "Enter second character : ";
    cin >> ch2;
    x = (int)ch1;
    y = (int)ch2;
    z = x - y;
    if(y>x) z = y - x;
    cout << "difference between ASCII of two characters : " << z;

}