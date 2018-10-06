//while(表达式)语句：实现累加  注：表达式不得为空，循环体中必须有语句避免陷入死循环；
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int sum = 0, i = 1;
	while (i <= 10)
	{
		sum = sum + i;
		i++;
	}
	cout << sum << endl;
	system("pause");
}


//do...while循环（do...while语句后面必须要有分号）：实现累加
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int sum = 0, i = 1;
	do
	{
		sum = sum + i;
		i++;
	} while (i <= 10);
	cout << sum << endl;
	system("pause");
}

//for循环：累加(若要省略for中的3个表达式，则该循环将会陷入死循环，省略了表达式，但是两个分号是不能被省略)
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int sum = 0;
	int i;
	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;
	system("pause");
}

//break语句：用break语句跳出当前循环
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i, n, sum;
	sum = 0;
	cout << "input 10 number" << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << i << ":" << ;
		cin >> n;
		if (n < 0)
			break;
		sum = sum + n;
	}
	cout << sum << endl;
	system("pause");
}


//continue语句：跳出本次循环
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i, n, sum;
	sum = 0;
	cout << "input 10 number" << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << i << ":" << ;
		cin >> n;
		if (n < 0)
			continue;
		sum = sum + n;
	}
	cout << sum << endl;
	system("pause");
}


//打印三角
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)//控制行数
	{
		for (j = 1; j <= 5 - i; j++)//控制空格数
			cout << " ";
		for (k = 1; k <= 2 * i - 1; k++)//控制打印*的数量
			cout << "*";
		cout << endl;
	}
	system("pause");
}

//输出乘法口诀表
#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
void main()
{
	int i, j;
	i = 1;
	j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i + 1; j++)
			cout << setw(2) << i << "*" << j << "=" << setw(2) << i*j;//setw(int w)设置下一个数据的输出域宽为w
		cout << endl;
	}
	system("pause");
}

//巴斯卡三角形：两个边全输出1，三角形内部用上行相邻两个数之和，各相加后的和数等分的放在三角形的各行内
#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
long combi(int n, int r)
{
	int i;
	long p = 1;
	for (i = 1; i <= r; i++)
		p = p*(n - i + 1) / i;
	return p;
}
void main()
{
	int n, r, t;
	for (n = 0; n <= 12; n++)//控制行数
	{
		for (r = 0; r <= n; r++)
		{
			int i;
			if (r == 0)
			{
				for (i = 0; i <= (12 - n); i++)
					cout << " ";//每行每一个元素的位置
			}
			else
				cout << " ";//每个数之间空两格
			cout << setw(3) << combi(n, r);
		}
		cout << endl;
	}
	system("pause");
}

//阿姆斯壮数：在三位整数中形如：153=1^3+5^3+3^3
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a, b, c;
	int i;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;//求百位
		b = (i % 100) / 10;//求十位
		c = i % 10;//求个位
		if (a*a*a + b*b*b + c*c*c == i)
			cout << i << endl;
	}
	system("pause");
	return 0;
}

