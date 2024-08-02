#include "Movie.h"
#include <iostream>
Movie::Movie(std::string name, std::string genre, int year, std::string director, std::string plot):
name(name), genre(genre), year(year), director(director), plot(plot) {

}
void Movie::play() {
	std::cout << director << " " << year << " " << genre << " film " << name << ": " << plot << std::endl;;
}