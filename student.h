//
// Created by User on 31.03.2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    int age;
    std::string studentID;

public:
    static int studentCount;

    Student();
    Student(std::string name, int age, std::string id);
    Student(const Student& other);
    Student(Student&& other) noexcept;

    ~Student();

    void setName(const std::string& name);
    std::string getName() const;

    void setAge(int age);
    int getAge() const;

    void setStudentID(const std::string& id);
    std::string getStudentID() const;

    void display() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend std::istream& operator>>(std::istream& is, Student& student);

    void renameSelf(const std::string& newName);
};


#endif
