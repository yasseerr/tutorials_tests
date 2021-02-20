#ifndef TUT_UTIL
#define TUT_UTIL 

#include <map>
#define ADD_TUT(FUNC,LAB) int def##FUNC = TutorialUtils::instance()->addFunction(FUNC,LAB);
typedef void (*TutorialFunc)();

class TutorialUtils
{
    static TutorialUtils *_instance;
    std::map<std::string,TutorialFunc> tutorials;
public:
    static int tutoCount;
    TutorialUtils(){};
    static TutorialUtils* instance();
    // Data members
    int addFunction(void(*f)(),std::string key);
    void executeTutorial(std::string tut){(*tutorials[tut])();}

private:
    // Data members
};

#endif // !TUT_UTIL