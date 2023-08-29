//
//  main.c
//  Call by REF-VAL
//
//  Created by my computer on 6.04.2023.
//

#include <stdio.h>
int func(int bolunen,int bolen,int *kalan);
int main(int argc, const char * argv[]) {
    // insert code here...
    int bolunen=15 ,bolen=7,kalan;
  int sonuc=  func(bolunen,bolen,&kalan);
    printf("klan:%d - sonuc:%d ",kalan,sonuc);
    
    
    return 0;
}
int func(int bolunen,int bolen,int *kalan){
    *kalan=bolunen%bolen;
    return bolunen/bolen;
    
    
}
