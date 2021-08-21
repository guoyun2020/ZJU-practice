#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

struct student {
	long int id;
	int location_num;
	int score;
	int local_rank;
	int final_rank;
	student(long int _id, int _location_num, int _score) {
		id = _id;
		location_num = _location_num;
		score = _score;
	}
};

bool cmp(student a, student b) {
	if (a.score != b.score) return a.score > b.score;
	else return a.id < b.id;
}

int main() {
	int n, k;
	vector<student> stu_all;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		vector<student> stu_1;
		for (int j = 0; j < k; j++) {
			long int id;
			int score;
			scanf("%ld%d", &id, &score);
			student stu1(id, i + 1, score);
			stu_1.push_back(stu1);
		}
		sort(stu_1.begin(), stu_1.end(), cmp);
		for (int n = 0; n < stu_1.size(); n++) {
			stu_1[n].local_rank = n + 1;
			if (stu_1[n].score == stu_1[n - 1].score && n > 0) {
				stu_1[n].local_rank = stu_1[n - 1].local_rank;
			}
		}
		stu_all.insert(stu_all.end(), stu_1.begin(), stu_1.end());
	}
	sort(stu_all.begin(), stu_all.end(), cmp);
	printf("%d\n", stu_all.size());
	for (int m = 0; m < stu_all.size(); m++) {
		stu_all[m].final_rank = m + 1;
		if (stu_all[m].score == stu_all[m - 1].score && m > 0) {
			stu_all[m].final_rank = stu_all[m - 1].final_rank;
		}
		printf("%ld %d %d %d\n", stu_all[m].id, stu_all[m].final_rank, stu_all[m].location_num, stu_all[m].local_rank);
	}

	return 0;
}
