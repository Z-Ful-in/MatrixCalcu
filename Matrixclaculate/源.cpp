#include<iostream>
using namespace std;	
int main() {
	int m; int n;//��������m,��������n
	cin >> m >> n;
	int** A = new int* [m];//�������A:
	for (int i = 0; i < m; i++)A[i] = new int[n];
	for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> A[i][j];//�������A
	int** B = new int* [m];//�������B:
	for (int i = 0; i < m; i++)B[i] = new int[n];
	for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> B[i][j];//�������B


	int** res = new int* [m];//�������A:
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