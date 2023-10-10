//
//  Student.cpp
//  Homework 2
//
//  Created by Nicholas Florio on 10/4/23.
//

#include "Student.hpp"

Student::Student(const std::string& name, int maxSize)
    : Person(name), maxSize(maxSize) {}

void Student::addCourse(const std::string& course) {
    if (courses.size() < maxSize) {
        courses.push_back(course);
    }
}

void Student::removeCourse(const std::string& course) {
    // Find the course in the vector
    auto it = std::find(courses.begin(), courses.end(), course);

    // If the course is found, erase it from the vector
    if (it != courses.end()) {
        courses.erase(it);
    }
}

std::string Student::getCourses() const {
    std::string courseList;
    for (const std::string& course : courses) {
        courseList += course + "\n";
    }
    return courseList;
}
