#include <iostream>
#include <string>

struct Data {
    std::string str;
    int         i;
};

uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data *data;
    data = new Data;

    uintptr_t src;
    data->str = "coucou";
    data->i = 42;

    std::cout << &data << std::endl;
    std::cout << data->str << std::endl;
    std::cout << data->i << std::endl;
    src = serialize(data);
    data = deserialize(src);
    std::cout << &data << std::endl;
    std::cout << data->str << std::endl;
    std::cout << data->i << std::endl;
    return (0);
}