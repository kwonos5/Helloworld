#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int a, b = { 0 };
    cout << "A is ? ";
    cin >> a;
    cout << "B is ? ";
    cin >> b;

    if (a > b)
    {
        cout << "A 가 크다." << endl;
    }
    else
    {
        cout << "B가 크다." << endl;
    }

    if (a < b)
    {
        int banana = a;
        a = b;
        b = banana;
        cout << "A: " << a << "B: " << b << endl;
    }
}