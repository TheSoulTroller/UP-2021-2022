#include <iostream>
using namespace std;

void fillArr(int *&arr, int size)
{
    int y = 1;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        y++;
    }
}

void printArr(int *&arr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void pushBack(int *&arr, int &size)
{
    int *temp = new int[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    size++;
    arr = new int[size];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
    int num;
    cout << "Enter the number to add at the end: ";
    cin >> num;
    arr[size - 1] = num;
}

void pushFront(int *&arr, int &size)
{
    int *temp = new int[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    size++;
    arr = new int[size];
    int num;
    cout << "Enter the number to add at the beginning: ";
    cin >> num;
    arr[0] = num;
    for (int i = 1, j = 0; j < size-1; i++, j++)
    {
        arr[i] = temp[j];
    }
    delete[] temp;
}

void popBack(int *&arr, int &size)
{
    int *temp = new int[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    size--;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
}

void popFront(int *&arr, int &size)
{
    int *temp = new int[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    size--;
    arr = new int[size];
    for (int i = 0, j = 1; i < size; i++, j++)
    {
        arr[i] = temp[j];
    }
    delete[] temp;
}

void copy(int *&arr, int &size)
{
    delete[] arr;
    int newSize;
    cout << "New array size: ";
    cin >> newSize;
    size = newSize;
    arr = new int [size];
    fillArr(arr,size);
}

int main()
{
    int size;
    cout << "Enter size for array: ";
    cin >> size;
    int *arr = new int[5];

    fillArr(arr, size);
    printArr(arr, size);
    pushBack(arr, size);
    printArr(arr, size);
    pushFront(arr, size);
    printArr(arr, size);
    popBack(arr,size);
    printArr(arr, size);
    popFront(arr,size);
    printArr(arr, size);
    copy(arr,size);
    printArr(arr,size);

    delete[] arr;
    return 0;
}
