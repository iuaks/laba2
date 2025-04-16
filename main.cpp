#include <iostream>
#include "Student.h"

int main() {
    Student s1("Максим", 16, "S001");
    s1.renameSelf("Олександр");
    std::cout << s1 << std::endl;

    Student s2 = s1;
    Student s3 = std::move(s2);

    std::cout << "Total students: " << Student::studentCount << std::endl;

    return 0;
}
