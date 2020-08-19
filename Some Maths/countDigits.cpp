#include <iostream>
#include <cmath>

void countDigits(int num)
{
    int digits{ 0 };

    digits = floor(log10(num) + 1);

    std::cout << digits << '\n';
}


int main()
{
    int num{ 12345 };

    countDigits(num);
}
