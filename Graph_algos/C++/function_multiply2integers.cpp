#include <iostream>

using namespace std;

int mult (int x, int y);

int main()
{
    int x;
    int y;

    cout << "Enter 2 integers:\n";
    cin >> x >> y;

    cout << "Product of 2 integers = " << mult(x,y) << endl ;
}

int mult (int x, int y)
{
    return x * y;
}