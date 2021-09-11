#include <iostream>

typedef struct MyName{
	char firstName[10];
	char lastName[10];
}

void main(){
	MyName yg;
	memcopy(yg.firstName,"yasser",6);
	memecopy(yg.lastName,"grimes",6);

	std::cin << yg.firstName << " " << yg.lastName;
}
