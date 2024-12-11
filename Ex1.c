#include <stdio.h>

void chainEnter(char *chuoi, int size){
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, size, stdin);
}

int chainLength(char *chuoi){
    int length = 0;
    while(chuoi[length] != '\0' && chuoi[length] != '\n'){
        length++;
    }
    return length;
}

int main(){
    char chuoi[100];
    chainEnter(chuoi, sizeof(chuoi));

    int length = chainLength(chuoi);

    printf("\nChuoi vua nhap: %s", chuoi);
    printf("Do dai cua chuoi: %d\n\n", length);

    return 0;
}
