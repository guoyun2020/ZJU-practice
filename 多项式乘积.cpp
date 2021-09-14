#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	vector<int> a, b;
	int m;
	cin >> m;
	a.resize(m, 0);
	for (int i = 0; i < m; i++) {
		int coef, k;
		scanf("%d%d", &coef, &k);
		a[k] = coef;
	}
	int n;
	cin >> n;
	b.resize(n, 0);
	for (int i = 0; i < n; i++) {
		int coef_2, k_2;
		scanf("%d%d", &coef_2, &k_2);
		b[k_2] = coef_2;
	}
	vector<int> c;
	c.resize(m*n, 0);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] != 0 && b[j] != 0) {
				c[i+j] += (a[i] * b[j]);
			}
		}
	}
	for (int i = m * n - 1; i >= 0; i--) {
		cout << i << " " << c[i]<<endl;
	}
	return 0;
}