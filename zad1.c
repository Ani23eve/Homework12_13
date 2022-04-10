#include <stdio.h>
#include <stdint.h>

uint16_t checkBit(uint16_t mask, int bit){
    return mask &(1<<bit);
}

uint8_t CheckBit(uint16_t uValue){
    int cnt =0;
    for(int i=0; i<16; i++){
        if (checkBit(uValue,i) != 0){
            cnt++;
        }
    }
    return cnt == 1;
}


int main(){
    uint16_t a[] = {0,1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i< 11; i++){
        printf("%d -> %d\n", a[i], CheckBit(a[i]));
    }

    return 0;
}