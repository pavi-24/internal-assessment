#include<stdio.h>
#include<string.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("Uppercase");
    }
    else if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}