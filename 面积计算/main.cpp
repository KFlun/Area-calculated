#include"head.h"
int main()
{
	//生成三个三角形
	Triangle a(0, 0, 3, 5, 9, 8);
	Triangle b(2, 4, 6, 7, 5, 8);
	Triangle c(1, 2, 3, 6, 9, 9);

	//分别计算面积
	cout << "三个三角形的面积分别为：" << endl;
	a.display(a);
	b.display(b);
	c.display(c);

	//计算面积之和
	cout << "三角形的面积之和为：" << endl;
	mySum(a.S(), b.S(), c.S());
	system("pause");
	return 0;
}