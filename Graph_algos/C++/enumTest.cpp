#include <iostream>

using namespace std;

int main()
{
    enum color {red, blue=3, green} color1;
    color1 = blue;
    cout << "color1 = " << color1 << endl;
    color1 = green;
    cout << "new color1 = " << color1 << endl;
}