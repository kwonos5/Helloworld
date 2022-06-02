/*
#include <iostream> 

using namespace std;

namespace myNS1 {int n = 10;}
namespace myNS2 { int n = 20; }
int n = 30;


int main() 
{
	int n = 40;

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << std::endl;
	cout << n << std::endl;

	float myFloat = 3.14f;
	int i1 = (int)myFloat;//비추천
	int i2 = int(myFloat);//비추천
	int i3 = static_cast<int>(myFloat);//정확한 형변환 방법

	double d1 = 1200.; //float보다 정밀도가 더 높은 실수(부동소수점 수) 자료형
	double d2 = 1200.0;
	double d3 = 12e2;//12*(10^2) 12*100
	double d4 = 1.2e-3;//1.2*(10^-3) 1.2*0.001 == 0.0012
	cout << d1 << d2 << d3 << d4 << endl;
}
*/
