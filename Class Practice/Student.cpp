#include<iostream>
using namespace std;


class Student {

public:
	int age;
	int rollno;

	Student(int age, int rollno) {
		this->age = age;
		this->rollno = rollno;
	}

public:
	int getAge() {
		return age;
	}

	void setAge(int age) {
		this -> age = age;
	}

	void display() {
		cout << "age : " << getAge() << endl;
		cout << "rollno : " << rollno << endl;
	}
};



int main() {

	// Student s1;
	// s1.age = 23;
	// s1.rollno = 6;

	// cout << s1.age << endl;
	// cout << s1.rollno << endl;

	Student *s1 = new Student(26, 7);
	// (*s1).age = 24;
	// (*s1).rollno = 6;
	s1-> setAge(29);
	s1->getAge();
	s1-> display();
}



