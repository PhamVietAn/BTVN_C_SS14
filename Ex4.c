#include <stdio.h>

int countIndex(char *chuoi, char index){
    int count = 0;
    for(int i = 0; chuoi[i] != '\0'; i++){
        if(chuoi[i] == index) {
            count++;
        }
    }
    return count;
}

int main(){
    char chuoi[] = "Pham Viet An";
    char index;

    printf("Chuoi: %s\n", chuoi);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &index);

    int soLanXuatHien = countIndex(chuoi, index);
    printf("So lan ky tu '%c' xuat hien trong chuoi la: %d\n", index, soLanXuatHien);

    return 0;
}
