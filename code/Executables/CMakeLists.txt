ADD_EXECUTABLE(_test _test.cpp)
TARGET_LINK_LIBRARIES(_test AirfoilTools::AirfoilTools GTest::gtest_main)
