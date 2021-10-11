#include "middle.h"

int itc_second_max_num(long long num1){
    int max2=-1,maxim=0,num=num1;
    if (num1<0)
        num1*=(-1);
    while (num!=0){
        if (num1%10>maxim)
            maxim=num1%10;
        num/=10;
    }
    while (num1!=0){
        if (num1%10<=maxim && num1%10>max2)
            max2=num1%10;
        num1/=10;
    }
    return max2;
}
