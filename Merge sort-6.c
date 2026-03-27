#include <stdio.h>
#define MAX 100
int main()
{
    int A[MAX], B[MAX];
    int N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int L = 1;

    while (L < N)
    {
        int start = 0;

        while (start < N)
        {
            int mid = start + L - 1;
            int end = start + 2 * L - 1;

            if (mid >= N)
                break;

            if (end >= N)
                end = N - 1;

            int i = start;
            int j = mid + 1;
            int k = start;

            while (i <= mid && j <= end)
            {
                if (A[i] <= A[j])
                    B[k++] = A[i++];
                else
                    B[k++] = A[j++];
            }

            while (i <= mid)
                B[k++] = A[i++];

            while (j <= end)
                B[k++] = A[j++];

            start = start + 2 * L;
        }

        for (i = 0; i < N; i++)
            A[i] = B[i];

        L = L * 2;
    }

    printf("\nSorted elements:\n");
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    return 0;
}
