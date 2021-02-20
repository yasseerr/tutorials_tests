#include "interview_tutorial.h"
#include "tutorial_utils.h"
#include <iostream>
#include <memory>


//Unique pointer test a function that will create a new unique_ptr and use it as return so it wont be termintated
ADD_TUT(unique_pointer_tut, "unique_pointer")

typedef struct TestStruct
{
    std::string name;
    std::string lastname;
}TestStruct;

std::unique_ptr<TestStruct> createTestStruct(){
    std::unique_ptr<TestStruct> retPtr(new TestStruct());
    retPtr->lastname = "yasser";
    retPtr->name = "grimes";
    return retPtr;
}

void unique_pointer_tut(){
    auto newTest = createTestStruct();
    std::cout << newTest->name << "  " << newTest->lastname;
}

// shift test see which direction

void shiftTest(){
    int a=8;
    a >>= 1;
    std::cout << "new value" << a;
}
ADD_TUT(shiftTest,"shift_test");


// reverse string using copy
void reverseString(){
    std::string source = "this_text";
    std::string dest;
    std::copy(source.crbegin(),source.crend(),std::back_inserter(dest));

    std::cout << dest;
}
ADD_TUT(reverseString,"reverse_string");

//accessing std::string using index

void string_index(){
    std::string name = "yasser";
    name[0] = 'N';
    std::cout << name ;
}
ADD_TUT(string_index,"string_index")


