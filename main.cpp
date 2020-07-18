#include "Singleton.hpp"

int main() {
    Mama* singleton = Mama::create_entity();
    
    singleton->get_type();
    
    singleton = Child1::create_entity();
    
    singleton = Child2::create_entity();
    
    singleton = Child3::create_entity();
    
    singleton->get_type();
}