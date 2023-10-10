// Student.hpp
// Homework 2
//
// Created by Nicholas Florio on 10/4/23.
#pragma once

#include "Person.hpp" // Include the necessary header for the base class
#include <vector>
#include <string>

class Student : public Person {
public:
    Student(const std::string& name, int maxSize);
    void addCourse(const std::string& course);
    void removeCourse(const std::string& course);
    std::string getCourses() const;

private:
    int maxSize;
    std::vector<std::string> courses;
};
