#include "iter.hpp"

int main()
{
    int array[] = {4,5,6,1};
    double array_d[] = {43.78,5.56,1.1};
    char array_c[] = {'s','w','f','q','k'};
    iter(array, 4, print);
    iter(array_d, 3, print);
    iter(array_c,5,print);
}