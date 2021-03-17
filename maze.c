#include <stdio.h>
void posRight(int arr[3][3], int position[2]);
void posDown(int arr[3][3], int position[2]);
void posLeft(int arr[3][3], int position[2]);
void posUp(int arr[3][3], int position[2]);
int main()
{
    int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int position[2] = {0, 0};
    int count = 0;
    while (1)
    {
        if (position[0] == 0 && position[1] == 0 && a[0][0] == 1)
            count++;
        posRight(a, position);
        posDown(a, position);
        posLeft(a, position);
        posUp(a, position);
    }
    return 0;
}

void posRight(int arr[3][3], int position[2])
{
    int j = position[1];
    while (arr[position[0], j] != 1)
    {
        if (position[0] < 0 || position[0] > 2)
            printf("%d %d", position[0], position[1]);
        return 0;
        position[0]++;
    }
    return;
}

void posDown(int arr[3][3], int position[2])
{
    int j = position[0];
    while (arr[j, position[1]] != 1)
    {
        if (position[1] < 0 || position[1] > 2)
            printf("%d %d", position[0], position[1]);
        return 0;
        position[1]++;
    }
    return;
}

void posLeft(int arr[3][3], int position[2])
{
    int j = position[1];
    while (arr[position[0], j] != 1)
    {
        if (position[0] < 0 || position[0] > 2)
            printf("%d %d", position[0], position[1]);
        return 0;
        position[0]--;
    }
    return;
}
void posUp(int arr[3][3], int position[2])
{
    int j = position[0];
    while (arr[j, position[1]] != 1)
    {
        if (position[1] < 0 || position[1] > 2)
            printf("%d %d", position[0], position[1]);
        return 0;
        position[1]--;
    }
    return;
}
