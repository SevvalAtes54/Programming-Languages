//
//  main.c
//  ogrenci no
//
//  Created by my computer on 10.01.2023.
//


#include <stdlib.h>
#include <stdio.h>

int function(int a);
int main(){
   // 1 + 11 + 111 + 1111 N TANE BİR OLACAK ŞEKİLDE
    int n;
    printf("bir n degeri giriniz ");
    scanf("%d",&n);
    int d =  function(n);
    printf("toplaminiz %ddir",d);
    
    
    return 0;
}



int function(int a){
    int x = 0,top =0;
    for(int i =1;i<=a;i++){
        top = (top*10)+1;
        x+=top;
        printf("%d ",top);
        
    }
    top = (top*10) +1;
    return x;
}
    

