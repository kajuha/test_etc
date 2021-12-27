#include <iostream>
#include <cmath>

// include를 포함안하면 abs(std)가 정수로 동작 포함하면 인자에 따라 동작
#include <ros/ros.h>

int main(int argc, char* argv[]) {
	double float64 = 20.5;
    int int32 = 1;

#include <typeinfo>
    std::cout << "[type:" << typeid(float64).name() << "] typeid(float64)"<< std::endl;
    std::cout << "[type:" << typeid(int32).name() << "] typeid(int32)"<< std::endl;
    std::cout << "[type:" << typeid(float64-int32).name() << "] typeid(float64-int32)"<< std::endl;
    std::cout << std::endl;
    // include에 따라서 하기의 abs가 원하는대로 동작하지 않을 수 있음
    std::cout << "[type:" << typeid(abs(int32-int32)).name() << "] typeid(abs(int32-int32))"<< std::endl;
    std::cout << "[type:" << typeid(abs(float64-int32)).name() << "] typeid(abs(float64-int32))"<< std::endl;
    std::cout << "[type:" << typeid(fabs(float64-int32)).name() << "] typeid(fabs(float64-int32))"<< std::endl;
    std::cout << "[type:" << typeid(std::abs(float64-int32)).name() << "] typeid(std::abs(float64-int32))"<< std::endl;
    std::cout << "[type:" << typeid(std::fabs(float64-int32)).name() << "] typeid(std::fabs(float64-int32))"<< std::endl;

	std::cout << "[" << abs(int32-int32) << "] abs(int32-int32)" << std::endl;
	std::cout << "[" << abs(float64-int32) << "] abs(float64-int32)" << std::endl;
	std::cout << "[" << fabs(float64-int32) << "] fabs(float64-int32)" << std::endl;
	std::cout << "[" << std::abs(float64-int32) << "] std::abs(float64-int32)" << std::endl;
	std::cout << "[" << std::fabs(float64-int32) << "] std::fabs(float64-int32)" << std::endl;

    return 0;
}