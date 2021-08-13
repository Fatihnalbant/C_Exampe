#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE * fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Alex, Manager\nPascal, Director\nBrat, Gamer");
    fprintf(fpointer, "\n----------------------------------------\n");
    fprintf(fpointer, "Fatih, Manager\nHasan, Director\nHakan, Gamer");
    fclose(fpointer);
    return 0;
}
