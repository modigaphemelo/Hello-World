#include <iostream>

class Greeting {
public:
    void sayHello() {
        std::cout << "Hello, World!" << "\n";
    }
};

int main() {
    Greeting greeter;
    greeter.sayHello();
    return 0;
}