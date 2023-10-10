// Professor.hpp
// Homework 2
//
// Created by Nicholas Florio on 10/4/23.
#pragma once

#include "Person.hpp" // Include the necessary header for the base class
#include <string>

class Professor : public Person {
public:
    Professor(const std::string& name, const std::string& office);
    std::string getOffice() const;

private:
    std::string office;
};
