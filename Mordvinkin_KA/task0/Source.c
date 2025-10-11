#include <stdio.h>
#include <cmath>

int main()
{
	double x1, y1, r1;  // ������ ��� ������ ����������
	double x2, y2, r2;  // ������ ��� ������ ����������
	scanf("%lf%lf%lf", &x1, &y1, &r1);  // ���� ������ ��� ������ ����������
	scanf("%lf%lf%lf", &x2, &y2, &r2);  // ���� ������ ��� ������ ����������
	double rr;  // ���������� ����� �������� �����������
	if (y1 == y2) rr = abs(x2 - x1);  // �������� �������, ��� ���� ������ ����������� ��������� �� ����� ������, �� ���������� ����� �������� ����� �������� x-���
	else if (y1 != y2)  // ���� ���������� ��������� �� ������ �������
	{
		double c1 = 0, c2 = 0;  // ������ ����� �������
		c1 = abs(y2 - y1);  // ����� 1
		c2 = abs(x2 - x1);  // ����� 2
		rr = pow((pow(c1, 2) + pow(c2, 2)), 0.5);  // �������� ���������� ����� ������������
	}
	if (rr < r1 + r2 && rr > abs(r1 - r2)) printf("The circles intersect");  // ���������� ������������
	else if (rr == r1 + r2) printf("The circles touch each other");  // ���������� �������� 
	else if (x1 == x2 && y1 == y2)  // ���������� ����� ����� �����
	{
		if (r1 == r2) printf("The circles match");  // ���������� ���������
		else printf("One circle lies in the other");  // ���� ���������� ����� � ������
	}
	else if (rr > r1 + r2) printf("The circles don't intersect");  // ���������� �� ������������ 
	return 0;
}