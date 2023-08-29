//
//  main.c
//  HOMEWORK1 Q15
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   //Draw a flow chart to print all natural numbers in reverse (from n to 1).
    int sayi;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    
    for (int i =1 ; i<= sayi;i++){
        printf("%d\n",i);
        
    }
    
    return 0;
}
