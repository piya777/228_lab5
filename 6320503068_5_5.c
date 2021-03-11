#include<stdio.h>

    void main(){
        int n,check=2,i=2;
        scanf("%d",&n);
        if(n==1){
            printf("1");
        }
        else if(n>1){
            while(check<=n){
                if(i%7!=0 && i%11!=0 && i%13!=0 && i%2==0||i%3==0||i%5==0){
                    if(check==n){
                        break;
                    }
                    check++;
                }
                i++;
            }
            printf("%d",i);
        }

    }
