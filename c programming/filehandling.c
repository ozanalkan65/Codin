#include <stdio.h>
#include <stdlib.h>

typedef struct kimlik{
    int tc;
    char ad[50];
    char soyad[50];
}id;

int main(){
    FILE* fptr;
    id ogrid;
    id mehmet = {654278, "mehmet" , "guler"};
    id ahmet = {123456, "ahmet" , "yilmaz"};
    fptr = fopen("ilk.dat","wb");
    if (fptr == NULL){
        printf("Hata!!");
        exit(0);
    };
    int str_boyut = sizeof(id);
    fwrite(&mehmet, str_boyut ,1 ,fptr);
    fwrite(&ahmet ,str_boyut,1, fptr);
    fclose(fptr);
    printf("veriler yazildi\n");

    
    if (fptr == NULL){
        printf("acilmadi");
        exit(0);
    }
    while (fread(&ogrid, str_boyut ,1,fptr)==1){
        printf("ad soyad tc --> %s\n%s\n%d\n", ogrid.ad, ogrid.soyad,ogrid.tc );
        
    }
    return 0;
}