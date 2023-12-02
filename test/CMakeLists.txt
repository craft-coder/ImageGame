add_executable(ImageGameTest ImageGameTest.cpp)

enable_testing()

find_package(GTest CONFIG REQUIRED QUIET)
target_link_libraries(ImageGameTest PRIVATE ImageGameLib 
                                            GTest::gtest 
                                            GTest::gtest_main)
