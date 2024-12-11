#include <stdio.h>

void reverse(char *chuoi){
    int length = 0;
    while(chuoi[length] != '\0'){
        length++;
    }

    for(int i = 0; i < length / 2; i++){
        char temp = chuoi[i];
        chuoi[i] = chuoi[length - i - 1];
        chuoi[length - i - 1] = temp;
    }
}

int main(){
    char chuoi[] = "Pham Viet An";

    printf("Chuoi ban dau: %s\n", chuoi);
    reverse(chuoi);
    printf("Chuoi dao nguoc: %s\n", chuoi);

    return 0;
}
