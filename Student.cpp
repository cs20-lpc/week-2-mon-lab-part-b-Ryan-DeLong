#include "Student.hpp"

Student::Student() : name(""), age(0) {
    cout << "Student object created!" << endl;
}

Student::~Student() {
    cout << "Student object destroyed!" << endl;
}

void Student::setName(string n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}
