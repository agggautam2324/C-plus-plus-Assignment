#include <iostream>
using namespace std;
int main()
{
    float radius, height, volume;
    cout << "Enter the radius of cylinder : ";
    cin >> radius;
    cout << "Enter the height of cylinder : ";
    cin >> height;
    volume = 3.1415 * radius * radius * height;
    cout << "Volume of Cylinder = " << volume;
}