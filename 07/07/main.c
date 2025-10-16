//
//  main.c
//  07
//
//  Created by 강채연 on 10/16/25.
//

#include <stdio.h>

int counter;

void set_counter()
{
    counter=20;
}

int main(void)
{
    printf("counter=%d\n", counter);
    set_counter();
    printf("counter=%d\n", counter);
    
    return 0;
}
