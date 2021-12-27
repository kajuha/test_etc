#include <ros/ros.h>

class Test {
};

int main(int argc, char* argv[]) {

#include <typeinfo>
    std::cout << typeid(Test).name() << std::endl;

    return 0;
}