//
//  main.c
//  ODEV-Q3
//
//  Created by my computer on 28.03.2023.
//

#include <stdio.h>
int func(int sayi1,int sayi2);
int main(int argc, const char * argv[]) {
    // insert code here...
    int sayi1,sayi2;
    printf("bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("bir sayi giriniz");
    scanf("%d",&sayi2);
   int a= func(sayi1, sayi2);
    printf("%d",a);
    
    return 0;
}
int func(int sayi1,int sayi2){
    
    if(sayi2==0){
        return 0;
    }
    return sayi1+ func(sayi1, sayi2-1);
    
    
}
