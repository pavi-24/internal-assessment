#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int last,temp,prev;
    while(n!=0){
        last=n%10;
        temp=n/10;
        prev=temp%10;
        n/=10;
        if(last<prev){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}