#include <stdio.h>

int* arrayFill(int length)
{
    int* arr = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        printf("arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    return 0;
}

int* twoDimensionalArrayFill(int rows, int columns)
{
    int* arr = malloc(rows * columns * sizeof(int));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Array (%d)(%d) = ", i, j);
            scanf_s("%d", &arr[i * columns + j]);
        }
    }
    return arr;
}


void arrayShow(int array[])
{
    for (int i = 0; i < sizeof(*array) / sizeof(int); i++)
        printf("%d", array[i]);
}


void twoDimensionalArrayShow(int array[], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            printf("%d", array[i * columns + j]);

        printf("\n");
    }
}
