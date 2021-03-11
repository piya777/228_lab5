#include<stdio.h>

    void main(){
        int n,check=1,i=2;
        scanf("%d",&n);
        if(n==1){
            printf("1");
        }
        else{
            while(check<=n){
                if(i%2==0||i%3==0||i%5==0){
                    if(check==n){
                        check++;
                        break;
                    }
                    check++;
                }
                i++;
            }
            printf("%d",i);
        }

    }
