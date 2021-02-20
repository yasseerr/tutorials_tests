#include <iostream>
#include <string>
#include <map>
#include "tutorial_utils.h"
#include  "interview_tutorial.h"
#include  "qt_inteview.h"


int main(int argc , char **argv){
    
    std::string key(argv[1]);
    TutorialUtils::instance()->executeTutorial(key);
    return 0;
}

