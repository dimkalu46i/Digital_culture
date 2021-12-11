#include <stdio.h>

int main()
{
    int arr[N] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int v1[4] = {2, 5, 2, 2};
    int v2[4] = {1, 2, 0, 1};

    printf("%d %d\n%d %d\n",
           v1[0] * v2[0] + v1[1] * v2[2],
           v1[0] * v2[1] + v1[1] * v2[3],
           v1[2] * v2[0] + v1[3] * v2[2],
           v1[2] * v2[1] + v1[3] * v2[3]);


    return 0;
}
