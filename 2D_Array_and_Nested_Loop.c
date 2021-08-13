#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numbers[3][2] = {
                        {1, 5},
                        {2, 6},
                        {3, 7}
                        };
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d,",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
