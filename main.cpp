/*
#include <iostream> // c++ ǥ�� ���̺귯�� �̱� ������ <> ���.
// ��ó�� �ܰ迡�� ó���Ǵ� �ڵ���� �տ��� #�� ���δ�.

int main() //main �Լ��� ���α׷��� ������.
{
	int value1; // �׳� int�� ������ Ÿ���� �⺻���� signed int�� ���ȴ�.
	signed int value2; // ����, ��� �� �� ǥ�� ����
	unsigned int value3; // ����� ǥ�� ����
	char c1; // ���ڿ� �ϳ��� �Ҵ� ����

	// �ʱ�ȭ ���
	int a1 = 0;
	int a2(0);
	int a3 = { 0 };
	int a4{ 0 };
	c1 = 'A'; // char Ÿ�� �Ҵ��� ������ ���� ����ǥ��.
	c1 = '\101'; // �����ڵ� 10���� ǥ��
	c1 = '\x41'; // �����ڵ� 16���� ǥ��

	//����
	value1 = 0b1001011; // 2���� ǥ���
	value2 = 0123; // 8���� ǥ���
	value3 = 0x412FBA; // 16���� ǥ���

	std::cin >> value1;

	std::cout << "Hello, World" << std::endl; //std�� ���̺귯��, �׷��� std ���̺귯������ cout, cerr, endl �� ������ ���°���.
	std::cout << "There are " << value1 << " ways\nI love you" << std::endl;
	std::cout << "A\nBC\nDEF\nGH" << std::endl;


	return 0;
}
// cpp�� ���� �ִ� ��ó�� �����ڿ� ���� ��ó���� �Ѵ� -> ��ó���� cpp������ �����Ϸ��� ������ -> cpp���� ���� obj������ ���� -> �� obj������ ��Ŀ�� ��ŷ -> exe���� ź��
*/