#include <stdio.h>

int main()
{
    int N, ITEM;
    int DATA[100];
    int LB, UB, BEG, END, MID;
    int LOC = -1;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter sorted elements:\n");
    for (int i = 1; i <= N; i++)
        scanf("%d", &DATA[i]);

    printf("Enter item to search: ");
    scanf("%d", &ITEM);

    LB = 1;
    UB = N;
    BEG = LB;
    END = UB;

    while (BEG <= END)
    {
        MID = (BEG + END) / 2;

        if (DATA[MID] == ITEM)
        {
            LOC = MID;
            break;
        }
        else if (ITEM < DATA[MID])
            END = MID - 1;
        else
            BEG = MID + 1;
    }

    if (LOC == -1)
        printf("ITEM not found\n");
    else
        printf("ITEM found at location: %d\n", LOC);

    return 0;
}
