# ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
template <typename T>
void print(T element)
{
    std::cout << element << std::endl;
}
template <typename T>
void iter(T *array, unsigned int i, void (*func)(T))
{
    unsigned int j;

    j = 0;
    while (j < i)
        func(array[j++]);
}
#endif