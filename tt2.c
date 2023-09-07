#include <stdio.h>

int main() {
    int age;
    printf("อายุของคุณ: " );
    scanf("%d", &age);
    if (age)
    {
        if (age >= 18)
        {
            printf("ok");
        }
        else
        {
            printf("kook kook!!");
        }
    }
    else
    {
        printf("อายุของคุณไม่ใช่ตัวเลข");
    }
    return 0;
}