#include <stdio.h>  // includes the important libraries ect
#include <stdlib.h>

int main()
{
    int Gildfesh1 = 1;   // start of the variable
    void *p = calloc((size_t) 10, (size_t) 99999); // allocation of memory
    printf("Welcome to Gildfesh test application!\n");  // first printf statement
    while (Gildfesh1 =1) {  // start of while loop
        printf("Gildfesh is a member of the staff team in Save Minecraft Server\n");
    }
    free(p); // end of memory allocation
    return 0;
}
