/*
#include <iostream>

using namespace std; //std�� namespace��.

namespace myNS1 {int n = 10;}
namespace myNS2 {int n = 20;}
int n = 30;

int main()
{
	int n = 40;

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl;
	cout << n << endl;

	float myFloat = 3.14f;
	int i1 = (int)myFloat; // ����õ
	int i2 = int(myFloat); // ����õ
	int i3 = static_cast<int>(myFloat); //��Ȯ�� ĳ����(����ȯ) ���

	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; // 12 * (10^2) | e => 10
	double d4 = 1.2e+3; // 1.2 * (10^3)
	double d5 = 1.2e-3; // 1.2 * (10^-3)
	cout << d1 << d2 << d3 << d4 << d5 << endl;
}
*/