//
//  main.c
//  H1 Q12 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void count(int a,int b,int c);
int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart to count and print all numbers from LOW to HIGH by steps of STEP. Test with LOW=0 and HIGH=100 and STEP=5.
    int high,low ,step;
    
    printf("Bir sayi giriniz");
    scanf("%d",&high);
    printf("Bir sayi giriniz");
    scanf("%d",&low);
    printf("Bir sayi giriniz");
    scanf("%d",&step);
  count(low,high,step);
    
    return 0;
}

void count(int a,int b,int c){
    int gecici;
    if(a>b){
        gecici = a;
        a = b;
        b= gecici;
    }
    for(a;a<=b;a+=c){
       
      
        printf("%d\n",a);
    }
    
}
