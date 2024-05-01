#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "utils/utils.h"

int main(void) {
    char str[] = "mad";

    printf("%d", string_isCharDuplicated(str));
    return 0;
}
