//
//  main.c
//  H1 Q15 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
void yazdir(int a);
int main(int argc, const char * argv[]) {
    //Draw a flow chart to print all natural numbers in reverse (from n to 1).
    int sayi;
    printf("Bir sayi giriniz. ");
    scanf("%d",&sayi);
     yazdir(sayi);
    return 0;
}
void yazdir(int a){
    
    for(a ;a>0;a--){
        
        printf("%d\n",a);
        
        
    }
}
