#include <iostream>
using namespace std;

// Create Array structure
struct Array {
  int* A;
  int size;
  int length;
};

// display the array
void display(struct Array arr)
{
  cout << "\nThe array is: ";
  for (int i=0; i<arr.length; ++i)
  {
    cout << arr.A[i] << " ";
  }
}


// insert element at the end of array.
void append(struct Array* arr, int x)
{
  // if array is full
  if (arr->length >= arr->size)
  {
    cout << "Array is full.\n";
  }
  else
  {
    arr->A[arr->length] = x; // insert at end.
    arr->length += 1;
  }
}


// insert at given index
void insert(struct Array* arr, int index, int x)
{
  if (index > 0 && index < arr->length)
  {
    for (int i=arr->length; i>index; --i)
    {
      arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length += 1;
  }
}


int main()
{
  // declare array
  struct Array arr;

  cout << "Enter the size of array: ";
  cin >> arr.size;
  // size of array
  arr.A = new int[arr.size];
  // length of array
  arr.length = 0;

  cout << "\nHow many elements you want to enter(array length): ";
  cin >> arr.length;

  while (arr.length > arr.size)
  {
    cout << "\nArray length should be less then array size: ";
    cin >> arr.length;
  }

  cout << "\nEnter the array elements: ";
  for (int i=0; i<arr.length; ++i)
  {
    cout << "\nEnter " << i+1 << " element: ";
    cin >> arr.A[i];
  }

  display(arr);
  append(&arr, 7);
  display(arr);
  insert(&arr, 1, 8);
  display(arr);


  return 0;
}
