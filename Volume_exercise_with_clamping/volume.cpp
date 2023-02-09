#include "volume.h"
#include<iostream>

int main() {

    Volume v1(35);
    std::cout << "v1 = " << v1.getValue() << std::endl;

    Volume v2(-14);
    std::cout << "v2 = " << v2.getValue() << std::endl;
    // added a negative value to test out clamping

    Volume v3(925);
    std::cout << "v3 = " << v3.getValue() << std::endl;
    // added a high value to test out clamping

    Volume v4; // original v2 turned into v4
    std::cout << "v4 = " << v4.getValue() << std::endl;
    v2.setValue(5000);
}
