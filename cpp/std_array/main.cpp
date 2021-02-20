
#include <iostream>
#include <algorithm>
#include <array>

int main(){
	std::array<int,3> ar1 = {1,2,3};
	//std::cout << ar1[0] << std::endl;
	std::array<std::array<int,3>,3> ar2 {{{0,1,2},{0,1,2},{0,1,2}}};
	std::cout << ar2[0][0];
	return 0;
}
