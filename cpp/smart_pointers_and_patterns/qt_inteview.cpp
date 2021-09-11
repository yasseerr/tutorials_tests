#include "tutorial_utils.h"
#include <iostream>
#include <memory>
#include "qt_inteview.h"


//test if the data in return var.value will be read
ADD_TUT(dot_in_return, "dot_in_return")

typedef struct TestStructQt
{
    std::string *name;
    std::string *lastname;

    TestStructQt(std::string _name){name   = new std::string(_name);}
}TestStruct;

std::string* returnName(){

    return TestStruct("yasser").name;
}

void dot_in_return(){

    std::cout<< "this will show the name i think : " << *returnName();
}