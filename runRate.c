#include <stdio.h>

int main()
{
    int T, i = 0, r1, r2, B, ball_played;
    double current_rr, asking_rr;

    scanf("%d", &T);
    int arr_size = T * 2;
    double arr[arr_size];

    if (1 <= T && T <= 100)
    {
        while (T--)
        {
            scanf("%d%d%d", &r1, &r2, &B);
            if ((1 <= r1 && r1 <= 1000) && (1 <= r2 && r2 <= r1) && (1 <= B && B <= 300))
            {
                ball_played = 300 - B;
                current_rr = (r2 * 1.0 / ball_played) * 6;
                asking_rr = ((r1 - r2 + 1) * 1.0 / B) * 6;
            };

            arr[i] = current_rr;
            i++;
            arr[i] = asking_rr;
            i++;
        }
    }

        for (int j = 0; j < arr_size; j++)
    {
        printf("%0.2lf ", arr[j]);
        if ((j + 1) % 2 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}