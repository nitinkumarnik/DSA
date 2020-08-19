#include <iostream>
#include <cstring>

void sieveOfEratosthenes(int num)
{
    // increase the number by 1
    num += 1;

    // declare bool array of num length
    bool arr[num];

    // init all elements to true. Assume all are prime numbers.
    memset(arr, true, num);

    // start from 2 set all the multiple of 2 to false except first
    // increase by 1 and repeat
    for (int i=2; i<num; ++i)
    {
        for (int p=i*i; p<num; p+=i)
        {
            if (p%i == 0)
                arr[p] = false;
        }
    }

    // print the prime number up to num
    for (int i=2; i<num; ++i)
    {
        if (arr[i] == true)
            std::cout << i << ' ';
    }

}


int main()
{
    int num{ 100 };

    sieveOfEratosthenes(num);

    return 0;
}
