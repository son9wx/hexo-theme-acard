#include "stdc.h"
#include "swap-funcation-demo.c"
#include "swap-adress-demo.c"


/**
 * @desc int a 和 b 交换
 *   实现 a 和 b 只交换，地址不交换
 * @return void [打印地址]
*/
void swap_demo_1()
{
    int a = 1, b = 2;
    int *aptr = &a, *bptr = &b;
    printf("value of a is %d,adress of a is %o\n", a, aptr);
    printf("value of b is %d,adress of b is %o\n", b, bptr);
    *aptr = 2;
    *bptr = 1;
    printf("value of a is %d,adress of a is %o\n", a, aptr);
    printf("value of b is %d,adress of b is %o\n", b, bptr);
}

int main()
{
    swap_demo_1();
    swap_main();
    swap_adress_main();
    return 0;
}