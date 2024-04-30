#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int a, b, c;
    char d;
    char str[100];

    // cin >> a >> b >> c;

    // cout << a << b << c << endl;
    cin >> d;
    // cin.ignore();

    cin.getline(str, 100);
    cin.getline(str2, 100);

    cout << d << endl;
    cout << str << endl;
    cout << str2 << endl;

    // cout << "Hello World" << 1 << endl;

    return 0;
}