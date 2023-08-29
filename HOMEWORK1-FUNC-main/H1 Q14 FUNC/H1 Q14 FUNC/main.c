//
//  main.c
//  H1 Q14 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int factorial(int a);
int main(int argc, const char * argv[]) {
    // .Draw a flowchart for computing factorial N (N!).
    int sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    
    int a = factorial(sayi);
    printf("faktoriyeli : %d",a);
    return 0;
}
int factorial(int a){
    int fact = 1;
    for (int i=1;i<=a;i++){
        fact *= i;
    }
 
    
    
    
    return fact;
}
