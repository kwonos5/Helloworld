#include <iostream>

using namespace std;

int main()
{
	/*int score = { 0 };
	cin >> score;*/

	/*if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score < 90 && score >= 80)
	{
		cout << "B" << endl;
	}
	else if (score < 80 && score >= 70)
	{
		cout << "C" << endl;
	}
	else if (score < 70 && score >= 60)
	{
		cout << "D" << endl;
	}
	else if (score < 60 && score >= 50)
	{
		cout << "E" << endl;
	}
	else if (score < 50 && score >= 40)
	{
		cout << "F" << endl;
	}*/

	//score /= 10;

	//switch (score)
	//{
	//case 10:
	//	__fallthrough // �̷��� break���� ���� ���� case������ �Ѱܹ����� �� faltThrough ��� �Ѵ�. ������ �̷��� �ϸ� ������ �� �� �ֱ� ������ fallThrough�� ��ٰ� ����� ��� �Ѵ�.
	//case 9:
	//	cout << "A" << endl;
	//	break;
	//case 8:
	//	cout << "B" << endl;
	//	break;
	//case 7:
	//	cout << "C" << endl;
	//	break;
	//case 6:
	//	cout << "D" << endl;
	//	break;
	//case 5:
	//	cout << "E" << endl;
	//	break;
	//default:
	//	cout << "F" << endl;
	//	break;
	//}

	/*int a, b = { 0 };
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;
	
	switch (a - b > 0)
	{
	case true:
		cout << "true" << endl;
		break;
	case false:
		cout << "false" << endl;
		break;
	default:
		break;
	}*/


	//int a, b, c = { 0 };
	//cout << "A is ? ";
	//cin >> a;
	//cout << "B is ? ";
	//cin >> b;
	//cout << "C is ? ";
	//cin >> c;

	//switch (a+b > c)
	//{
	//case true:
	//	cout << a + b << endl;
	//	break;
	//case false:
	//	cout << c << endl;
	//	break;
	//}

	//int colorCode = 0;
	//cout << "���� �ڵ� �Է� : ";
	//cin >> colorCode;

	//switch (colorCode)
	//{
	//case 1:
	//	cout << "Red" << endl;
	//	break;
	//case 2:
	//	cout << "Blue" << endl;
	//	break;
	//case 3:
	//	cout << "Black" << endl;
	//	break;
	//case 4:
	//	cout << "White" << endl;
	//	break;
	//}
    int personNum = { 0 };
	cout << "�ֹι�ȣ �� �ڸ� : ";
	cin >> personNum;

	personNum /= 1000000; // int �� �̴ϱ� �Ǽ��� �Ҽ��� ����

	switch (personNum)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "����" << endl;
		break;
	case 2:
		__fallthrough;
	case 4:
		cout << "����" << endl;
		break;
	default:
		cout << "�ܰ���" << endl;
		break;
	}

}