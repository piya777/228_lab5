#include<stdio.h>
    void main(){
        int n,i,x,y,s1,j,s2,check=0;
        scanf("%d",&n);
        if(n%2==0){
            x=n/2;
            y=2;
        }
        else{
            x=(n/2)+1;
            y=1;
        }
        if(n>=1&&n<=1000){
            for( i=0 ; i<x ; i++ ){
                for( j=1 ; j<n ; j++ ){
                    if(j%x==0){
                        printf("*");
                    }
                    else{
                        printf("_");
                    }
                }
                printf("\n");
                x--;
            }
            for( i=0 ; i<x+1 ; i++ ){
                for( j=0 ; j<=n ; j++ ){
                    if(j==0||j==n-2){
                        printf("*");
                    }
                    else{
                        printf("_");
                    }
                }
                printf("\n");
            }
        }
    }
