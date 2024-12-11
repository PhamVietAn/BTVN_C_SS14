#include <stdio.h>

int count(char *chuoi){
    int numIndex = 0;
    while(*chuoi){
        if((*chuoi >= 'A' && *chuoi <= 'Z') || (*chuoi >= 'a' && *chuoi <= 'z')){
            numIndex++;
        }
        chuoi++;
    }
    return numIndex;
}

int main(){
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    int numIndex = count(chuoi);
    printf("So ky tu la chu cai trong chuoi la: %d\n", numIndex);

    return 0;
}
