#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<vector<int>> list;
	vector<int> a;
	a.resize(m, 0);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end(),cmp);
	list.emplace_back(a);
	/*for (int i = 0; i < m; i++) {
		cout << list[0][i]<<" ";
	}*/
	vector<int> b;
	b.resize(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end(), cmp);
	list.emplace_back(b);
	//for (int i = 0; i < n; i++) {
	//	cout << list[1][i] << " ";
	//}
	vector<int> c;
	c.resize(k, 0);
	for (int i = 0; i < k; i++) {
		cin >> c[i]。。。。。。。。。;
	}
	sort(c.begin(), c.end(), cmp);
	list.emplace_back(c);
	
	int num1, num2, num3;
	int num11, num22, num33;
	int min1;
	int min2;
	int minD;
	for (int j = 0; j < m; j++) {
		num1 = list[0][j];
		min1 = 99999999;
		min2 = 99999999;
		minD = 99999999;
		for (int q = 0; q < n; q++) {
			num2 = list[1][q];
			if (abs(num1 - num2) < min1) min1 = abs(num1 - num2);
		}
		for (int p = 0; p < k; p++) {
			num3 = list[2][p];
			if (abs(num1 - num3) < min2) min2 = abs(num1 - num3); 
		}
		if (2 * (min1 + min2) < minD) {
			minD = 2 * (min1 + min2);
			break;
		}
	}
	for (int i = 0; i < m; i++) {
		num1 = list[0][i];
		for (int q = 0; q < n; q++) {
			num2 = list[1][q];
			if (abs(num1 - num2) == min1) cout << "minD(" << num1 << "," << num2;/* cout << "min1:" << min1 << endl;
			cout << "num1:" << num1 << endl; cout << "num2:" << num2 << endl;*/
		}
		for (int p = 0; p < k; p++) {
			num3 = list[2][p];
			if (abs(num1 - num3) == min2) cout <<","<< num3;
		}
	}
	cout<<")="<<minD;
	return 0;

}