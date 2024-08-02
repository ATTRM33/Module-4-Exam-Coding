#ifndef MOVIE_H
#define MOVIE_H

#include "Playable.h"
#include <string>
class Movie :
    public Playable
{private:
    std::string name;
    std::string genre;
    std::string director;
    int year;
    std::string plot;
public:
    Movie(std::string name, std::string genre, int year, std::string director, std::string plot);
    void play() override;
};

#endif