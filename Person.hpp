//
//  Person.hpp
//  Homework 2
//
//  Created by Nicholas Florio on 10/4/23.
//

#pragma once
#include <string>
#include "Person.hpp"

class Person {
public:
    Person(const std::string& name);
    std::string getName() const;

private:
    std::string name;
};
