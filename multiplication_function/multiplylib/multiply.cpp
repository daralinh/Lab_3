//
// Created by Linhdara on 12/11/2021.
//
#include "multiply.h"

ll multiply::simple_multiplication(ll x, ll y) {
    return  x*y;
}

ll multiply::india_multiplication(ll x, ll y) {
    if(y==0)return  0;
    if(y&1)return  2*multiply::india_multiplication(x,y/2)+x;
    return 2*multiply::india_multiplication(x,y/2);
}
