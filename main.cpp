//
//  main.cpp
//  Homework 2
//
//  Created by Nicholas Florio on 10/4/23.
//  Displays classes and Professor 

#include "Student.hpp"
#include "Professor.hpp"
#include <iostream>

int main() {
    // Create a student and display their courses
    Student student("Nicholas Florio", 10);
    student.addCourse("MAT 308");
    student.addCourse("CS 100");
    student.addCourse("CS 250");
    student.addCourse("ART 201");

    std::cout << "Student: " << student.getName() << std::endl;
    std::cout << "Courses:\n" << student.getCourses() << std::endl;

    // Create a professor and display their office
    Professor professor("Dr.Vermilyer", "SG 4D");

    std::cout << "Professor: " << professor.getName() << std::endl;
    std::cout << "Office: " << professor.getOffice() << std::endl;

    return 0;
}
