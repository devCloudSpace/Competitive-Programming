/*  Problem Statement: https://www.codechef.com/problems/CIELRCPT
    Author: Suraj Sharma
*/

#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
#include<math.h>
#include<assert.h>

int main(void) {
    uint8_t test;
    uint32_t p; // Positive Integer which Tanya Loves
    scanf("%"SCNu8,&test); // Takes the input for test i.e Number of test cases.
    assert(test > 0 && test < 6);
    while(test--) {
        uint32_t min_menus = 0;
        scanf("%"SCNu32,&p); // Takes the input for p i.e. Tanya Positive Number.
        assert(p > 0 && p < 100001);
        while(p > 2048) {
            p -= 2048;
            ++min_menus;
        }
        while(log2(p) > (uint32_t) log2(p)) {
            ++min_menus;
            p = p % (uint32_t) pow(2,floor(log2(p)));
        }
        if((!(log2(p) > (uint32_t) log2(p)))) {
            ++min_menus;
        }
        printf("%"PRIu32"\n",min_menus);
    }
    return 0;
}