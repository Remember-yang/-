//��ϰ����:ˮ�ɻ���
//����ÿ��λ�ϵ����ֵ� 3����֮�͵��������������� : ˮ�ɻ�����ָһ�� 3 λ�������� : 1^3 + 5^3 + 3^3 = 153
//������do...while��䣬�������3λ���е�ˮ�ɻ���

#include<iostream>
using namespace std;

int main() {
	int n = 100;

	do {
		int num1 = n % 10;//��λ����
		int num2 = (n % 100)/10;//ʮλ����
		int num3 = n / 100;//��λ����
		int sum = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
		
		if (sum == n) {
			cout << n << endl;
		}
		n++;
	} while (n < 1000);
}