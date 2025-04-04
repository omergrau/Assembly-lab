#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400

// LEDs abstraction
#define LEDsArrPort        &P1OUT
#define LEDsArrPortDir     &P1DIR
#define LEDsArrPortSel     &P1SEL

// PushButtons abstraction
#define PBsArrPort	   &P2IN 
#define PBsArrIntPend	   &P2IFG 
#define PBsArrIntEn	   &P2IE
#define PBsArrIntEdgeSel   &P2IES
#define PBsArrPortSel      &P2SEL 
#define PBsArrPortDir      &P2DIR 
#define PBsArrPortScope    &P2OUT
#define PB0                0x01
#define PB1                0x02
#define PB2                0x04
#define PB3                0x08

#endif



