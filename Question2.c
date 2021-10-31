 #include "stdlib.h"
#include "stdio.h"
#include "time.h"

void insertion_Sort(int *arr, int n);
void array_Printing(int *arr, int n);

int main()
{
    int N = 450000, r;
    int arr[N];

    srand(time(0));
    r = -100000;
    for (int i = 0; i < N; i++)
    {
        r = r + rand() % 10;
        arr[i] = r;
    }

    clock_t time;

    time = clock();
    insertion_Sort(arr, N);
    time = clock() - time;
    printf("Insertion Sort: %f\n", (double)time / CLOCKS_PER_SEC);
}

void insertion_Sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int key = arr[i], index = i;
        while (index != 0 && arr[index - 1] < key)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = key;
    }
}

void array_Printing(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 