//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	{
//		//int a = 10;
//		//int b = 0;
//		////b = a++;
//		////b = ++a;
//		////b = a--;
//		//b = --a;
//		//cout << "a= " << a << " b= " << b << endl;
//	}
//
//	{
//		//int a = 10;
//		//int b = -5;
//		//bool result = false;
//		//result = (a > b) ? true : false;
//		//result = (a == b) ? true : false;
//		//result = (a > 0 && b > 0) ? true : false;
//		//result = (a > 0 || b > 0) ? true : false;
//		//result = (a < 0 && --b > 0) ? true : false; // c++ ������ && �����ڸ� ����� �� ���� ���� false�� �ڿ��� ������ �� �ϴ� �ܶ� ����� �����Ѵ�. �׷��� �񱳿����ڿ��� ���������ڸ� �� ���� �ܶ� ����� ������ �ΰ� ����Ѵ�.
//		//result = !(a > 0) ? true : false;
//		//cout << "result= " << boolalpha << result << noboolalpha << " b= " << b << endl; // boolalpha�� �� �ڷ� �ᵵ �ǰ� �տ��� �ᵵ �ȴ�. noboolalpha�� boolalpha�� �����ִ� �ִ�.
//	}
//
//	{
//		int num = 10;
//		cout << "2���� ǥ��: " << bitset<16>(num) << endl;
//		cout << "8���� ǥ��: " << oct << num << endl;
//		cout << "10���� ǥ��: " << dec << num << endl;
//		cout << "16���� ǥ��: " << hex << num << endl;
//
//		// ��Ʈ �������� ������ �ϴ� �����ڵ�
//		int x = 0x35;
//		int y = 0xf0;
//		cout << "x= " << bitset<8>(x) << endl;
//		cout << "y= " << bitset<8>(y) << endl;
//		cout << "x & y = " << bitset<8>(x & y) << endl; // ��� ������ ������ 0, 1 �� & ���� ����
//		cout << "x | y = " << bitset<8>(x | y) << endl; // ��� ������ ������ 0, 1 �� | ���� ����
//		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // ��Ÿ�� ���� -> �� ���� ������ 0, �ٸ��� 1
//		cout << "~x = " << bitset<8>(~x) << endl;
//
//		int x1 = x << 2;
//		cout << "x= " << bitset<8>(x) << endl;
//		cout << "x1 = " << bitset<8>(x1) << endl; // ���ʿ� ���� ǥ������ ��Ʈ ���� ���� �ʿ� ���� ����ŭ �������� �̵��Ѵ�.
//
//		char cX = 0b10010100; // �ڷ����� ��Ʈ�� �Ѿ�� ��Ʈ���� ���� �տ� ���� ��Ʈ�� ���簡 �ȴ�.
//		cout << "cX = " << bitset<8>(cX) << endl;
//		cX = cX >> 2;
//		cout << "cX = " << bitset<8>(cX) << endl;
//	}
//
//	{
//		// �Ϲ��� ����ȯ
//		int intVar = 7;
//		double doubleVar = 1.5;
//		float floatVar = 3.7f;
//
//		intVar = doubleVar;
//		floatVar = intVar;
//
//		// �ڷ��� �켱 ����
//		// ���� < char < int < long < float < double < long double < ����
//		intVar = doubleVar + intVar * floatVar;
//		//                         float
//		//       doubleVar + (intVar * floatVar);
//		//               double
//		//intVar = doubleVar + (intVar * floatVar);
//		//      int
//	}
//
//	{
//		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��. ������
//		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������. ���̴�.
//		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
//		//const_cast : const ������ �Ͻ� ������
//
//		double d = 10.5;
//		int a = static_cast<int>(d);
//	}
//
//
//	return 0;
//}