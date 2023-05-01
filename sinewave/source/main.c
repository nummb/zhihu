#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/IQmathLib.h"
#include "../include/IQsine.h"


#define POINT_NUM 256
#define PI 3.141592f
#define int8_t char
#define uint8_t unsigned char
#define int16_t short
#define uint16_t unsigned int
#define int32_t int
#define uint32_t unsigned int

int main()
{
    // FILE *fw;
    // fw = fopen("algorithm.dat", "w");
    // for(int i=0; i<POINT_NUM; i++)
    // {
    //     printf("[%03d:%1.4f]\t",i,sin(i*PI/2/POINT_NUM));
    //     fprintf(fw, "%g\n",sin(i*PI/2/POINT_NUM));
    //     if((i+1)%8 == 0)
    //     {
    //         printf("\r\n"); 
    //     } 
    // }

    printf("sin=============================================\r\n");
    // for (int i = 0; i < POINT_NUM; i++) {

    //     printf("[ %d:\t0x%04X ]", i, (int16_t)(sin(i*PI/2 / POINT_NUM) * 32768));
    //     if((i+1) % 8 == 0){
    //         printf("\r\n");
    //     }
    // }
    _iq15 angle = _IQ15(0.1);
    Trig_Components sincos;
    sincos = trig_functions(angle);
    printf("sin = 0x%04X cos=0x%04X",sincos.hSin,sincos.hCos);

    return 0;
}