#include <iostream>
#include "Student.h"
#include "Group.h"
#include "Course.h"

int main() {

    Student student1("Maksim", 16, "S12345");

    Group group1("IPZ-23");
    group1.addStudent(student1);

    Course course1("OOP", "profesor");

    std::cout << "Group: " << group1.getGroupName() << std::endl;
    std::cout << "Students: " << student1.getName() << ", Age: " << student1.getAge() << ", ID: " << student1.getStudentID() << std::endl;
    std::cout << "Course: " << course1.getCourseName() << ", Lecturer: " << course1.getLecturer() << std::endl;

    return 0;
}
