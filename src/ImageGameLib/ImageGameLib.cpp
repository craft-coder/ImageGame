#include "ImageGameLib.hpp"
#include <random>

namespace mari {

int ImageGameLib::getRandomNumber(int min, int max) const {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);

    return distrib(gen);
}

}