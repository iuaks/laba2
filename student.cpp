//
// Created by User on 31.03.2025.
//

#include "Student.h"

int Student::studentCount = 0;

Student::Student() : name("Unknown"), age(0), studentID("N/A") {
    ++studentCount;
}
Student::Student(std::string name, int age, std::string id)
    : name(std::move(name)), age(age), studentID(std::move(id)) {
    ++studentCount;
}
Student::Student(const Student& other)
    : name(other.name), age(other.age), studentID(other.studentID) {
    std::cout << "Copy constructor called.\n";
    ++studentCount;
}
Student::Student(Student&& other) noexcept
    : name(std::move(other.name)), age(other.age), studentID(std::move(other.studentID)) {
    std::cout << "Move constructor called.\n";
    ++studentCount;
}

Student::~Student() {
    std::cout << "Destructor called for: " << name << std::endl;
    --studentCount;
}

void Student::setName(const std::string& n) { name = n; }
std::string Student::getName() const { return name; }

void Student::setAge(int a) { age = a; }
int Student::getAge() const { return age; }

void Student::setStudentID(const std::string& id) { studentID = id; }
std::string Student::getStudentID() const { return studentID; }

void Student::renameSelf(const std::string& newName) {
    this->name = newName;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "Name: " << student.name << ", Age: " << student.age << ", ID: " << student.studentID;
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) {
    std::cout << "Enter name: ";
    is >> student.name;
    std::cout << "Enter age: ";
    is >> student.age;
    std::cout << "Enter student ID: ";
    is >> student.studentID;
    return is;
}
