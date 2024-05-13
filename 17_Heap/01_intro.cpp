#include <iostream>
using namespace std;

class maxHeap
{
public:
    int arr[100];
    int size;

    maxHeap()
    {
        arr[0] = -1; // 1 based indexing
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletion()
    {
        if (size == 0)
        {
            cout << "Empty heap!!" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

int main()
{
    maxHeap hp;
    hp.insert(60);
    hp.insert(50);
    hp.insert(90);
    hp.insert(30);
    hp.insert(20);

    cout << "Printing heap" << endl;
    for (int i = 1; i <= hp.size; i++)
    {
        cout << hp.arr[i] << " ";
    }
    hp.deletion();
    cout << "Printing after deletion" << endl;
    for (int i = 1; i <= hp.size; i++)
    {
        cout << hp.arr[i] << " ";
    }

    return 0;
}