//
//  main.c
//  07
//
//  Created by 강채연 on 10/16/25.
//

#include <stdio.h>

int all_files;

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}
