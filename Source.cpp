#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;


class Student
{
public:
	string FirstName;
	int age;

	Student(string _name, int _age)
	{
		FirstName = _name;
		age = _age;
	}
	void Print()
	{
		cout << setw(15) << FirstName << setw(6) << age << endl;
	}

	
};
bool sortage(const Student& st1, const Student& st2) {
		return st1.age > st2.age;
	}

bool tooyoung(const Student& st1) {
	return st1.age < 18;
}

//class Max_el {
//
//	int i;
//	int max_val;
//
//public:
//
//	Max_el() {
//		i = 0;
//		max_val = 0;
//	}
//
//	void operator()(int val) {
//		i++;
//		if (val > max_val) max_val = val;
//		if (i == 10) cout << max_val;
//	}
//};
//
//void shrink2(int n) {
//	n /= 2;
//	cout << n << " ";
//}
//
//bool del(int n) {
//	/*if (n!= 5)*/
//	return n < 10;
//}

int main() {
	srand(time(NULL));

	/*vector <int> numV;
	for (int i = 0; i < 10; i++)
	{
		numV.push_back(rand() % 20);
		cout << numV[i] << " ";
	}
	cout << endl;*/

	// 1.1
	//auto it = min_element(numV.begin(), numV.end()); // min_el
	//cout << *it << endl;

	// 1.2
	//for_each(numV.begin(), numV.end(), Max_el()); // max_el
	//cout << endl;

	//6
	//for_each(numV.begin(), numV.end(), shrink2);
	//cout << endl;

	//3
	//sort(numV.begin(), numV.end()); //reverse - от большего к меньшему
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << numV[i] << " ";
	//}
	//cout << endl;

	//7
	/*remove_if(numV.begin(), numV.end(), del);

	for (int i = 0; i < 10; i++)
	{
		cout << numV[i] << " ";
	}
	cout << endl;*/

	vector <Student> students{
		Student("Anya", 15),
		Student("Lisa", 24),
		Student("Katya", 37),
		Student("Victor", 16),
		Student("Denis", 22)
	};
	
	for (auto el : students)
	{
		el.Print();
	}
	cout << endl;

	sort(students.begin(), students.end(), sortage);

	cout << "*********************" << endl;

	for (auto el : students)
	{
		el.Print();
	}
	cout << endl;

	cout << "********************" << endl;

	auto res = remove_if(students.begin(), students.end(), tooyoung);
	students.erase(res, students.end());

	for (auto el : students)
	{
		el.Print();
	}
	cout << endl;
}