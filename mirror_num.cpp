#include "middle.h"

bool itc_mirror_num(long long num1){
    if(num1==itc_rev_num(num1))
        return true;
    return false;
}
int itc_mirror_count(long long num1){
    int kolich=0,chis=1;
    if (num1<0)
        num1*=(-1);
    while (chis<num1){
        if (chis==itc_rev_num(chis))
            kolich++;
        chis++;
    }
    return kolich;
}
