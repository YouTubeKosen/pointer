#include <stdio.h>
#include <stdint.h>

uint32_t get_val_32bit(uint32_t * ptr)
{
    return *ptr;
}

uint32_t get_val_8bit(uint8_t * ptr)
{
    return *ptr;
}

int main(void) {
    uint32_t hoge;
    uint32_t *ptr_hoge;
    uint8_t  *ptr_hoge_8bit;

    hoge = 256;
    printf("hoge = %d\n", hoge);

    ptr_hoge = &hoge;
    printf("hoge = %d\n", get_val_32bit(ptr_hoge));

    ptr_hoge_8bit = (uint8_t *)&hoge;
    printf("hoge = %d\n", get_val_8bit(ptr_hoge_8bit));

    ptr_hoge_8bit += 1;
    printf("hoge = %d\n", get_val_8bit(ptr_hoge_8bit));

    return 0;
}