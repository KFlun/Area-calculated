#include"head.h"
int main()
{
	//��������������
	Triangle a(0, 0, 3, 5, 9, 8);
	Triangle b(2, 4, 6, 7, 5, 8);
	Triangle c(1, 2, 3, 6, 9, 9);

	//�ֱ�������
	cout << "���������ε�����ֱ�Ϊ��" << endl;
	a.display(a);
	b.display(b);
	c.display(c);

	//�������֮��
	cout << "�����ε����֮��Ϊ��" << endl;
	mySum(a.S(), b.S(), c.S());
	system("pause");
	return 0;
}