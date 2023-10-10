// Professor.cpp
// Homework 2
//
// Created by Nicholas Florio on 10/4/23.
//

#include "Professor.hpp"

// Constructor implementation
Professor::Professor(const std::string& name, const std::string& office)
   : Person(name), office(office) {}

// Corrected indentation for the member function
std::string Professor::getOffice() const {
    return office;
}
