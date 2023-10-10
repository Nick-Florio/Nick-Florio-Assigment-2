//
//  Person.cpp
//  Homework 2
//
//  Created by Nicholas Florio on 10/4/23.
//

#include "Person.hpp"

Person::Person(const std::string& name) : name(name) {}

std::string Person::getName() const {
    return name;
}
