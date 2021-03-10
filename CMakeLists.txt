CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)


ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(menuTest GameMenu/menuMain.cpp)
ADD_EXECUTABLE(test test.cpp)
ADD_EXECUTABLE(abilityMain abilityMain.cpp)
ADD_EXECUTABLE(itemMain itemMain.cpp)
ADD_EXECUTABLE(menuMain menuMain.cpp)
ADD_EXECUTABLE(shopMain shopMain.cpp)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)


