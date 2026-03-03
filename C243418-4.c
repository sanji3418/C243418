#include <stdio.h>

int main()
{
    int DATA[100], N;
    int K, PTR, TEMP;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &DATA[i]);
    }

    for (K = 1; K <= N - 1; K++)
    {
        PTR = 1;

        while (PTR <= N - K)
        {
            if (DATA[PTR] > DATA[PTR + 1])
            {
                TEMP = DATA[PTR];
                DATA[PTR] = DATA[PTR + 1];
                DATA[PTR + 1] = TEMP;
            }
            PTR = PTR + 1;
        }
    }

    printf("Sorted array:\n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", DATA[i]);
    }

    return 0;
}
