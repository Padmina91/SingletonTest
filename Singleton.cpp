#include "Singleton.hpp"
#include <iostream>

Mama *Mama::singleton = nullptr;

Mama* Mama::create_entity() {
    if (singleton == nullptr) {
        singleton = new Mama();
    } else {
        std::cout << "Failed to create object of Mama." << std::endl;
    }
    return singleton;
}

Mama* Child1::create_entity() {
    if (singleton == nullptr) {
        singleton = new Child1();
    } else {
        std::cout << "Failed to create object of Child1." << std::endl;
    }
    return singleton;
}

Mama* Child2::create_entity() {
    if (singleton == nullptr) {
        singleton = new Child2();
    } else {
        std::cout << "Failed to create object of Child2." << std::endl;
    }
    return singleton;
}

Mama* Child3::create_entity() {
    if (singleton == nullptr) {
        singleton = new Child3();
    } else {
        std::cout << "Failed to create object of Child3." << std::endl;
    }
    return singleton;
}

Mama::Mama()  {
    std::cout << "created object of class Mama." << std::endl;
}

Child1::Child1() {
    std::cout << "created object of class Child1." << std::endl;
}

Child2::Child2() {
    std::cout << "created object of class Child2." << std::endl;
}

Child3::Child3() {
    std::cout << "created object of class Child2." << std::endl;
}

void Mama::get_type() {
    std::cout << "I am of type Mama." << std::endl;
}

void Child1::get_type() {
    std::cout << "I am of type Child1." << std::endl;
}

void Child2::get_type() {
    std::cout << "I am of type Child2." << std::endl;
}

void Child3::get_type() {
    std::cout << "I am of type Child3." << std::endl;
}