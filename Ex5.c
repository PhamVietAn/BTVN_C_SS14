#include <stdio.h>

int count(char *chuoi){
    int soTu = 0;
    int flag = 0;

    while(*chuoi){
        if(*chuoi == ' ' || *chuoi == '\n'){
            flag = 0;
        }else if(flag==0){
            flag = 1;
            soTu++;
        }
        chuoi++;
    }

    return soTu;
}

int main(){
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);


    int soTu = count(chuoi);
    printf("So tu trong chuoi la: %d\n", soTu);

    return 0;
}
