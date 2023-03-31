#include<iostream>
using namespace std;	
int main() {
	int m; int n;//输入行数m,输入列数n
	cin >> m >> n;
	int** A = new int* [m];//定义矩阵A:
	for (int i = 0; i < m; i++)A[i] = new int[n];
	for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> A[i][j];//输入矩阵A
	int** B = new int* [m];//定义矩阵B:
	for (int i = 0; i < m; i++)B[i] = new int[n];
	for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> B[i][j];//输入矩阵B


	int** res = new int* [m];//定义矩阵A:
	for (int i = 0; i < m; i++)res[i] = new int[n];
	for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)res[i][j] = A[i][j] + B[i][j];


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) { cout << res[i][j]; if (j != n - 1)cout << " "; }
		if (i != m-1)cout << endl;
	}


	for (int i = 0; i < m; i++) {
		delete[]A[i];
		delete[]B[i];
		delete[]res[i];
	}


	return 0;
}