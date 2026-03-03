
#include <stdio.h>

int main()
{
    int N, ITEM, LOC = 0;
    int DATA[100];
    int K = 1;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for (int i = 1; i <= N; i++)
        scanf("%d", &DATA[i]);

    printf("Enter item to search: ");
    scanf("%d", &ITEM);

    K = 1;
    LOC = 0;

    while (LOC == 0 && K <= N)
    {
        if (ITEM == DATA[K])
            LOC = K;
        K = K + 1;
    }

    if (LOC == 0)
        printf("ITEM is not in the array\n");
    else
        printf("Location of ITEM: %d\n", LOC);

    return 0;
}
