#include "ImageGameLib.hpp"

#include <gtest/gtest.h>

TEST(ImageGame, ExampleTest) {
    mari::ImageGameLib imageGameLib{};

    auto randomValue = imageGameLib.getRandomNumber(11, 99);

    ASSERT_TRUE(randomValue > 10);
    ASSERT_TRUE(randomValue < 100);
}