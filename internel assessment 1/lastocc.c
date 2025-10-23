#include<stdio.h>
int main(){
    int n,key;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(int i=n-1;i>=0;i--){
        if(arr[i]==key){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}