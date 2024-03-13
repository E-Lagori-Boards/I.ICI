/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"


 /********************************
 ***START printf() ACCOMODATION***
 *********************************/
 int _write(int file, char *ptr, int len)
 {
     (void) file ;
     int i ;
     for (i = 0 ; i < len ; i++) {
         UART_UartPutChar(*ptr++) ;
     }
     return len ;
 }
/********************************
 ****END printf() ACCOMODATION****
 *********************************/


# define I1  0
# define I2  1
# define I3  2
# define I4  3
# define I5  4
# define I6  5
# define I7  6
# define I8  7
# define I9  8
# define I10 9
# define I11 10
# define I12 11
# define I13 12
# define I14 13
# define I15 14
# define I16 15

void setmux(int a){
    switch(a){
        case  I1:    S3_Write(0);   S2_Write(0);    S1_Write(0);    S0_Write(0);     break;
        case  I2:    S3_Write(0);   S2_Write(0);    S1_Write(0);    S0_Write(1);     break;
        case  I3:    S3_Write(0);   S2_Write(0);    S1_Write(1);    S0_Write(0);     break;
        case  I4:    S3_Write(0);   S2_Write(0);    S1_Write(1);    S0_Write(1);     break;
        case  I5:    S3_Write(0);   S2_Write(1);    S1_Write(0);    S0_Write(0);     break;
        case  I6:    S3_Write(0);   S2_Write(1);    S1_Write(0);    S0_Write(1);     break;
        case  I7:    S3_Write(0);   S2_Write(1);    S1_Write(1);    S0_Write(0);     break;
        case  I8:    S3_Write(0);   S2_Write(1);    S1_Write(1);    S0_Write(1);     break;
        case  I9:    S3_Write(1);   S2_Write(0);    S1_Write(0);    S0_Write(0);     break;
        case I10:    S3_Write(1);   S2_Write(0);    S1_Write(0);    S0_Write(1);     break;
        case I11:    S3_Write(1);   S2_Write(0);    S1_Write(1);    S0_Write(0);     break;
        case I12:    S3_Write(1);   S2_Write(0);    S1_Write(1);    S0_Write(1);     break;
        case I13:    S3_Write(1);   S2_Write(1);    S1_Write(0);    S0_Write(0);     break;
        case I14:    S3_Write(1);   S2_Write(1);    S1_Write(0);    S0_Write(1);     break;
        case I15:    S3_Write(1);   S2_Write(1);    S1_Write(1);    S0_Write(0);     break;
        case I16:    S3_Write(1);   S2_Write(1);    S1_Write(1);    S0_Write(1);     break;
    }
}

uint16 analogRead(){
    uint16 result=0, counts=0;
    
//    while(0u != ADC_IsEndConversion(ADC_RETURN_STATUS)){
//            ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
            counts = ADC_GetResult16(0);
//            result = ADC_CountsTo_Volts(0, counts); 
//        }
    return counts;
}


int main(void)
{
    CyGlobalIntEnable;
    
    uint16 result;
    UART_Start();
    CTRL_Write(0);
    
    setmux(I1);
    ADC_Start();
    ADC_StartConvert();
    for(;;)
    {
            result= analogRead();
            printf("%d\n", result);
//            printf("%d\n", (int)(result*1000));
    }
}

/* [] END OF FILE */
