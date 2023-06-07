#include "main.h"

class Student{
public:
	string name;
	int age;
	double mark;
	bool alive;
	Student(string name, int age, double mark, bool alive) {
		this->name = name;
		this->age = age;
		this->mark = mark;
		this->alive = alive;
	 }
};

int main() {
	Student st1("Alex", 15, 9.5, true);
	Student st2("Peter", 14, 4.5, false);

	/*Student* array = new Student[2]{ st1,st2 };*/

	/*ofstream fout;
	fout.open("text.txt");
	if (fout.is_open()) {
		for (int i = 0; i < 2; i++) {
			fout << array[i].name << " ";
			fout << array[i].age << " ";
			fout << array[i].mark << " ";
			fout << array[i].alive << " ";
		}
		fout.close();
	}*/
	Student* temp= new Student[2]{ st1,st2 };

	ifstream fin;
	fin.open("text.txt");
	if (fin.is_open()) {

		for (int i = 0; i < 2; i++) {
			fin >> temp[i].name;
			fin >> temp[i].age;
			fin >> temp[i].mark;
			fin >> temp[i].alive;
		}

		cout << "Out from file: " << temp[i].name;
		fin.close();
	}

	return 0;
}