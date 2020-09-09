#include <iostream>

using namespace std;

int main()

{

int thisisanumber;
char line[5];
cout << "Please Enter a number: ";

cin >> thisisanumber;

cin >> line;
//cin.ignore(); // Although this line is to ignore the Enter key, it was working without cin.ignore

cout << "You entered number: "<< thisisanumber << "\n";
cout << "You enter String: " << line << endl;
cin.get(); // Waits for Enter key to be pressed

}