//练习案例:水仙花数
//它的每个位上的数字的 3次幂之和等于它本身案例描述 : 水仙花数是指一个 3 位数，例如 : 1^3 + 5^3 + 3^3 = 153
//请利用do...while语句，求出所有3位数中的水仙花数

#include<iostream>
using namespace std;

int main() {
	int n = 100;

	do {
		int num1 = n % 10;//个位数字
		int num2 = (n % 100)/10;//十位数字
		int num3 = n / 100;//百位数字
		int sum = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
		
		if (sum == n) {
			cout << n << endl;
		}
		n++;
	} while (n < 1000);
}