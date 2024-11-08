#include <iostream>
using namespace std;
class Student {
	string name;
	string surname;
	int age;
public:
	Student() {
		name = "Boryslav";
		surname = "Lincheskyi";
		age = 222;
	}
	Student(string name, int age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
	}
	Student(const Student& obj) {
		this->name = obj.name;
		this->surname = obj.surname;
		this->age = obj.age;
	}
	void PrintInfoAboutStudent() {
		cout << "Student's name: " << this->name << endl;
		cout << "Student's surname: " << this->surname << endl;
		cout << "Student's age: " << this->age << endl;
	}
	void ChangeInfoAboutStudent() {
		cout << "Enter a new name for student: ";
		cin >> this->name;
		cout << "Enter a new surname for student: ";
		cin >> this->surname;
		cout << "Enter a new age for student: ";
		cin >> this->age;
	}

	string getName() {
		return this->name;
	}
	string getSurname() {
		return this->surname;
	}
	int getAge() {
		return this->age;
	}
	void setName(const string name) {
		this->name = name;
	}
	void setSurname(const string surname) {
		this->name = name;
	}
	void setAge(const int age) {
		this->age = age;
	}
};
int main() {
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAboutStudent();
	obj.PrintInfoAboutStudent();
}