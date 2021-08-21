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
	student(long int _id,int _location_num,int _score) {
		id = _id;
		location_num = _location_num;
		score = _score;
	}
};

bool cmp(student a, student b) {
	return a.score > b.score;
}

int main() {
	int n,k;
	vector<student> stu_all;
	printf("请输入考场数N:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("请输入%d考场的考生数K:",i+1);
		scanf("%d", &k);
		vector<student> stu_1;
		for (int j = 0; j < k; j++) {
			long int id;
			int score;
			printf("请输入第%d位考号与成绩:",j+1);
			scanf("%ld%d", &id,&score);
			student stu1(id, i, score);
			stu_1.push_back(stu1);
		}
		sort(stu_1.begin(), stu_1.end(), cmp);
		for (int n = 0; n < stu_1.size(); n++) {
			stu_1[n].local_rank = n+1;
		}
		stu_all.insert(stu_all.end(), stu_1.begin(), stu_1.end());
	}
	sort(stu_all.begin(), stu_all.end(), cmp);
	for (int m = 0; m < stu_all.size(); m++) {
		stu_all[m].final_rank = m + 1;
		printf("%ld %d %d %d\n", stu_all[m].id, stu_all[m].final_rank, stu_all[m].location_num, stu_all[m].local_rank);
	}

	return 0;
}