// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{int b[2][3][4];
typedef char A[10];
int* p1 = b[1][0];
int* p2 = (int*)b[1];
int* p3 = (int*)(b + 1);
double* pd = (double*)p3;
A* pa = (A*)p3;
cout << p1 << "," << p2 << "," << p3 << "," << pd << "," << pa << endl;
cout << p1 + 1 << "," << p2 + 1 << "," << p3 + 1 << "," << pd + 1 << "," << pa + 1 << endl;
cout << b[1][0] + 1 << "," << b[1] + 1 <<","<<b+1+1<< endl;
}



{
	int m, n
		int** dm;
	cout << "input matrix size m,n:";
	cin >> m >> n;
	dm = new int* [m];
	for (int i = 0; i < m; i++)
		if (dm[i] = new int[n]) == NULL)
		exit(0);
		for (i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> dm[i][j];
		}


