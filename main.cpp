#include "hello.h";

int main(int argc, char** argv)
{
    Object* object = new Object();
    object->SayHello();

    delete object;

    auto lambda = [](auto a, auto b)
    {
        return a + b;
    };

    std::cout << lambda(10, 34);

    return 0;
}