//
//  main.c
//  07
//
//  Created by 강채연 on 10/16/25.
//

#include <stdio.h>

void f(void);


int main(void)
{
    int i;
    for(i=0;i<5;i++) //이미 i가 10이라 조건에 안 맞아서 사라졍
    {
        f();
    }
    return 0;
}

void f(void)
{
    int i;
    for(i=0;i<10;i++)
        printf("#");
}
