#include <stdio.h>

int main(){
    int arr[2][3][2]= {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };
    int i,j,k;
    for (i=0 ; i<2; i++){
        if (i!=0){
            printf("--------\n");
        }
        for (j=0; j<3; j++){
            /*if (j!=1){
                printf("-\n");
            }*/
            for(k=0;k<2; k++){
                printf("%d\t" , *(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
    }

}