#ifndef RECORD_H
#define RECORD_H

#include "Playable.h"
#include <string>
#include <vector>


class Record :
    public Playable
{private:
    std::string artist;
    std::vector<std::string> tracks = {"All The Small Things", "Dammit", "Down"};
public:
    Record(std::string name) : artist(name) {}
    void play() override;
};

#endif
