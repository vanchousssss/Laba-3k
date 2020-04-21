/*������� ����� Money ��� ������ � ��������� �������. ����� ������ ���� ������������� �����
�����: ���� long ��� ������ � ���� int ��� ������. ������� ����� ����� ��� ������ �� �����
������ ���� �������� �� ����� ����� �������. �����������:
== �������� ����� � �������� ����� 
== �������� ��������� (<,>,==)
*/


#include <iostream>

using namespace std;

class Money
{
	long rub;
	int kop;
public:
	Money() { rub = 0; kop = 0; };
	Money(long r, int k) { rub = r, kop = k; };
	Money(const Money& m) { rub = m.rub, kop = m.kop; }
	~Money() {};
	int get_min() { return rub; }
	int get_sec() { return kop; }
	void set_min(long r) { rub = r; }
	void set_sec(int k) { kop = k; }

	//������������� ��������
	Money& operator=(const Money&);
	Money& operator++();
	Money operator++(int); //����������� �������� 
	Money operator+(const Money&);
	friend bool operator>(const Money& m1, const Money& m2);
	friend bool operator<=(const Money& m1, const Money& m2);
	friend bool operator<(const Money& m1, const Money& m2);
	friend bool operator>=(const Money& m1, const Money& m2);
	friend bool operator==(const Money& m1, const Money& m2);
	//���������� ������� ����� - ������
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& out, const Money& t);


};
