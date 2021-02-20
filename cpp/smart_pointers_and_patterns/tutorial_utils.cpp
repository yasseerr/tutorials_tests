#include "tutorial_utils.h"

TutorialUtils* TutorialUtils::_instance = nullptr;
int TutorialUtils::tutoCount = 0;
TutorialUtils* TutorialUtils::instance()
{
    if (!_instance)
        _instance = new TutorialUtils();
    return _instance;
};

int TutorialUtils::addFunction(void (*f)(), std::string key) { 
    tutorials[key] = f;
    return TutorialUtils::tutoCount +1;
}