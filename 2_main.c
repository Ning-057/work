//202610411223
//宁哲

#include<stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    if (a>0){
        printf("正数\n");
    }
    else if (a<0){
        printf("负数\n");
    }
    else{
        printf("零\n");
    }
    return 0;
}