#include <stdio.h>
#include <string.h>

/*6. Character arrays and pointers*/

int main(){
    char C[8];
    C[0] = 'J';        //Also, int C[] = {'J', 'o', 'h', 'n'};
    C[1] = 'o';
    C[2] = 'h';
    C[3] = 'n';
    C[4] = '\0';      //string in c should end with Null char. (\0)
    int len = strlen(C);
    printf("%s %d\n", C, len);

    //Can also do it like this
    char D[] = "John";
    printf("Size of D: %d\n", sizeof(D));   //5, as it contains the (\0)
    len = strlen(D);
    printf("Length of D: %d\n", len);       //4, as it counts till (\0)

    char* c2;
    printf("Size of pointer variable: %d\n", sizeof(c2));
    c2 = D;
    c2[0] = 'Q';
    printf("%s\n", D);
    D[0] = 'H';
    printf("%s\n", D);
    return 0;
}
