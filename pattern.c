#include<stdio.h>
int main(){

    for(int i=0;i<5;i++){
        for(int j=9;j>i;j--){
            printf(" ");
        }
        for(int k=5;k>i;k--){
            printf("%d",k);
        }
        for(int f=i-1;f>i;f--){
            printf("%d",f);
        }
        printf("\n");
    }

    return 0;
}