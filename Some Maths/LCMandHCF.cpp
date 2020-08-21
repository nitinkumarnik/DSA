#include <iostream>


int basicEuclideanAlgorithm(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    return num1;
}


int recursiveEuclideanAlgorithm(int num1, int num2)
{
    if (num1 == 0)
        return num2;

    std::cout << num2%num1 << ' ' << num1 << '\n';
    return recursiveEuclideanAlgorithm(num2%num1, num1);

}


int main()
{
    /*
     * For two numbers say, 'a' and 'b', LCM x HCF = a x b.
     * HCF of co-primes = 1.
     * For two fractions,
     *  * HCF = HCF (Numerators) / LCM (Denominators)
     *  * LCM = LCM (Numerators) / HCF (Denominators)
     */

     int num1{ 18 };
     int num2{ 12 };

     // HCF by Euclidean Algorithm basic method
     int hcf1 = basicEuclideanAlgorithm(num1, num2);
     std::cout << hcf1 << '\n';

     // HCF by Euclidean Algorithm recursive method
     int hcf2 = recursiveEuclideanAlgorithm(num1, num2);
     std::cout << hcf2 << '\n';


    return 0;
}
