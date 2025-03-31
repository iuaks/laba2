//
// Created by User on 31.03.2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string studentID;
public:
    Student();
    Student(std::string n, int a, std::string id);

    std::string getName() const;
    void setName(std::string n);

    int getAge() const;
    void setAge(int a);

    std::string getStudentID() const;
    void setStudentID(std::string id);

    ~Student();
};

#endif //STUDENT_H
