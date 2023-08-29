//
//  main.c
//  HOMEWORK2 Q25
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to print Pascal triangle upto n rows. 1 1 2 3 5 8
    int n;
    int top = 0;
    printf("bir sayi giriniz");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int ikincideger=a;
    printf("1 1");
    for(int i=1;i<=n;i++){
        top =a+b;
        ikincideger=b ;
        
    }
    
    return 0;
}
