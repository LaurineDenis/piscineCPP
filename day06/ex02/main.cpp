#include <iostream>
#include <string>

class Base
{ 
    public:
        virtual ~Base(void) {}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void)
{
    srand (time(NULL));
    int i = rand() % 3;
    if (i == 0)
        return (new A);
    if (i == 1)
        return (new B);
    if (i == 2)
        return (new C);
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    Base base;
    try
    {
        base = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e) {}
    try
    {
        base = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e) {}
    try
    {
        base = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e) {}
}

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    return (0);
}