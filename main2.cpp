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
	int i1 = (int)myFloat;//����õ
	int i2 = int(myFloat);//����õ
	int i3 = static_cast<int>(myFloat);//��Ȯ�� ����ȯ ���

	double d1 = 1200.; //float���� ���е��� �� ���� �Ǽ�(�ε��Ҽ��� ��) �ڷ���
	double d2 = 1200.0;
	double d3 = 12e2;//12*(10^2) 12*100
	double d4 = 1.2e-3;//1.2*(10^-3) 1.2*0.001 == 0.0012
	cout << d1 << d2 << d3 << d4 << endl;
}
*/
