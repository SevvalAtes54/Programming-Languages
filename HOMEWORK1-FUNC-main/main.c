//
//  main.c
//  H1 Q1 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int sayiTopla(int a,int b);
int main(int argc, const char * argv[]) {
    // Draw a flowchart to add two numbers entered by user.
    
    int num1,num2;
    
    printf("Bir sayi giriniz");
    scanf("%d",&num1);
    printf("Bir sayi giriniz");
    scanf("%d",&num2);
   int sonuc = sayiTopla(num1, num2);
    printf("%d",sonuc);
    
    
    return 0;
}

int sayiTopla(int a,int b){
    
    int k ;
    k=a+b;
    
    return k;
    
}
