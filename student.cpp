//
// Created by User on 31.03.2025.
//

#include "student.h"
Student::Student() : name("Unknown"), age(0), studentID("N/A") {}

Student::Student(std::string n, int a, std::string id) : name(n), age(a), studentID(id) {}

std::string Student::getName() const { return name; }
void Student::setName(std::string n) { name = n; }

int Student::getAge() const { return age; }
void Student::setAge(int a) { age = a; }

std::string Student::getStudentID() const { return studentID; }
void Student::setStudentID(std::string id) { studentID = id; }

Student::~Student() {}