#include <stdio.h>

//using the combinational boolean equations we get from calculation of kmaps
void states(int c0, int c1, int o0, int b, int* n0, int* n1, int* O0) {
    *n0 = b;
    *n1 = c0 & (!c1) & (!b) | (!c0) & c1 | c1 & b;
    *O0 = (!c1) & b | c0 & (!c1) | (!c0) & c1 & (!b);

}