//#include <iostream>
//#include "employeestruct.h"
//
//using namespace std;
//
//enum PieceType1 {
//	PieceTypeKing = 1,
//	PieceTypeQueen,
//	PieceTypeRook = 10,
//	PieceTypePawn
//};
//
//enum class PieceType2 {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//enum class PieceType3 : unsigned long {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//int main()
//{
//	PieceType1 myPiece1 = PieceTypeKing;
//	int a = myPiece1;
//	PieceType2 myPiece2 = PieceType2::King;
//	//cout << myPiece2 << endl; // enum class�� ��½�Ʈ������ ����� �� �Ѵ�.
//	// int b = myPiece; // enum class�� ������ Ÿ�԰����� �Ѵ�.
//	Employee anEmployee;
//	anEmployee.firstInitial = 'M';
//	anEmployee.lastInitial = 'g';
//	anEmployee.employeeNumber = 42;
//	anEmployee.salary = 80000;
//	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
//	cout << "Number: " << anEmployee.employeeNumber << endl;
//	cout << "Salary: $" << anEmployee.salary << endl;
//
//	return 0;
//}