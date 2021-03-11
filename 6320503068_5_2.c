#include<stdio.h>
    void main(){
        int n,i,j,x,y=0,z;
        scanf("%d",&n);
        x=n/2;
        y=n;
        if(n%2!=0){
            x++;
        }
        if(n>=1&&n<=1000){
            for( i=0 ; i<x ; i++ ){
                for( j=x-1 ; j>0 ; j-- ){
                    printf("_");
                }
                printf("\n");
            }
        }
    }
