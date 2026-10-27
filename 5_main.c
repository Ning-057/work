//202610411223
//宁哲

#include<stdio.h>
int main(){
    float a,b;
    char op;
    if(scanf("%f %c %f",&a,&op,&b)!=3){
        printf("错误：输入格式不正确\n");
        return 0;
    }
    if(op=='+'){
        printf("%.2f\n",a+b);
    }
    else if(op=='-'){
        printf("%.2f\n",a-b);
    }
    else if(op=='*'){
        printf("%.2f\n",a*b);
    }
    else if(op=='/'){
        if(b==0){
            printf("错误：除数不能为 0\n");
        }
        else{
            printf("%.2f\n",a/b);
        }
    }
    else{
        printf("错误：不支持的运算符\n");
    }
    return 0;
}
