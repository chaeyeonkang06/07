//
//  main.c
//  07
//
//  Created by 강채연 on 10/16/25.
//

#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i=10;
    printf("함수 호출 전 i = %d\n", i);
    
    i=inc(i);
    printf("함수 호출 후 i = %d\n", i);
    
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}
