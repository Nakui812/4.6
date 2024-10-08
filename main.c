#include <stdio.h>

int main(void) {
    int raggio = 1;
    float area, circonferenza;
    const float PI = 3.14159;

    while (raggio <= 20) {
        area = PI * raggio * raggio;
        circonferenza = 2 * PI * raggio;
        printf("Raggio: %d, Area: %.2f, Circonferenza: %.2f\n", raggio, area, circonferenza);
        raggio++;
    }

    return 0;
}
