//
//  main.c
//  H1 Q10 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int enBuyuk(int a, int b,int c);
int main(int argc, const char * argv[]) {
    // Draw a flowchart to find the largest of three numbers A, B, and C.
    int sayi1,sayi2,sayi3;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bir sayi giriniz");
    scanf("%d",&sayi2);
    printf("Bir sayi giriniz");
    scanf("%d",&sayi3);
    int sonuc = enBuyuk(sayi1, sayi2,sayi3);
    printf("%d",sonuc);
    return 0;
}
int enBuyuk(int a, int b,int c){
    if(a>b){
        
        if(a>c){
            return  a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return  b;
        }
        else{
            return c;
        }
    }
        
    
    if(b>c){
        
        if(b>a){
            return  b;
        }
        else {
            return a;
        }
    }
    
    else{
        
        if(c>a){
            return  c;
        }
        else {
            return a;
        }
    }
    
    
    
}

