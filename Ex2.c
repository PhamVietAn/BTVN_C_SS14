#include <stdio.h>

void printString(char *chuoi){
    int i = 0;
    while(chuoi[i] != '\0'){
        printf("%c ", chuoi[i]);
        i++;
    }
    printf("\n");
}

int main(){
    char chuoi[] = "Pham Viet An";

    printf("Chuoi vua nhap: %s\n", chuoi);
    printf("Cac ky tu trong chuoi: ");
    printString(chuoi);

    return 0;
}
