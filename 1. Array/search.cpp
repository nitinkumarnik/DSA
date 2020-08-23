#include <iostream>

// TC in worst case O(N), as we are checking all element.
int search_arr(int num, int len, int arr[])
{
    for (int i=0; i<len; ++i)
    {
        if (arr[i] == num)
        {
            return i+1; // Found, returns position
        }
    }
    // Not Found, returns -1
    return -1;
}


int main()
{
    // array
    int arr[] = {1, 10, 5, 9, 17, 65, 6, 4, 8, 7};
    // len of array
    int len = sizeof(arr) / sizeof(arr[0]);
    // find this
    int num = 8;

    int pos = search_arr(num, len, arr);

    if (pos > -1)
        std::cout << "Found at position " << pos << '\n';
    else
        std::cout << "Not in array.\n";

    return 0;
}
