//
//  main.cpp
//  cppTest
//
//  Created by Lyle Ho on 2024-08-16.
//

#include <iostream>

using namespace std;

namespace myApp {
    int value = 42;

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
}


using namespace myApp;

int main() {
    int value;
    std::cout << "value: " << value << endl;
    myApp::display();  // Accessing function from myApp namespace
    return 0;
}
