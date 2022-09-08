#include <stdio.h>

int fact(int);
int main(){
    printf("bir sayı giriniz:");
    int x;
    scanf("%d",&x);
    printf("faktöriyeli:%d",fact(x));
    
}
int fact(int x){
    int sonuc=1;
    for(int i=1;i<=x;i++){
        sonuc*=i;
    }
    return sonuc;
}