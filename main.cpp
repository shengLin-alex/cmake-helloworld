#include "hello.h";

int main(int argc, char** argv)
{
    Object* object = new Object();
    object->SayHello();

    delete object;

    return 0;
}