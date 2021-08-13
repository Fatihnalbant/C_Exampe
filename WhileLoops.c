#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1;
    while (index <= 11){
        printf("%d\n", index);
        index++;
    }
    printf("-----------------------");
    int index2 = 0;
    do {
        printf("%d\n", index2);
        index2++;
    }
    while(index2 <= 10);


    return 0;
}
