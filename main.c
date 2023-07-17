#include <stdio.h>
#include <stdint.h>

uint32_t get_val(uint32_t * ptr)
{
    return *ptr;
}

int main(void) {
    uint32_t hoge;
    uint32_t *ptr_hoge;
    hoge = 256;
    printf("hoge = %d\n", hoge);

    ptr_hoge = &hoge;
    printf("hoge = %d\n", get_val(ptr_hoge));

    return 0;
}