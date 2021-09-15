#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct student {
	string id;
	string name;
	int grade;
	student() {
		id = "";
		name = "";
		grade = 0;
	}
};

bool cmp_id(student a, student b) {
	return strcmp(a.id.c_str(),b.id.c_str())<0;
}
bool cmp_name(student a, student b) {
	return strcmp(a.name.c_str(), b.name.c_str()) < 0;
}
bool cmp_grade(student a, student b) {
	return a.grade<b.grade;
}

int main() {
	int num,col;
	cin >> num >> col;
	vector<student> stus;
	for (int i = 0; i < num; i++) {
		student s;
		string id, name;
		int grade;
		cin >> id >> name >> grade;
		s.id = id;
		s.name = name;
		s.grade = grade;
		stus.push_back(s);
	}
	switch (col)
	{
	case 1:
		sort(stus.begin(), stus.end(), cmp_id);
		break;
	case 2:
		sort(stus.begin(), stus.end(), cmp_name);
		break;
	case 3:
		sort(stus.begin(), stus.end(), cmp_grade);
		break;
	}
	for (int i = 0; i < stus.size(); i++) {
		cout << stus[i].id << " " << stus[i].name << " " << stus[i].grade << endl;
	}



	return 0;
}