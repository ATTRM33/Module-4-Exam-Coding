#include "Record.h"
#include <iostream>
void Record::play() {

	int index = 1;

	for (std::string track : tracks) {
		
		std::cout << artist << ": track " << index << " : " << track << std::endl;
		index++;
	}
}
