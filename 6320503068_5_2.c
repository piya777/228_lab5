#include<stdio.h>

    void main(){
        int n,i,j,x,y;
        scanf("%d",&n);
        if(n%2==0){
            x=n/2;
            y=n-1;
        }
        else{
            x=(n+1)/2;
            y=n;
        }
        for(i=0; i<x; i++){
            for(j=0;j<y;j++){
                if(j==x+i-1||j==x-i-1){
                    printf("*");
                }
                else{
                    printf("_");
                }
            }
            printf("\n");
        }
        for(i=x; i>0; i--){
            for(j=y;j>0;j--){
                if(j==x-i+1||j==x+i-1){
                    printf("*");
                }
                else{
                    printf("_");
                }
            }
            printf("\n");
        }
    }
