/*
 * NVIC.h
 *
 *  Created on: 19 jul. 2018
 *      Author: InDev
 */

#ifndef NVIC_H_
#define NVIC_H_

#include <stdint.h>                      		/* standard types definitions                      */


#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX		(113)
#define NVIC_MAX			(3)
#define NVIC_PRI_MAX        (7)
#define NVIC_PRI_MASK       (7)
#define NVIC_IPR_MAX		(28)

enum
{
    NVIC_PRIORITY_ADC1SEQ2      =7,
    NVIC_PRIORITY_UART3         =6,

    NVIC_PRIORITY_UART2         =5,
    NVIC_PRIORITY_SSI1          =5,
    NVIC_PRIORITY_ADC0SEQ0      =4,


    NVIC_PRIORITY_GPIOQ4        =3,
    NVIC_PRIORITY_GPIOQ5        =2,
    NVIC_PRIORITY_GPIOQ6        =1,

    NVIC_PRIORITY_GPIOP2         =2,
    NVIC_PRIORITY_UART4 =1,

      NVIC_PRIORITY_GPIOA       =7,
      NVIC_PRIORITY_GPIOB       =7,
      NVIC_PRIORITY_GPIOC 		=7,
      NVIC_PRIORITY_GPIOD       =7,
      NVIC_PRIORITY_GPIOE       =7,
      NVIC_PRIORITY_UART0       =7,
      NVIC_PRIORITY_UART1       =7,
      NVIC_PRIORITY_SSI0        =7,
      NVIC_PRIORITY_I2C0        =7,
      NVIC_PRIORITY_PWM0FAULT    =7,
      NVIC_PRIORITY_PWM0GEN0     =7,
      NVIC_PRIORITY_PWM0GEN1  	=7,
      NVIC_PRIORITY_PWM0GEN2		=7,
      NVIC_PRIORITY_QEI0  	    =7,
      NVIC_PRIORITY_ADC0SEQ1    =7,
      NVIC_PRIORITY_ADC0SEQ2    =7,
      NVIC_PRIORITY_ADC0SEQ3    =7,
      NVIC_PRIORITY_WDT01       =7,
      NVIC_PRIORITY_TIMER0A     =7,
      NVIC_PRIORITY_TIMER0B     =7,
      NVIC_PRIORITY_TIMER1A     =7,
      NVIC_PRIORITY_TIMER1B     =7,
      NVIC_PRIORITY_TIMER2A     =7,
      NVIC_PRIORITY_TIMER2B 	=7,
      NVIC_PRIORITY_ACOMP0	    =7,
      NVIC_PRIORITY_ACOMP1      =7,
      NVIC_PRIORITY_RES43       =7,
      NVIC_PRIORITY_SYSCTL      =7,
      NVIC_PRIORITY_FLASH       =7,
      NVIC_PRIORITY_GPIOF       =7,
      NVIC_PRIORITY_RES47       =7,
      NVIC_PRIORITY_RES48       =7,
      NVIC_PRIORITY_TIMER3A     =7,
      NVIC_PRIORITY_TIMER3B     =7,
      NVIC_PRIORITY_I2C1        =7,
      NVIC_PRIORITY_CAN0        =7,
      NVIC_PRIORITY_CAN1        =7,
      NVIC_PRIORITY_ETH        =7,
      NVIC_PRIORITY_HIB       =7,
      NVIC_PRIORITY_USB       =7,
      NVIC_PRIORITY_PWM0GEN3         =7,
      NVIC_PRIORITY_UDMASOFT         =7,
      NVIC_PRIORITY_UDMAERROR    =7,
      NVIC_PRIORITY_ADC1SEQ0    =7,
      NVIC_PRIORITY_ADC1SEQ1    =7,
      NVIC_PRIORITY_EPI0    =7,
      NVIC_PRIORITY_GPIOJ    =7,
      NVIC_PRIORITY_GPIOK       =7,
      NVIC_PRIORITY_GPIOL       =7,
      NVIC_PRIORITY_SSI2       =7,
      NVIC_PRIORITY_SSI3       =7,
      NVIC_PRIORITY_UART5        =7,
      NVIC_PRIORITY_UART6       =7,
      NVIC_PRIORITY_UART7       =7,
      NVIC_PRIORITY_I2C2       =7,
      NVIC_PRIORITY_I2C3       =7,
      NVIC_PRIORITY_TIMER4A       =7,
      NVIC_PRIORITY_TIMER4B       =7,
      NVIC_PRIORITY_TIMER5A       =7,
      NVIC_PRIORITY_TIMER5B       =7,
      NVIC_PRIORITY_FP_EXC       =7,
      NVIC_PRIORITY_RES84        =7,
      NVIC_PRIORITY_RES85        =7,
      NVIC_PRIORITY_I2C4     =7,
      NVIC_PRIORITY_I2C5     =7,
      NVIC_PRIORITY_GPIOM       =7,
      NVIC_PRIORITY_GPION       =7,
      NVIC_PRIORITY_RES90       =7,
      NVIC_PRIORITY_TAMPER       =7,
      NVIC_PRIORITY_GPIOP       =7,
      NVIC_PRIORITY_GPIOP1       =7,
      NVIC_PRIORITY_GPIOP4       =7,
      NVIC_PRIORITY_GPIOP5       =7,
      NVIC_PRIORITY_GPIOP6       =7,
      NVIC_PRIORITY_GPIOP7       =7,
      NVIC_PRIORITY_GPIOQ      =7,
      NVIC_PRIORITY_GPIOQ1      =7,
      NVIC_PRIORITY_GPIOQ2      =7,
      NVIC_PRIORITY_GPIOQ3      =7,
      NVIC_PRIORITY_GPIOQ7      =7,
      NVIC_PRIORITY_RES108     =7,
      NVIC_PRIORITY_RES109     =7,
      NVIC_PRIORITY_SHA_MD5    =7,
      NVIC_PRIORITY_AES    =7,
      NVIC_PRIORITY_DES    =7,
      NVIC_PRIORITY_RES113    =7,
}NVIC_IPR_Priority;


typedef volatile struct
{
    volatile uint32_t NVIC_GPIOA    :1;
    volatile uint32_t NVIC_GPIOB    :1;
    volatile uint32_t NVIC_GPIOC    :1;
    volatile uint32_t NVIC_GPIOD    :1;
    volatile uint32_t NVIC_GPIOE    :1;
    volatile uint32_t NVIC_UART0    :1;
    volatile uint32_t NVIC_UART1    :1;
    volatile uint32_t NVIC_SSI0     :1;
    volatile uint32_t NVIC_I2C0     :1;
    volatile uint32_t NVIC_PWM0FAULT :1;
    volatile uint32_t NVIC_PWM0GEN0  :1;
    volatile uint32_t NVIC_PWM0GEN1  :1;
    volatile uint32_t NVIC_PWM0GEN2  :1;
    volatile uint32_t NVIC_QEI0  	:1;
    volatile uint32_t NVIC_ADC0SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC0SEQ2 :1;
    volatile uint32_t NVIC_ADC0SEQ3 :1;
    volatile uint32_t NVIC_WDT01    :1;
    volatile uint32_t NVIC_TIMER0A  :1;
    volatile uint32_t NVIC_TIMER0B  :1;
    volatile uint32_t NVIC_TIMER1A  :1;
    volatile uint32_t NVIC_TIMER1B  :1;
    volatile uint32_t NVIC_TIMER2A  :1;
    volatile uint32_t NVIC_TIMER2B	:1;
    volatile uint32_t NVIC_ACOMP0	:1;
    volatile uint32_t NVIC_ACOMP1   :1;
    volatile uint32_t NVIC_RES43    :1;
    volatile uint32_t NVIC_SYSCTL   :1;
    volatile uint32_t NVIC_FLASH    :1;
    volatile uint32_t NVIC_GPIOF    :1;
    volatile uint32_t NVIC_RES47    :1;
}NVIC0_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_RES48    :1;
    volatile uint32_t NVIC_UART2    :1;
    volatile uint32_t NVIC_SSI1     :1;
    volatile uint32_t NVIC_TIMER3A  :1;
    volatile uint32_t NVIC_TIMER3B  :1;
    volatile uint32_t NVIC_I2C1     :1;
    volatile uint32_t NVIC_CAN0     :1;
    volatile uint32_t NVIC_CAN1     :1;
    volatile uint32_t NVIC_ETH     :1;
    volatile uint32_t NVIC_HIB    :1;
    volatile uint32_t NVIC_USB    :1;
    volatile uint32_t NVIC_PWM0GEN3      :1;
    volatile uint32_t NVIC_UDMASOFT      :1;
    volatile uint32_t NVIC_UDMAERROR :1;
    volatile uint32_t NVIC_ADC1SEQ0 :1;
    volatile uint32_t NVIC_ADC1SEQ1:1;
    volatile uint32_t NVIC_ADC1SEQ2 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_EPI0 :1;
    volatile uint32_t NVIC_GPIOJ :1;
    volatile uint32_t NVIC_GPIOK    :1;
    volatile uint32_t NVIC_GPIOL    :1;
    volatile uint32_t NVIC_SSI2    :1;
    volatile uint32_t NVIC_SSI3    :1;
    volatile uint32_t NVIC_UART3    :1;
    volatile uint32_t NVIC_UART4     :1;
    volatile uint32_t NVIC_UART5     :1;
    volatile uint32_t NVIC_UART6    :1;
    volatile uint32_t NVIC_UART7    :1;
    volatile uint32_t NVIC_I2C2    :1;
    volatile uint32_t NVIC_I2C3    :1;
    volatile uint32_t NVIC_TIMER4A    :1;
}NVIC1_TypeDef;


typedef volatile struct
{
    volatile uint32_t NVIC_TIMER4B    :1;
    volatile uint32_t NVIC_TIMER5A    :1;
    volatile uint32_t NVIC_TIMER5B    :1;
    volatile uint32_t NVIC_FP_EXC    :1;
    volatile uint32_t NVIC_RES84     :1;
    volatile uint32_t NVIC_RES85     :1;
    volatile uint32_t NVIC_I2C4  :1;
    volatile uint32_t NVIC_I2C5  :1;
    volatile uint32_t NVIC_GPIOM    :1;
    volatile uint32_t NVIC_GPION    :1;
    volatile uint32_t NVIC_RES90    :1;
    volatile uint32_t NVIC_TAMPER    :1;
    volatile uint32_t NVIC_GPIOP    :1;
    volatile uint32_t NVIC_GPIOP1    :1;
    volatile uint32_t NVIC_GPIOP2    :1;
    volatile uint32_t NVIC_GPIOP3    :1;
    volatile uint32_t NVIC_GPIOP4    :1;
    volatile uint32_t NVIC_GPIOP5    :1;
    volatile uint32_t NVIC_GPIOP6    :1;
    volatile uint32_t NVIC_GPIOP7    :1;
    volatile uint32_t NVIC_GPIOQ   :1;
    volatile uint32_t NVIC_GPIOQ1   :1;
    volatile uint32_t NVIC_GPIOQ2   :1;
    volatile uint32_t NVIC_GPIOQ3   :1;
    volatile uint32_t NVIC_GPIOQ4   :1;
    volatile uint32_t NVIC_GPIOQ5   :1;
    volatile uint32_t NVIC_GPIOQ6   :1;
    volatile uint32_t NVIC_GPIOQ7   :1;
    volatile uint32_t NVIC_RES108  :1;
    volatile uint32_t NVIC_RES109  :1;
    volatile uint32_t NVIC_SHA_MD5 :1;
    volatile uint32_t NVIC_AES :1;
}NVIC2_TypeDef;


typedef volatile struct
{
    volatile uint32_t NVIC_DES :1;
    volatile uint32_t NVIC_RES113 :1;
    volatile uint32_t NVIC_TIMER6A :1;
    volatile uint32_t NVIC_TIMER6B :1;
    volatile uint32_t NVIC_TIMER7A :1;
    volatile uint32_t NVIC_TIMER7B :1;
    volatile uint32_t NVIC_I2C6 :1;
    volatile uint32_t NVIC_I2C7 :1;
    volatile uint32_t NVIC_RES120 :1;
    volatile uint32_t NVIC_RES121 :1;
    volatile uint32_t NVIC_RES122   :1;
    volatile uint32_t NVIC_RES123   :1;
    volatile uint32_t NVIC_RES124   :1;
    volatile uint32_t NVIC_I2C8   :1;
    volatile uint32_t NVIC_I2C9   :1;
    volatile uint32_t NVIC_RES127   :1;
    volatile uint32_t NVIC_RES128   :1;
    volatile uint32_t NVIC_RES129   :1;
}NVIC3_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_GPIOA    :3;//0
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_GPIOB    :3;//1
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_GPIOC  	:3;//2
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_GPIOD 	:3;//3
}IPR0_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_GPIOE    :3;//4
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_UART0    :3;//5
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_UART1    :3;//6
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_SSI0	 	:3;//7
}IPR1_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_I2C0     :3;//8
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_PWM0FAULT :3;//9
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_PWM0GEN0  :3;//10
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_PWM0GEN1	:3;//11
}IPR2_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_PWM0GEN2	:3;//12
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_QEI0     :3;//13
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_ADC0SEQ0 :3;//14
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_ADC0SEQ1 :3;//15
}IPR3_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ADC0SEQ2 :3;//16
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_ADC0SEQ3 :3;//17
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_WDT01    :3;//18
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_TIMER0A  :3;//19
}IPR4_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_TIMER0B		:3;//20
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_TIMER1A		:3;//21
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_TIMER1B	  	:3;//22
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER2A	 	:3;//23
}IPR5_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER2B  :3;//24
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_ACOMP0   :3;//25
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_ACOMP1   :3;//26
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES43    :3;//27
}IPR6_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_SYSCTL   :3;//28
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_FLASH    :3;//29
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_GPIOF    :3;//30
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES47    :3;//31
}IPR7_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES48		:3;//32
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_UART2		:3;//33
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_SSI1	  	    :3;//34
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER3A	    :3;//35
}IPR8_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER3B  :3;//36
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_I2C1		:3;//37
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_CAN0	  	:3;//38
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_CAN1	 	:3;//39
}IPR9_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ETH	    :3;//40
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_HIB	:3;//41
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_USB 	:3;//42
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_PWM0GEN3      :3;//43
}IPR10_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_UDMASOFT      :3;//44
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_UDMAERROR :3;//45
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_ADC1SEQ0 :3;//46
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_ADC1SEQ1:3;//47
}IPR11_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ADC1SEQ2 :3;//48
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_ADC1SEQ3 :3;//49
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_EPI0 :3;//50
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_GPIOJ :3;//51
}IPR12_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOK		:3;//52
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPIOL		:3;//53
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_SSI2	 	:3;//54
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_SSI3		:3;//55
}IPR13_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_UART3        :3;//56
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_UART4         :3;//57
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_UART5         :3;//58
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_UART6        :3;//59
}IPR14_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_UART7        :3;//60
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_I2C2      	:3;//61
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_I2C3 	    :3;//62
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER4A  	    :3;//63
}IPR15_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_TIMER4B		:3;//64
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_TIMER5A		:3;//65
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_TIMER5B 	    :3;//66
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_FP_EXC	 	:3;//67
}IPR16_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES84	        :3;//68
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES85         :3;//69
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_I2C4      :3;//70
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_I2C5	 	:3;//71
}IPR17_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOM		:3;//72
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPION		:3;//73
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES90        :3;//74
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TAMPER        :3;//75
}IPR18_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOP        :3;//76
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPIOP1		:3;//77
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_GPIOP2		:3;//78
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_GPIOP3	 	:3;//79
}IPR19_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOP4	    :3;//80
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPIOP5		:3;//81
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_GPIOP6		:3;//82
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_GPIOP7	 	:3;//83
}IPR20_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOQ 		:3;//84
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPIOQ1 		:3;//85
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_GPIOQ2 		:3;//86
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_GPIOQ3 	 	:3;//87
}IPR21_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_GPIOQ4 		:3;//88
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_GPIOQ5 		:3;//89
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_GPIOQ6    	:3;//90
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_GPIOQ7 	 	:3;//91
}IPR22_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES108 		:3;//92
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES109 		:3;//93
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_SHA_MD5     :3;//94
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_AES 	:3;//95
}IPR23_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_DES		:3;//96
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES113 	:3;//97
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_TIMER6A   	:3;//98
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER6B 	:3;//99
}IPR24_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_TIMER7A     :3;//100
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_TIMER7B     :3;//101
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_I2C6     :3;//102
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_I2C7     :3;//103
}IPR25_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES120     :3;//104
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES121     :3;//105
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES122       :3;//106
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES123       :3;//107
}IPR26_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES124       :3;//108
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_I2C8       :3;//109
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_I2C9       :3;//110
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES127       :3;//111
}IPR27_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES128       :3;//112
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES129       :3;//113
    const uint32_t reserved2            :16;
}IPR28_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t IP0  	:3;//0
    const uint32_t reserved1:5;
    volatile uint32_t IP1   :3;//1
    const uint32_t reserved2:5;
    volatile uint32_t IP2  	:3;//2
    const uint32_t reserved3:5;
    volatile uint32_t IP3   :3;//3
}IPRw_TypeDef;

typedef volatile struct
{
     const uint8_t reserved    :5;
     volatile uint8_t IP    	:3;//0
}IPRb_TypeDef;




typedef volatile struct
{
    IPRb_TypeDef IPR[240];
}IPRb__TypeDef;

typedef volatile struct
{
    IPRw_TypeDef IPR[60];
}IPRw__TypeDef;




typedef volatile struct
{
    volatile uint32_t INTID     :8;
    const uint32_t reserved     :24;
}STIR_TypeDef;




typedef volatile struct
{
    volatile uint32_t   ISER[4U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[28U];
    volatile uint32_t   ICER[4U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[28U];
    volatile uint32_t   ISPR[4U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[28U];
    volatile uint32_t   ICPR[4U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[28U];
    volatile uint32_t   IABR[4U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[60U];
    volatile uint8_t    IP[240U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_TypeDef;


typedef volatile struct
{
    volatile uint32_t   ISER[4U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[28U];
    volatile uint32_t   ICER[4U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[28U];
    volatile uint32_t   ISPR[4U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[28U];
    volatile uint32_t   ICPR[4U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[28U];
    volatile uint32_t   IABR[4U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[60U];
    volatile uint32_t   IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t  		ISER0;
        NVIC0_TypeDef           ISER0_Bit;
    };
    union
    {
        volatile uint32_t  		ISER1;
        NVIC1_TypeDef           ISER1_Bit;
    };
    union
    {
        volatile uint32_t  		ISER2;
        NVIC2_TypeDef           ISER2_Bit;
    };
    union
    {
        volatile uint32_t  		ISER3;
        NVIC3_TypeDef           ISER3_Bit;
    };

    uint32_t                    reserved[28U];

    union
    {
        volatile uint32_t  		ICER0;
        NVIC0_TypeDef           ICER0_Bit;
    };
    union
    {
        volatile uint32_t  		ICER1;
        NVIC1_TypeDef           ICER1_Bit;
    };
    union
    {
        volatile uint32_t  		ICER2;
        NVIC2_TypeDef           ICER2_Bit;
    };
    union
    {
        volatile uint32_t  		ICER3;
        NVIC3_TypeDef           ICER3_Bit;
    };

    uint32_t  				    reserved1[28U];

    union
    {
        volatile uint32_t  		ISPR0;
        NVIC0_TypeDef           ISPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR1;
        NVIC1_TypeDef           ISPR1_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR2;
        NVIC2_TypeDef           ISPR2_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR3;
        NVIC3_TypeDef           ISPR3_Bit;
    };

    uint32_t  				reserved2[28U];

    union
    {
        volatile uint32_t  		ICPR0;
        NVIC0_TypeDef           ICPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR1;
        NVIC1_TypeDef           ICPR1_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR2;
        NVIC2_TypeDef           ICPR2_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR3;
        NVIC3_TypeDef           ICPR3_Bit;
    };

    uint32_t  				reserved3[28U];

    union
    {
        volatile uint32_t  		IABR0;
        NVIC0_TypeDef           IABR0_Bit;
    };
    union
    {
        volatile uint32_t  		IABR1;
        NVIC1_TypeDef           IABR1_Bit;
    };
    union
    {
        volatile uint32_t  		IABR2;
        NVIC2_TypeDef           IABR2_Bit;
    };
    union
    {
        volatile uint32_t  		IABR3;
        NVIC3_TypeDef           IABR3_Bit;
    };

    uint32_t  				reserved4[60U];

    union
    {
        volatile uint8_t  		IPR0b[4];
        IPRb_TypeDef  		    IPR0b_Bit[4];
        volatile uint32_t  		IPR0w;
        IPRw_TypeDef  		    IPR0w_Bit;
        volatile uint32_t 		IPR0;
        IPR0_TypeDef            IPR0_Bit;
    };
    union
    {
        volatile uint8_t  		IPR1b[4];
        IPRb_TypeDef  		    IPR1b_Bit[4];
        volatile uint32_t  		IPR1w;
        IPRw_TypeDef  		    IPR1w_Bit;
        volatile uint32_t 		IPR1;
        IPR1_TypeDef            IPR1_Bit;
    };
    union
    {
        volatile uint8_t  		IPR2b[4];
        IPRb_TypeDef  		    IPR2b_Bit[4];
        volatile uint32_t  		IPR2w;
        IPRw_TypeDef  		    IPR2w_Bit;
        volatile uint32_t 		IPR2;
        IPR2_TypeDef            IPR2_Bit;
    };
    union
    {
        volatile uint8_t  		IPR3b[4];
        IPRb_TypeDef  		    IPR3b_Bit[4];
        volatile uint32_t  		IPR3w;
        IPRw_TypeDef  		    IPR3w_Bit;
        volatile uint32_t 		IPR3;
        IPR3_TypeDef            IPR3_Bit;
    };
    union
    {
        volatile uint8_t  		IPR4b[4];
        IPRb_TypeDef  		    IPR4b_Bit[4];
        volatile uint32_t  		IPR4w;
        IPRw_TypeDef  		    IPR4w_Bit;
        volatile uint32_t 		IPR4;
        IPR4_TypeDef            IPR4_Bit;
    };
    union
    {
        volatile uint8_t  		IPR5b[4];
        IPRb_TypeDef  		    IPR5b_Bit[4];
        volatile uint32_t  		IPR5w;
        IPRw_TypeDef  		    IPR5w_Bit;
        volatile uint32_t 		IPR5;
        IPR5_TypeDef            IPR5_Bit;
    };
    union
    {
        volatile uint8_t  		IPR6b[4];
        IPRb_TypeDef  		    IPR6b_Bit[4];
        volatile uint32_t  		IPR6w;
        IPRw_TypeDef  		    IPR6w_Bit;
        volatile uint32_t 		IPR6;
        IPR6_TypeDef            IPR6_Bit;
    };
    union
    {
        volatile uint8_t  		IPR7b[4];
        IPRb_TypeDef  		    IPR7b_Bit[4];
        volatile uint32_t  		IPR7w;
        IPRw_TypeDef  		    IPR7w_Bit;
        volatile uint32_t 		IPR7;
        IPR7_TypeDef            IPR7_Bit;
    };
    union
    {
        volatile uint8_t  		IPR8b[4];
        IPRb_TypeDef  		    IPR8b_Bit[4];
        volatile uint32_t  		IPR8w;
        IPRw_TypeDef  		    IPR8w_Bit;
        volatile uint32_t 		IPR8;
        IPR8_TypeDef            IPR8_Bit;
    };
    union
    {
        volatile uint8_t  		IPR9b[4];
        IPRb_TypeDef  		    IPR9b_Bit[4];
        volatile uint32_t  		IPR9w;
        IPRw_TypeDef  		    IPR9w_Bit;
        volatile uint32_t 		IPR9;
        IPR9_TypeDef            IPR9_Bit;
    };
    union
    {
        volatile uint8_t  		IPR10b[4];
        IPRb_TypeDef  		    IPR10b_Bit[4];
        volatile uint32_t  		IPR10w;
        IPRw_TypeDef  		    IPR10w_Bit;
        volatile uint32_t 		IPR10;
        IPR10_TypeDef           IPR10_Bit;
    };
    union
    {
        volatile uint8_t  		IPR11b[4];
        IPRb_TypeDef  		    IPR11b_Bit[4];
        volatile uint32_t  		IPR11w;
        IPRw_TypeDef  		    IPR11w_Bit;
        volatile uint32_t 		IPR11;
        IPR11_TypeDef           IPR11_Bit;
    };
    union
    {
        volatile uint8_t  		IPR12b[4];
        IPRb_TypeDef  		    IPR12b_Bit[4];
        volatile uint32_t  		IPR12w;
        IPRw_TypeDef  		    IPR12w_Bit;
        volatile uint32_t 		IPR12;
        IPR12_TypeDef           IPR12_Bit;
    };
    union
    {
        volatile uint8_t  		IPR13b[4];
        IPRb_TypeDef  		    IPR13b_Bit[4];
        volatile uint32_t  		IPR13w;
        IPRw_TypeDef  		    IPR13w_Bit;
        volatile uint32_t 		IPR13;
        IPR13_TypeDef           IPR13_Bit;
    };
    union
    {
        volatile uint8_t  		IPR14b[4];
        IPRb_TypeDef  		    IPR14b_Bit[4];
        volatile uint32_t  		IPR14w;
        IPRw_TypeDef  		    IPR14w_Bit;
        volatile uint32_t 		IPR14;
        IPR14_TypeDef           IPR14_Bit;
    };
    union
    {
        volatile uint8_t  		IPR15b[4];
        IPRb_TypeDef  		    IPR15b_Bit[4];
        volatile uint32_t  		IPR15w;
        IPRw_TypeDef  		    IPR15w_Bit;
        volatile uint32_t 		IPR15;
        IPR15_TypeDef           IPR15_Bit;
    };
    union
    {
        volatile uint8_t  		IPR16b[4];
        IPRb_TypeDef  		    IPR16b_Bit[4];
        volatile uint32_t  		IPR16w;
        IPRw_TypeDef  		    IPR16w_Bit;
        volatile uint32_t 		IPR16;
        IPR16_TypeDef           IPR16_Bit;
    };
    union
    {
        volatile uint8_t  		IPR17b[4];
        IPRb_TypeDef  		    IPR17b_Bit[4];
        volatile uint32_t  		IPR17w;
        IPRw_TypeDef  		    IPR17w_Bit;
        volatile uint32_t 		IPR17;
        IPR17_TypeDef           IPR17_Bit;
    };
    union
    {
        volatile uint8_t  		IPR18b[4];
        IPRb_TypeDef  		    IPR18b_Bit[4];
        volatile uint32_t  		IPR18w;
        IPRw_TypeDef  		    IPR18w_Bit;
        volatile uint32_t 		IPR18;
        IPR18_TypeDef           IPR18_Bit;
    };
    union
    {
        volatile uint8_t  		IPR19b[4];
        IPRb_TypeDef  		    IPR19b_Bit[4];
        volatile uint32_t  		IPR19w;
        IPRw_TypeDef  		    IPR19w_Bit;
        volatile uint32_t 		IPR19;
        IPR19_TypeDef           IPR19_Bit;
    };
    union
    {
        volatile uint8_t  		IPR20b[4];
        IPRb_TypeDef  		    IPR20b_Bit[4];
        volatile uint32_t  		IPR20w;
        IPRw_TypeDef  		    IPR20w_Bit;
        volatile uint32_t 		IPR20;
        IPR20_TypeDef           IPR20_Bit;
    };
    union
    {
        volatile uint8_t  		IPR21b[4];
        IPRb_TypeDef  		    IPR21b_Bit[4];
        volatile uint32_t  		IPR21w;
        IPRw_TypeDef  		    IPR21w_Bit;
        volatile uint32_t 		IPR21;
        IPR21_TypeDef           IPR21_Bit;
    };
    union
    {
        volatile uint8_t  		IPR22b[4];
        IPRb_TypeDef  		    IPR22b_Bit[4];
        volatile uint32_t  		IPR22w;
        IPRw_TypeDef  		    IPR22w_Bit;
        volatile uint32_t 		IPR22;
        IPR22_TypeDef           IPR22_Bit;
    };

    union
    {
        volatile uint8_t  		IPR23b[4];
        IPRb_TypeDef  		    IPR23b_Bit[4];
        volatile uint32_t  		IPR23w;
        IPRw_TypeDef  		    IPR23w_Bit;
        volatile uint32_t 		IPR23;
        IPR23_TypeDef           IPR23_Bit;
    };

    union
    {
        volatile uint8_t  		IPR24b[4];
        IPRb_TypeDef  		    IPR24b_Bit[4];
        volatile uint32_t  		IPR24w;
        IPRw_TypeDef  		    IPR24w_Bit;
        volatile uint32_t 		IPR24;
        IPR24_TypeDef           IPR24_Bit;
    };

    union
    {
        volatile uint8_t        IPR25b[4];
        IPRb_TypeDef            IPR25b_Bit[4];
        volatile uint32_t       IPR25w;
        IPRw_TypeDef            IPR25w_Bit;
        volatile uint32_t       IPR25;
        IPR25_TypeDef           IPR25_Bit;
    };

    union
    {
        volatile uint8_t        IPR26b[4];
        IPRb_TypeDef            IPR26b_Bit[4];
        volatile uint32_t       IPR26w;
        IPRw_TypeDef            IPR26w_Bit;
        volatile uint32_t       IPR26;
        IPR26_TypeDef           IPR26_Bit;
    };

    union
    {
        volatile uint8_t        IPR27b[4];
        IPRb_TypeDef            IPR27b_Bit[4];
        volatile uint32_t       IPR27w;
        IPRw_TypeDef            IPR27w_Bit;
        volatile uint32_t       IPR27;
        IPR27_TypeDef           IPR27_Bit;
    };

    union
    {
        volatile uint8_t        IPR28b[4];
        IPRb_TypeDef            IPR28b_Bit[4];
        volatile uint32_t       IPR28w;
        IPRw_TypeDef            IPR28w_Bit;
        volatile uint32_t       IPR28;
        IPR28_TypeDef           IPR28_Bit;
    };

    uint32_t  				reserved5[665U];

    union
    {
        volatile uint32_t  		STIR;
        STIR_TypeDef        STIR_Bit;
    };

}NVIC_TypeDef;

#define NVIC                ((NVIC_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICw               ((NVICw_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICb               ((NVICb_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */


#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304)
#define NVIC_ISER2_OFFSET       ((uint32_t)0x0108)
#define NVIC_ICER2_OFFSET       ((uint32_t)0x0188)
#define NVIC_ISPR2_OFFSET       ((uint32_t)0x0208)
#define NVIC_ICPR2_OFFSET       ((uint32_t)0x0288)
#define NVIC_IABR2_OFFSET       ((uint32_t)0x0308)
#define NVIC_ISER3_OFFSET       ((uint32_t)0x010C)
#define NVIC_ICER3_OFFSET       ((uint32_t)0x018C)
#define NVIC_ISPR3_OFFSET       ((uint32_t)0x020C)
#define NVIC_ICPR3_OFFSET       ((uint32_t)0x028C)
#define NVIC_IABR3_OFFSET       ((uint32_t)0x030C)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040C)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041C)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042C)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043C)
#define NVIC_IPR16_OFFSET       ((uint32_t)0x0440)
#define NVIC_IPR17_OFFSET       ((uint32_t)0x0444)
#define NVIC_IPR18_OFFSET       ((uint32_t)0x0448)
#define NVIC_IPR19_OFFSET       ((uint32_t)0x044C)
#define NVIC_IPR20_OFFSET       ((uint32_t)0x0450)
#define NVIC_IPR21_OFFSET       ((uint32_t)0x0454)
#define NVIC_IPR22_OFFSET       ((uint32_t)0x0458)
#define NVIC_IPR23_OFFSET       ((uint32_t)0x045C)
#define NVIC_IPR24_OFFSET       ((uint32_t)0x0460)
#define NVIC_IPR25_OFFSET       ((uint32_t)0x0464)
#define NVIC_IPR26_OFFSET       ((uint32_t)0x0468)
#define NVIC_IPR27_OFFSET       ((uint32_t)0x046C)
#define NVIC_IPR28_OFFSET       ((uint32_t)0x0470)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISER0_OFFSET)))
#define NVIC_ISER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER0_OFFSET)))


//--------
#define NVIC_ISER0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ISER0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001)

#define NVIC_ISER0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOA_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002)
#define NVIC_ISER0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ISER0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002)

#define NVIC_ISER0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004)
#define NVIC_ISER0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ISER0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004)

#define NVIC_ISER0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOC_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008)
#define NVIC_ISER0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ISER0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008)

#define NVIC_ISER0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOD_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010)
#define NVIC_ISER0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ISER0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010)

#define NVIC_ISER0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOE_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020)
#define NVIC_ISER0_R_NVIC_UART0_BIT     (5)
#define NVIC_ISER0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_UART0_EN      ((uint32_t)0x00000020)

#define NVIC_ISER0_NVIC_UART0_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_UART0_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_UART0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040)
#define NVIC_ISER0_R_NVIC_UART1_BIT     (6)
#define NVIC_ISER0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_UART1_EN      ((uint32_t)0x00000040)

#define NVIC_ISER0_NVIC_UART1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_UART1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_UART1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080)
#define NVIC_ISER0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ISER0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080)

#define NVIC_ISER0_NVIC_SSI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_SSI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_SSI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100)
#define NVIC_ISER0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ISER0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100)

#define NVIC_ISER0_NVIC_I2C0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_I2C0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_I2C0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200)

#define NVIC_ISER0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400)

#define NVIC_ISER0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800)

#define NVIC_ISER0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000)

#define NVIC_ISER0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000)
#define NVIC_ISER0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ISER0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000)

#define NVIC_ISER0_NVIC_QEI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_QEI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_QEI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ISER0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000)

#define NVIC_ISER0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ISER0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ISER0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000)
#define NVIC_ISER0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ISER0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000)

#define NVIC_ISER0_NVIC_WDT01_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_WDT01_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_WDT01_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000)
#define NVIC_ISER0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ISER0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000)

#define NVIC_ISER0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000)
#define NVIC_ISER0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ISER0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000)

#define NVIC_ISER0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000)
#define NVIC_ISER0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ISER0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000)

#define NVIC_ISER0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000)
#define NVIC_ISER0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ISER0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000)

#define NVIC_ISER0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000)
#define NVIC_ISER0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ISER0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000)

#define NVIC_ISER0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000)
#define NVIC_ISER0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ISER0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000)

#define NVIC_ISER0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000)
#define NVIC_ISER0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ISER0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000)

#define NVIC_ISER0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000)
#define NVIC_ISER0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ISER0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000)

#define NVIC_ISER0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000)
#define NVIC_ISER0_R_NVIC_RES43_BIT     (27)
#define NVIC_ISER0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_RES43_EN      ((uint32_t)0x08000000)

#define NVIC_ISER0_NVIC_RES43_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_RES43_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_RES43_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000)
#define NVIC_ISER0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ISER0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000)

#define NVIC_ISER0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000)
#define NVIC_ISER0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ISER0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000)

#define NVIC_ISER0_NVIC_FLASH_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_FLASH_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_FLASH_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000)
#define NVIC_ISER0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ISER0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000)

#define NVIC_ISER0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_GPIOF_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000)
#define NVIC_ISER0_R_NVIC_RES47_BIT     (31)
#define NVIC_ISER0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_RES47_EN      ((uint32_t)0x80000000)

#define NVIC_ISER0_NVIC_RES47_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_RES47_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_RES47_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICER0_OFFSET)))
#define NVIC_ICER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER0_OFFSET)))


//--------
#define NVIC_ICER0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ICER0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001)

#define NVIC_ICER0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOA_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002)
#define NVIC_ICER0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ICER0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002)

#define NVIC_ICER0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004)
#define NVIC_ICER0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ICER0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004)

#define NVIC_ICER0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOC_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008)
#define NVIC_ICER0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ICER0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008)

#define NVIC_ICER0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOD_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010)
#define NVIC_ICER0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ICER0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010)

#define NVIC_ICER0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOE_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020)
#define NVIC_ICER0_R_NVIC_UART0_BIT     (5)
#define NVIC_ICER0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_UART0_EN      ((uint32_t)0x00000020)

#define NVIC_ICER0_NVIC_UART0_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_UART0_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_UART0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040)
#define NVIC_ICER0_R_NVIC_UART1_BIT     (6)
#define NVIC_ICER0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_UART1_EN      ((uint32_t)0x00000040)

#define NVIC_ICER0_NVIC_UART1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_UART1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_UART1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080)
#define NVIC_ICER0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ICER0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080)

#define NVIC_ICER0_NVIC_SSI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_SSI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_SSI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100)
#define NVIC_ICER0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ICER0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100)

#define NVIC_ICER0_NVIC_I2C0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_I2C0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_I2C0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200)

#define NVIC_ICER0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400)

#define NVIC_ICER0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800)

#define NVIC_ICER0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000)

#define NVIC_ICER0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000)
#define NVIC_ICER0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ICER0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000)

#define NVIC_ICER0_NVIC_QEI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_QEI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_QEI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ICER0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000)

#define NVIC_ICER0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ICER0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ICER0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000)
#define NVIC_ICER0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ICER0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000)

#define NVIC_ICER0_NVIC_WDT01_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_WDT01_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_WDT01_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000)
#define NVIC_ICER0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ICER0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000)

#define NVIC_ICER0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000)
#define NVIC_ICER0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ICER0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000)

#define NVIC_ICER0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000)
#define NVIC_ICER0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ICER0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000)

#define NVIC_ICER0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000)
#define NVIC_ICER0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ICER0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000)

#define NVIC_ICER0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000)
#define NVIC_ICER0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ICER0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000)

#define NVIC_ICER0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000)
#define NVIC_ICER0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ICER0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000)

#define NVIC_ICER0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000)
#define NVIC_ICER0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ICER0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000)

#define NVIC_ICER0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000)
#define NVIC_ICER0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ICER0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000)

#define NVIC_ICER0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000)
#define NVIC_ICER0_R_NVIC_RES43_BIT     (27)
#define NVIC_ICER0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_RES43_EN      ((uint32_t)0x08000000)

#define NVIC_ICER0_NVIC_RES43_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_RES43_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_RES43_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000)
#define NVIC_ICER0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ICER0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000)

#define NVIC_ICER0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000)
#define NVIC_ICER0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ICER0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000)

#define NVIC_ICER0_NVIC_FLASH_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_FLASH_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_FLASH_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000)
#define NVIC_ICER0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ICER0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000)

#define NVIC_ICER0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_GPIOF_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000)
#define NVIC_ICER0_R_NVIC_RES47_BIT     (31)
#define NVIC_ICER0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_RES47_EN      ((uint32_t)0x80000000)

#define NVIC_ICER0_NVIC_RES47_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_RES47_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_RES47_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISPR0_OFFSET)))
#define NVIC_ISPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR0_OFFSET)))


//--------
#define NVIC_ISPR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ISPR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001)

#define NVIC_ISPR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002)
#define NVIC_ISPR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ISPR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002)

#define NVIC_ISPR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004)
#define NVIC_ISPR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ISPR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004)

#define NVIC_ISPR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008)
#define NVIC_ISPR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ISPR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008)

#define NVIC_ISPR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010)
#define NVIC_ISPR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ISPR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010)

#define NVIC_ISPR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020)
#define NVIC_ISPR0_R_NVIC_UART0_BIT     (5)
#define NVIC_ISPR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020)

#define NVIC_ISPR0_NVIC_UART0_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_UART0_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_UART0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040)
#define NVIC_ISPR0_R_NVIC_UART1_BIT     (6)
#define NVIC_ISPR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040)

#define NVIC_ISPR0_NVIC_UART1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_UART1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_UART1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080)
#define NVIC_ISPR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ISPR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080)

#define NVIC_ISPR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_SSI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100)
#define NVIC_ISPR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ISPR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100)

#define NVIC_ISPR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_I2C0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200)

#define NVIC_ISPR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400)

#define NVIC_ISPR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800)

#define NVIC_ISPR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000)

#define NVIC_ISPR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000)
#define NVIC_ISPR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ISPR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000)

#define NVIC_ISPR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_QEI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ISPR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000)

#define NVIC_ISPR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ISPR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ISPR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000)
#define NVIC_ISPR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ISPR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000)

#define NVIC_ISPR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_WDT01_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000)
#define NVIC_ISPR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ISPR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000)

#define NVIC_ISPR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000)
#define NVIC_ISPR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ISPR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000)

#define NVIC_ISPR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000)
#define NVIC_ISPR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ISPR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000)

#define NVIC_ISPR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000)
#define NVIC_ISPR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ISPR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000)

#define NVIC_ISPR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000)
#define NVIC_ISPR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ISPR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000)

#define NVIC_ISPR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000)
#define NVIC_ISPR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ISPR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000)

#define NVIC_ISPR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000)
#define NVIC_ISPR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ISPR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000)

#define NVIC_ISPR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000)
#define NVIC_ISPR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ISPR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000)

#define NVIC_ISPR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000)
#define NVIC_ISPR0_R_NVIC_RES43_BIT     (27)
#define NVIC_ISPR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000)

#define NVIC_ISPR0_NVIC_RES43_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_RES43_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_RES43_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000)
#define NVIC_ISPR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ISPR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000)

#define NVIC_ISPR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000)
#define NVIC_ISPR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ISPR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000)

#define NVIC_ISPR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_FLASH_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000)
#define NVIC_ISPR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ISPR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000)

#define NVIC_ISPR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000)
#define NVIC_ISPR0_R_NVIC_RES47_BIT     (31)
#define NVIC_ISPR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000)

#define NVIC_ISPR0_NVIC_RES47_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_RES47_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_RES47_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICPR0_OFFSET)))
#define NVIC_ICPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR0_OFFSET)))



//--------
#define NVIC_ICPR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ICPR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001)

#define NVIC_ICPR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002)
#define NVIC_ICPR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ICPR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002)

#define NVIC_ICPR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004)
#define NVIC_ICPR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ICPR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004)

#define NVIC_ICPR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008)
#define NVIC_ICPR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ICPR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008)

#define NVIC_ICPR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010)
#define NVIC_ICPR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ICPR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010)

#define NVIC_ICPR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020)
#define NVIC_ICPR0_R_NVIC_UART0_BIT     (5)
#define NVIC_ICPR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020)

#define NVIC_ICPR0_NVIC_UART0_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_UART0_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_UART0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040)
#define NVIC_ICPR0_R_NVIC_UART1_BIT     (6)
#define NVIC_ICPR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040)

#define NVIC_ICPR0_NVIC_UART1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_UART1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_UART1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080)
#define NVIC_ICPR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ICPR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080)

#define NVIC_ICPR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_SSI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100)
#define NVIC_ICPR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ICPR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100)

#define NVIC_ICPR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_I2C0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200)

#define NVIC_ICPR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400)

#define NVIC_ICPR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800)

#define NVIC_ICPR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000)

#define NVIC_ICPR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000)
#define NVIC_ICPR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ICPR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000)

#define NVIC_ICPR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_QEI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ICPR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000)

#define NVIC_ICPR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ICPR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ICPR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000)
#define NVIC_ICPR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ICPR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000)

#define NVIC_ICPR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_WDT01_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000)
#define NVIC_ICPR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ICPR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000)

#define NVIC_ICPR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000)
#define NVIC_ICPR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ICPR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000)

#define NVIC_ICPR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000)
#define NVIC_ICPR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ICPR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000)

#define NVIC_ICPR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000)
#define NVIC_ICPR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ICPR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000)

#define NVIC_ICPR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000)
#define NVIC_ICPR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ICPR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000)

#define NVIC_ICPR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000)
#define NVIC_ICPR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ICPR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000)

#define NVIC_ICPR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000)
#define NVIC_ICPR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ICPR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000)

#define NVIC_ICPR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000)
#define NVIC_ICPR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ICPR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000)

#define NVIC_ICPR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000)
#define NVIC_ICPR0_R_NVIC_RES43_BIT     (27)
#define NVIC_ICPR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000)

#define NVIC_ICPR0_NVIC_RES43_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_RES43_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_RES43_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000)
#define NVIC_ICPR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ICPR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000)

#define NVIC_ICPR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000)
#define NVIC_ICPR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ICPR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000)

#define NVIC_ICPR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_FLASH_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000)
#define NVIC_ICPR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ICPR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000)

#define NVIC_ICPR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000)
#define NVIC_ICPR0_R_NVIC_RES47_BIT     (31)
#define NVIC_ICPR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000)

#define NVIC_ICPR0_NVIC_RES47_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_RES47_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_RES47_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_IABR0_OFFSET)))
#define NVIC_IABR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR0_OFFSET)))


//--------
#define NVIC_IABR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_IABR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001)

#define NVIC_IABR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002)
#define NVIC_IABR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_IABR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002)

#define NVIC_IABR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004)
#define NVIC_IABR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_IABR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004)

#define NVIC_IABR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008)
#define NVIC_IABR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_IABR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008)

#define NVIC_IABR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010)
#define NVIC_IABR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_IABR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010)

#define NVIC_IABR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020)
#define NVIC_IABR0_R_NVIC_UART0_BIT     (5)
#define NVIC_IABR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020)

#define NVIC_IABR0_NVIC_UART0_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_UART0_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_UART0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040)
#define NVIC_IABR0_R_NVIC_UART1_BIT     (6)
#define NVIC_IABR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040)

#define NVIC_IABR0_NVIC_UART1_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_UART1_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_UART1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080)
#define NVIC_IABR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_IABR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080)

#define NVIC_IABR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_SSI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100)
#define NVIC_IABR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_IABR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100)

#define NVIC_IABR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_I2C0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200)

#define NVIC_IABR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400)

#define NVIC_IABR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800)

#define NVIC_IABR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000)

#define NVIC_IABR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000)
#define NVIC_IABR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_IABR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000)

#define NVIC_IABR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_QEI0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_IABR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000)

#define NVIC_IABR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_IABR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_IABR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000)
#define NVIC_IABR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_IABR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000)

#define NVIC_IABR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_WDT01_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000)
#define NVIC_IABR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_IABR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000)

#define NVIC_IABR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000)
#define NVIC_IABR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_IABR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000)

#define NVIC_IABR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000)
#define NVIC_IABR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_IABR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000)

#define NVIC_IABR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000)
#define NVIC_IABR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_IABR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000)

#define NVIC_IABR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000)
#define NVIC_IABR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_IABR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000)

#define NVIC_IABR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000)
#define NVIC_IABR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_IABR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000)

#define NVIC_IABR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000)
#define NVIC_IABR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_IABR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000)

#define NVIC_IABR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000)
#define NVIC_IABR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_IABR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000)

#define NVIC_IABR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000)
#define NVIC_IABR0_R_NVIC_RES43_BIT     (27)
#define NVIC_IABR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000)

#define NVIC_IABR0_NVIC_RES43_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_RES43_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_RES43_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000)
#define NVIC_IABR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_IABR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000)

#define NVIC_IABR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000)
#define NVIC_IABR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_IABR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000)

#define NVIC_IABR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_FLASH_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000)
#define NVIC_IABR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_IABR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000)

#define NVIC_IABR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000)
#define NVIC_IABR0_R_NVIC_RES47_BIT     (31)
#define NVIC_IABR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000)

#define NVIC_IABR0_NVIC_RES47_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_RES47_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_RES47_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISER1_OFFSET)))
#define NVIC_ISER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER1_OFFSET)))


//--------
#define NVIC_ISER1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_R_NVIC_RES48_BIT     (0)
#define NVIC_ISER1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES48_EN      ((uint32_t)0x00000001)

#define NVIC_ISER1_NVIC_RES48_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES48_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES48_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002)
#define NVIC_ISER1_R_NVIC_UART2_BIT     (1)
#define NVIC_ISER1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART2_EN      ((uint32_t)0x00000002)

#define NVIC_ISER1_NVIC_UART2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004)
#define NVIC_ISER1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ISER1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004)

#define NVIC_ISER1_NVIC_SSI1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SSI1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SSI1_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008)
#define NVIC_ISER1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ISER1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008)

#define NVIC_ISER1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010)
#define NVIC_ISER1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ISER1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010)

#define NVIC_ISER1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020)
#define NVIC_ISER1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ISER1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020)

#define NVIC_ISER1_NVIC_I2C1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000040)
#define NVIC_ISER1_R_NVIC_CAN0_BIT      (6)
#define NVIC_ISER1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_CAN0_EN       ((uint32_t)0x00000040)

#define NVIC_ISER1_NVIC_CAN0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_CAN0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_CAN0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000080)
#define NVIC_ISER1_R_NVIC_CAN1_BIT      (7)
#define NVIC_ISER1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_CAN1_EN       ((uint32_t)0x00000080)

#define NVIC_ISER1_NVIC_CAN1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_CAN1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_CAN1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ETH_MASK     ((uint32_t)0x00000100)
#define NVIC_ISER1_R_NVIC_ETH_BIT      (8)
#define NVIC_ISER1_R_NVIC_ETH_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ETH_EN       ((uint32_t)0x00000100)

#define NVIC_ISER1_NVIC_ETH_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ETH_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ETH_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_HIB_MASK    ((uint32_t)0x00000200)
#define NVIC_ISER1_R_NVIC_HIB_BIT     (9)
#define NVIC_ISER1_R_NVIC_HIB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_HIB_EN      ((uint32_t)0x00000200)

#define NVIC_ISER1_NVIC_HIB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_HIB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_HIB_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_USB_MASK    ((uint32_t)0x00000400)
#define NVIC_ISER1_R_NVIC_USB_BIT     (10)
#define NVIC_ISER1_R_NVIC_USB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_USB_EN      ((uint32_t)0x00000400)

#define NVIC_ISER1_NVIC_USB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_USB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_USB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PWM0GEN3_MASK      ((uint32_t)0x00000800)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_BIT       (11)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_EN        ((uint32_t)0x00000800)

#define NVIC_ISER1_NVIC_PWM0GEN3_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PWM0GEN3_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PWM0GEN3_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x00001000)
#define NVIC_ISER1_R_NVIC_UDMASOFT_BIT       (12)
#define NVIC_ISER1_R_NVIC_UDMASOFT_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UDMASOFT_EN        ((uint32_t)0x00001000)

#define NVIC_ISER1_NVIC_UDMASOFT_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UDMASOFT_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UDMASOFT_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00002000)
#define NVIC_ISER1_R_NVIC_UDMAERROR_BIT  (13)
#define NVIC_ISER1_R_NVIC_UDMAERROR_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UDMAERROR_EN   ((uint32_t)0x00002000)

#define NVIC_ISER1_NVIC_UDMAERROR_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UDMAERROR_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UDMAERROR_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_BIT  (14)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ISER1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_BIT (15)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_DIS ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_EN  ((uint32_t)0x00008000)

#define NVIC_ISER1_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ADC1SEQ1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ADC1SEQ1_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_BIT  (16)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ISER1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_BIT  (17)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ISER1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_EPI0_MASK ((uint32_t)0x00040000)
#define NVIC_ISER1_R_NVIC_EPI0_BIT  (18)
#define NVIC_ISER1_R_NVIC_EPI0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_EPI0_EN   ((uint32_t)0x00040000)

#define NVIC_ISER1_NVIC_EPI0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_EPI0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_EPI0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_GPIOJ_MASK ((uint32_t)0x00080000)
#define NVIC_ISER1_R_NVIC_GPIOJ_BIT  (19)
#define NVIC_ISER1_R_NVIC_GPIOJ_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_GPIOJ_EN   ((uint32_t)0x00080000)

#define NVIC_ISER1_NVIC_GPIOJ_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_GPIOJ_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_GPIOJ_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_GPIOK_MASK    ((uint32_t)0x00100000)
#define NVIC_ISER1_R_NVIC_GPIOK_BIT     (20)
#define NVIC_ISER1_R_NVIC_GPIOK_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_GPIOK_EN      ((uint32_t)0x00100000)

#define NVIC_ISER1_NVIC_GPIOK_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_GPIOK_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_GPIOK_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_GPIOL_MASK    ((uint32_t)0x00200000)
#define NVIC_ISER1_R_NVIC_GPIOL_BIT     (21)
#define NVIC_ISER1_R_NVIC_GPIOL_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_GPIOL_EN      ((uint32_t)0x00200000)

#define NVIC_ISER1_NVIC_GPIOL_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_GPIOL_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_GPIOL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_SSI2_MASK    ((uint32_t)0x00400000)
#define NVIC_ISER1_R_NVIC_SSI2_BIT     (22)
#define NVIC_ISER1_R_NVIC_SSI2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SSI2_EN      ((uint32_t)0x00400000)

#define NVIC_ISER1_NVIC_SSI2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SSI2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SSI2_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_SSI3_MASK    ((uint32_t)0x00800000)
#define NVIC_ISER1_R_NVIC_SSI3_BIT     (23)
#define NVIC_ISER1_R_NVIC_SSI3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SSI3_EN      ((uint32_t)0x00800000)

#define NVIC_ISER1_NVIC_SSI3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SSI3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SSI3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART3_MASK    ((uint32_t)0x01000000)
#define NVIC_ISER1_R_NVIC_UART3_BIT     (24)
#define NVIC_ISER1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART3_EN      ((uint32_t)0x01000000)

#define NVIC_ISER1_NVIC_UART3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART4_MASK     ((uint32_t)0x02000000)
#define NVIC_ISER1_R_NVIC_UART4_BIT      (25)
#define NVIC_ISER1_R_NVIC_UART4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART4_EN       ((uint32_t)0x02000000)

#define NVIC_ISER1_NVIC_UART4_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART4_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART5_MASK     ((uint32_t)0x04000000)
#define NVIC_ISER1_R_NVIC_UART5_BIT      (26)
#define NVIC_ISER1_R_NVIC_UART5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART5_EN       ((uint32_t)0x04000000)

#define NVIC_ISER1_NVIC_UART5_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART5_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART6_MASK    ((uint32_t)0x08000000)
#define NVIC_ISER1_R_NVIC_UART6_BIT     (27)
#define NVIC_ISER1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART6_EN      ((uint32_t)0x08000000)

#define NVIC_ISER1_NVIC_UART6_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART6_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART7_MASK    ((uint32_t)0x10000000)
#define NVIC_ISER1_R_NVIC_UART7_BIT     (28)
#define NVIC_ISER1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART7_EN      ((uint32_t)0x10000000)

#define NVIC_ISER1_NVIC_UART7_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART7_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_I2C2_MASK    ((uint32_t)0x20000000)
#define NVIC_ISER1_R_NVIC_I2C2_BIT     (29)
#define NVIC_ISER1_R_NVIC_I2C2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C2_EN      ((uint32_t)0x20000000)

#define NVIC_ISER1_NVIC_I2C2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_I2C3_MASK    ((uint32_t)0x40000000)
#define NVIC_ISER1_R_NVIC_I2C3_BIT     (30)
#define NVIC_ISER1_R_NVIC_I2C3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C3_EN      ((uint32_t)0x40000000)

#define NVIC_ISER1_NVIC_I2C3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIMER4A_MASK    ((uint32_t)0x80000000)
#define NVIC_ISER1_R_NVIC_TIMER4A_BIT     (31)
#define NVIC_ISER1_R_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIMER4A_EN      ((uint32_t)0x80000000)

#define NVIC_ISER1_NVIC_TIMER4A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIMER4A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIMER4A_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICER1_OFFSET)))
#define NVIC_ICER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER1_OFFSET)))

//--------
#define NVIC_ICER1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_R_NVIC_RES48_BIT     (0)
#define NVIC_ICER1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES48_EN      ((uint32_t)0x00000001)

#define NVIC_ICER1_NVIC_RES48_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES48_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES48_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002)
#define NVIC_ICER1_R_NVIC_UART2_BIT     (1)
#define NVIC_ICER1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART2_EN      ((uint32_t)0x00000002)

#define NVIC_ICER1_NVIC_UART2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004)
#define NVIC_ICER1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ICER1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004)

#define NVIC_ICER1_NVIC_SSI1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SSI1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SSI1_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008)
#define NVIC_ICER1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ICER1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008)

#define NVIC_ICER1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010)
#define NVIC_ICER1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ICER1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010)

#define NVIC_ICER1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020)
#define NVIC_ICER1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ICER1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020)

#define NVIC_ICER1_NVIC_I2C1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000040)
#define NVIC_ICER1_R_NVIC_CAN0_BIT      (6)
#define NVIC_ICER1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_CAN0_EN       ((uint32_t)0x00000040)

#define NVIC_ICER1_NVIC_CAN0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_CAN0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_CAN0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000080)
#define NVIC_ICER1_R_NVIC_CAN1_BIT      (7)
#define NVIC_ICER1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_CAN1_EN       ((uint32_t)0x00000080)

#define NVIC_ICER1_NVIC_CAN1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_CAN1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_CAN1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ETH_MASK     ((uint32_t)0x00000100)
#define NVIC_ICER1_R_NVIC_ETH_BIT      (8)
#define NVIC_ICER1_R_NVIC_ETH_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ETH_EN       ((uint32_t)0x00000100)

#define NVIC_ICER1_NVIC_ETH_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ETH_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ETH_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_HIB_MASK    ((uint32_t)0x00000200)
#define NVIC_ICER1_R_NVIC_HIB_BIT     (9)
#define NVIC_ICER1_R_NVIC_HIB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_HIB_EN      ((uint32_t)0x00000200)

#define NVIC_ICER1_NVIC_HIB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_HIB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_HIB_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_USB_MASK    ((uint32_t)0x00000400)
#define NVIC_ICER1_R_NVIC_USB_BIT     (10)
#define NVIC_ICER1_R_NVIC_USB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_USB_EN      ((uint32_t)0x00000400)

#define NVIC_ICER1_NVIC_USB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_USB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_USB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PWM0GEN3_MASK      ((uint32_t)0x00000800)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_BIT       (11)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_EN        ((uint32_t)0x00000800)

#define NVIC_ICER1_NVIC_PWM0GEN3_MASK        ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PWM0GEN3_DIS         ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PWM0GEN3_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x00001000)
#define NVIC_ICER1_R_NVIC_UDMASOFT_BIT       (12)
#define NVIC_ICER1_R_NVIC_UDMASOFT_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UDMASOFT_EN        ((uint32_t)0x00001000)

#define NVIC_ICER1_NVIC_UDMASOFT_MASK        ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UDMASOFT_DIS         ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UDMASOFT_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00002000)
#define NVIC_ICER1_R_NVIC_UDMAERROR_BIT  (13)
#define NVIC_ICER1_R_NVIC_UDMAERROR_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UDMAERROR_EN   ((uint32_t)0x00002000)

#define NVIC_ICER1_NVIC_UDMAERROR_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UDMAERROR_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UDMAERROR_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_BIT  (14)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ICER1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_BIT (15)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_DIS ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_EN  ((uint32_t)0x00008000)

#define NVIC_ICER1_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ADC1SEQ1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ADC1SEQ1_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_BIT  (16)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ICER1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_BIT  (17)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ICER1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_EPI0_MASK ((uint32_t)0x00040000)
#define NVIC_ICER1_R_NVIC_EPI0_BIT  (18)
#define NVIC_ICER1_R_NVIC_EPI0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_EPI0_EN   ((uint32_t)0x00040000)

#define NVIC_ICER1_NVIC_EPI0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_EPI0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_EPI0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_GPIOJ_MASK ((uint32_t)0x00080000)
#define NVIC_ICER1_R_NVIC_GPIOJ_BIT  (19)
#define NVIC_ICER1_R_NVIC_GPIOJ_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_GPIOJ_EN   ((uint32_t)0x00080000)

#define NVIC_ICER1_NVIC_GPIOJ_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_GPIOJ_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_GPIOJ_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_GPIOK_MASK    ((uint32_t)0x00100000)
#define NVIC_ICER1_R_NVIC_GPIOK_BIT     (20)
#define NVIC_ICER1_R_NVIC_GPIOK_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_GPIOK_EN      ((uint32_t)0x00100000)

#define NVIC_ICER1_NVIC_GPIOK_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_GPIOK_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_GPIOK_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_GPIOL_MASK    ((uint32_t)0x00200000)
#define NVIC_ICER1_R_NVIC_GPIOL_BIT     (21)
#define NVIC_ICER1_R_NVIC_GPIOL_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_GPIOL_EN      ((uint32_t)0x00200000)

#define NVIC_ICER1_NVIC_GPIOL_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_GPIOL_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_GPIOL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_SSI2_MASK    ((uint32_t)0x00400000)
#define NVIC_ICER1_R_NVIC_SSI2_BIT     (22)
#define NVIC_ICER1_R_NVIC_SSI2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SSI2_EN      ((uint32_t)0x00400000)

#define NVIC_ICER1_NVIC_SSI2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SSI2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SSI2_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_SSI3_MASK    ((uint32_t)0x00800000)
#define NVIC_ICER1_R_NVIC_SSI3_BIT     (23)
#define NVIC_ICER1_R_NVIC_SSI3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SSI3_EN      ((uint32_t)0x00800000)

#define NVIC_ICER1_NVIC_SSI3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SSI3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SSI3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART3_MASK    ((uint32_t)0x01000000)
#define NVIC_ICER1_R_NVIC_UART3_BIT     (24)
#define NVIC_ICER1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART3_EN      ((uint32_t)0x01000000)

#define NVIC_ICER1_NVIC_UART3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART4_MASK     ((uint32_t)0x02000000)
#define NVIC_ICER1_R_NVIC_UART4_BIT      (25)
#define NVIC_ICER1_R_NVIC_UART4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART4_EN       ((uint32_t)0x02000000)

#define NVIC_ICER1_NVIC_UART4_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART4_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART5_MASK     ((uint32_t)0x04000000)
#define NVIC_ICER1_R_NVIC_UART5_BIT      (26)
#define NVIC_ICER1_R_NVIC_UART5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART5_EN       ((uint32_t)0x04000000)

#define NVIC_ICER1_NVIC_UART5_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART5_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART6_MASK    ((uint32_t)0x08000000)
#define NVIC_ICER1_R_NVIC_UART6_BIT     (27)
#define NVIC_ICER1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART6_EN      ((uint32_t)0x08000000)

#define NVIC_ICER1_NVIC_UART6_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART6_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART7_MASK    ((uint32_t)0x10000000)
#define NVIC_ICER1_R_NVIC_UART7_BIT     (28)
#define NVIC_ICER1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART7_EN      ((uint32_t)0x10000000)

#define NVIC_ICER1_NVIC_UART7_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART7_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_I2C2_MASK    ((uint32_t)0x20000000)
#define NVIC_ICER1_R_NVIC_I2C2_BIT     (29)
#define NVIC_ICER1_R_NVIC_I2C2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C2_EN      ((uint32_t)0x20000000)

#define NVIC_ICER1_NVIC_I2C2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_I2C3_MASK    ((uint32_t)0x40000000)
#define NVIC_ICER1_R_NVIC_I2C3_BIT     (30)
#define NVIC_ICER1_R_NVIC_I2C3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C3_EN      ((uint32_t)0x40000000)

#define NVIC_ICER1_NVIC_I2C3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIMER4A_MASK    ((uint32_t)0x80000000)
#define NVIC_ICER1_R_NVIC_TIMER4A_BIT     (31)
#define NVIC_ICER1_R_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIMER4A_EN      ((uint32_t)0x80000000)

#define NVIC_ICER1_NVIC_TIMER4A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIMER4A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIMER4A_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISPR1_OFFSET)))
#define NVIC_ISPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR1_OFFSET)))


//--------
#define NVIC_ISPR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_R_NVIC_RES48_BIT     (0)
#define NVIC_ISPR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001)

#define NVIC_ISPR1_NVIC_RES48_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES48_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES48_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002)
#define NVIC_ISPR1_R_NVIC_UART2_BIT     (1)
#define NVIC_ISPR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002)

#define NVIC_ISPR1_NVIC_UART2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004)
#define NVIC_ISPR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ISPR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004)

#define NVIC_ISPR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SSI1_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008)
#define NVIC_ISPR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ISPR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008)

#define NVIC_ISPR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010)
#define NVIC_ISPR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ISPR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010)

#define NVIC_ISPR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020)
#define NVIC_ISPR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ISPR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020)

#define NVIC_ISPR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000040)
#define NVIC_ISPR1_R_NVIC_CAN0_BIT      (6)
#define NVIC_ISPR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000040)

#define NVIC_ISPR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_CAN0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000080)
#define NVIC_ISPR1_R_NVIC_CAN1_BIT      (7)
#define NVIC_ISPR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000080)

#define NVIC_ISPR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_CAN1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ETH_MASK     ((uint32_t)0x00000100)
#define NVIC_ISPR1_R_NVIC_ETH_BIT      (8)
#define NVIC_ISPR1_R_NVIC_ETH_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ETH_EN       ((uint32_t)0x00000100)

#define NVIC_ISPR1_NVIC_ETH_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ETH_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ETH_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_HIB_MASK    ((uint32_t)0x00000200)
#define NVIC_ISPR1_R_NVIC_HIB_BIT     (9)
#define NVIC_ISPR1_R_NVIC_HIB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_HIB_EN      ((uint32_t)0x00000200)

#define NVIC_ISPR1_NVIC_HIB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_HIB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_HIB_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_USB_MASK    ((uint32_t)0x00000400)
#define NVIC_ISPR1_R_NVIC_USB_BIT     (10)
#define NVIC_ISPR1_R_NVIC_USB_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_USB_EN      ((uint32_t)0x00000400)

#define NVIC_ISPR1_NVIC_USB_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_USB_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_USB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_MASK      ((uint32_t)0x00000800)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_BIT       (11)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_EN        ((uint32_t)0x00000800)

#define NVIC_ISPR1_NVIC_PWM0GEN3_MASK        ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PWM0GEN3_DIS         ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PWM0GEN3_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x00001000)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_BIT       (12)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_EN        ((uint32_t)0x00001000)

#define NVIC_ISPR1_NVIC_UDMASOFT_MASK        ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UDMASOFT_DIS         ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UDMASOFT_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00002000)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_BIT  (13)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_EN   ((uint32_t)0x00002000)

#define NVIC_ISPR1_NVIC_UDMAERROR_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UDMAERROR_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UDMAERROR_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_BIT  (14)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ISPR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_BIT (15)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_DIS ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_EN  ((uint32_t)0x00008000)

#define NVIC_ISPR1_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_BIT  (16)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ISPR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_BIT  (17)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ISPR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_EPI0_MASK ((uint32_t)0x00040000)
#define NVIC_ISPR1_R_NVIC_EPI0_BIT  (18)
#define NVIC_ISPR1_R_NVIC_EPI0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_EPI0_EN   ((uint32_t)0x00040000)

#define NVIC_ISPR1_NVIC_EPI0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_EPI0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_EPI0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_GPIOJ_MASK ((uint32_t)0x00080000)
#define NVIC_ISPR1_R_NVIC_GPIOJ_BIT  (19)
#define NVIC_ISPR1_R_NVIC_GPIOJ_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_GPIOJ_EN   ((uint32_t)0x00080000)

#define NVIC_ISPR1_NVIC_GPIOJ_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_GPIOJ_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_GPIOJ_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_GPIOK_MASK    ((uint32_t)0x00100000)
#define NVIC_ISPR1_R_NVIC_GPIOK_BIT     (20)
#define NVIC_ISPR1_R_NVIC_GPIOK_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_GPIOK_EN      ((uint32_t)0x00100000)

#define NVIC_ISPR1_NVIC_GPIOK_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_GPIOK_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_GPIOK_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_GPIOL_MASK    ((uint32_t)0x00200000)
#define NVIC_ISPR1_R_NVIC_GPIOL_BIT     (21)
#define NVIC_ISPR1_R_NVIC_GPIOL_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_GPIOL_EN      ((uint32_t)0x00200000)

#define NVIC_ISPR1_NVIC_GPIOL_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_GPIOL_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_GPIOL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_SSI2_MASK    ((uint32_t)0x00400000)
#define NVIC_ISPR1_R_NVIC_SSI2_BIT     (22)
#define NVIC_ISPR1_R_NVIC_SSI2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SSI2_EN      ((uint32_t)0x00400000)

#define NVIC_ISPR1_NVIC_SSI2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SSI2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SSI2_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_SSI3_MASK    ((uint32_t)0x00800000)
#define NVIC_ISPR1_R_NVIC_SSI3_BIT     (23)
#define NVIC_ISPR1_R_NVIC_SSI3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SSI3_EN      ((uint32_t)0x00800000)

#define NVIC_ISPR1_NVIC_SSI3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SSI3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SSI3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART3_MASK    ((uint32_t)0x01000000)
#define NVIC_ISPR1_R_NVIC_UART3_BIT     (24)
#define NVIC_ISPR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART3_EN      ((uint32_t)0x01000000)

#define NVIC_ISPR1_NVIC_UART3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART4_MASK     ((uint32_t)0x02000000)
#define NVIC_ISPR1_R_NVIC_UART4_BIT      (25)
#define NVIC_ISPR1_R_NVIC_UART4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART4_EN       ((uint32_t)0x02000000)

#define NVIC_ISPR1_NVIC_UART4_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART4_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART5_MASK     ((uint32_t)0x04000000)
#define NVIC_ISPR1_R_NVIC_UART5_BIT      (26)
#define NVIC_ISPR1_R_NVIC_UART5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART5_EN       ((uint32_t)0x04000000)

#define NVIC_ISPR1_NVIC_UART5_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART5_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART6_MASK    ((uint32_t)0x08000000)
#define NVIC_ISPR1_R_NVIC_UART6_BIT     (27)
#define NVIC_ISPR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART6_EN      ((uint32_t)0x08000000)

#define NVIC_ISPR1_NVIC_UART6_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART6_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART7_MASK    ((uint32_t)0x10000000)
#define NVIC_ISPR1_R_NVIC_UART7_BIT     (28)
#define NVIC_ISPR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART7_EN      ((uint32_t)0x10000000)

#define NVIC_ISPR1_NVIC_UART7_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART7_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_I2C2_MASK    ((uint32_t)0x20000000)
#define NVIC_ISPR1_R_NVIC_I2C2_BIT     (29)
#define NVIC_ISPR1_R_NVIC_I2C2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C2_EN      ((uint32_t)0x20000000)

#define NVIC_ISPR1_NVIC_I2C2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_I2C3_MASK    ((uint32_t)0x40000000)
#define NVIC_ISPR1_R_NVIC_I2C3_BIT     (30)
#define NVIC_ISPR1_R_NVIC_I2C3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C3_EN      ((uint32_t)0x40000000)

#define NVIC_ISPR1_NVIC_I2C3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIMER4A_MASK    ((uint32_t)0x80000000)
#define NVIC_ISPR1_R_NVIC_TIMER4A_BIT     (31)
#define NVIC_ISPR1_R_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIMER4A_EN      ((uint32_t)0x80000000)

#define NVIC_ISPR1_NVIC_TIMER4A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIMER4A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIMER4A_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICPR1_OFFSET)))
#define NVIC_ICPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR1_OFFSET)))

//--------
#define NVIC_ICPR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_R_NVIC_RES48_BIT     (0)
#define NVIC_ICPR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001)

#define NVIC_ICPR1_NVIC_RES48_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES48_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES48_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002)
#define NVIC_ICPR1_R_NVIC_UART2_BIT     (1)
#define NVIC_ICPR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002)

#define NVIC_ICPR1_NVIC_UART2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004)
#define NVIC_ICPR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ICPR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004)

#define NVIC_ICPR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SSI1_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008)
#define NVIC_ICPR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ICPR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008)

#define NVIC_ICPR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010)
#define NVIC_ICPR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ICPR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010)

#define NVIC_ICPR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020)
#define NVIC_ICPR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ICPR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020)

#define NVIC_ICPR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000040)
#define NVIC_ICPR1_R_NVIC_CAN0_BIT      (6)
#define NVIC_ICPR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000040)

#define NVIC_ICPR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_CAN0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000080)
#define NVIC_ICPR1_R_NVIC_CAN1_BIT      (7)
#define NVIC_ICPR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000080)

#define NVIC_ICPR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_CAN1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ETH_MASK     ((uint32_t)0x00000100)
#define NVIC_ICPR1_R_NVIC_ETH_BIT      (8)
#define NVIC_ICPR1_R_NVIC_ETH_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ETH_EN       ((uint32_t)0x00000100)

#define NVIC_ICPR1_NVIC_ETH_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ETH_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ETH_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_HIB_MASK    ((uint32_t)0x00000200)
#define NVIC_ICPR1_R_NVIC_HIB_BIT     (9)
#define NVIC_ICPR1_R_NVIC_HIB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_HIB_EN      ((uint32_t)0x00000200)

#define NVIC_ICPR1_NVIC_HIB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_HIB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_HIB_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_USB_MASK    ((uint32_t)0x00000400)
#define NVIC_ICPR1_R_NVIC_USB_BIT     (10)
#define NVIC_ICPR1_R_NVIC_USB_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_USB_EN      ((uint32_t)0x00000400)

#define NVIC_ICPR1_NVIC_USB_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_USB_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_USB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_MASK      ((uint32_t)0x00000800)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_BIT       (11)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_EN        ((uint32_t)0x00000800)

#define NVIC_ICPR1_NVIC_PWM0GEN3_MASK        ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PWM0GEN3_DIS         ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PWM0GEN3_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x00001000)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_BIT       (12)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_EN        ((uint32_t)0x00001000)

#define NVIC_ICPR1_NVIC_UDMASOFT_MASK        ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UDMASOFT_DIS         ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UDMASOFT_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00002000)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_BIT  (13)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_EN   ((uint32_t)0x00002000)

#define NVIC_ICPR1_NVIC_UDMAERROR_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UDMAERROR_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UDMAERROR_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_BIT  (14)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_ICPR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_BIT (15)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_DIS ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_EN  ((uint32_t)0x00008000)

#define NVIC_ICPR1_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ADC1SEQ1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ADC1SEQ1_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_BIT  (16)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_ICPR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_BIT  (17)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_ICPR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_EPI0_MASK ((uint32_t)0x00040000)
#define NVIC_ICPR1_R_NVIC_EPI0_BIT  (18)
#define NVIC_ICPR1_R_NVIC_EPI0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_EPI0_EN   ((uint32_t)0x00040000)

#define NVIC_ICPR1_NVIC_EPI0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_EPI0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_EPI0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_GPIOJ_MASK ((uint32_t)0x00080000)
#define NVIC_ICPR1_R_NVIC_GPIOJ_BIT  (19)
#define NVIC_ICPR1_R_NVIC_GPIOJ_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_GPIOJ_EN   ((uint32_t)0x00080000)

#define NVIC_ICPR1_NVIC_GPIOJ_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_GPIOJ_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_GPIOJ_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_GPIOK_MASK    ((uint32_t)0x00100000)
#define NVIC_ICPR1_R_NVIC_GPIOK_BIT     (20)
#define NVIC_ICPR1_R_NVIC_GPIOK_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_GPIOK_EN      ((uint32_t)0x00100000)

#define NVIC_ICPR1_NVIC_GPIOK_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_GPIOK_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_GPIOK_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_GPIOL_MASK    ((uint32_t)0x00200000)
#define NVIC_ICPR1_R_NVIC_GPIOL_BIT     (21)
#define NVIC_ICPR1_R_NVIC_GPIOL_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_GPIOL_EN      ((uint32_t)0x00200000)

#define NVIC_ICPR1_NVIC_GPIOL_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_GPIOL_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_GPIOL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_SSI2_MASK    ((uint32_t)0x00400000)
#define NVIC_ICPR1_R_NVIC_SSI2_BIT     (22)
#define NVIC_ICPR1_R_NVIC_SSI2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SSI2_EN      ((uint32_t)0x00400000)

#define NVIC_ICPR1_NVIC_SSI2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SSI2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SSI2_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_SSI3_MASK    ((uint32_t)0x00800000)
#define NVIC_ICPR1_R_NVIC_SSI3_BIT     (23)
#define NVIC_ICPR1_R_NVIC_SSI3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SSI3_EN      ((uint32_t)0x00800000)

#define NVIC_ICPR1_NVIC_SSI3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SSI3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SSI3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART3_MASK    ((uint32_t)0x01000000)
#define NVIC_ICPR1_R_NVIC_UART3_BIT     (24)
#define NVIC_ICPR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART3_EN      ((uint32_t)0x01000000)

#define NVIC_ICPR1_NVIC_UART3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART4_MASK     ((uint32_t)0x02000000)
#define NVIC_ICPR1_R_NVIC_UART4_BIT      (25)
#define NVIC_ICPR1_R_NVIC_UART4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART4_EN       ((uint32_t)0x02000000)

#define NVIC_ICPR1_NVIC_UART4_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART4_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART5_MASK     ((uint32_t)0x04000000)
#define NVIC_ICPR1_R_NVIC_UART5_BIT      (26)
#define NVIC_ICPR1_R_NVIC_UART5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART5_EN       ((uint32_t)0x04000000)

#define NVIC_ICPR1_NVIC_UART5_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART5_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART6_MASK    ((uint32_t)0x08000000)
#define NVIC_ICPR1_R_NVIC_UART6_BIT     (27)
#define NVIC_ICPR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART6_EN      ((uint32_t)0x08000000)

#define NVIC_ICPR1_NVIC_UART6_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART6_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART7_MASK    ((uint32_t)0x10000000)
#define NVIC_ICPR1_R_NVIC_UART7_BIT     (28)
#define NVIC_ICPR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART7_EN      ((uint32_t)0x10000000)

#define NVIC_ICPR1_NVIC_UART7_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART7_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_I2C2_MASK    ((uint32_t)0x20000000)
#define NVIC_ICPR1_R_NVIC_I2C2_BIT     (29)
#define NVIC_ICPR1_R_NVIC_I2C2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C2_EN      ((uint32_t)0x20000000)

#define NVIC_ICPR1_NVIC_I2C2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_I2C3_MASK    ((uint32_t)0x40000000)
#define NVIC_ICPR1_R_NVIC_I2C3_BIT     (30)
#define NVIC_ICPR1_R_NVIC_I2C3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C3_EN      ((uint32_t)0x40000000)

#define NVIC_ICPR1_NVIC_I2C3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIMER4A_MASK    ((uint32_t)0x80000000)
#define NVIC_ICPR1_R_NVIC_TIMER4A_BIT     (31)
#define NVIC_ICPR1_R_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIMER4A_EN      ((uint32_t)0x80000000)

#define NVIC_ICPR1_NVIC_TIMER4A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIMER4A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIMER4A_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_IABR1_OFFSET)))
#define NVIC_IABR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR1_OFFSET)))


//--------
#define NVIC_IABR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_R_NVIC_RES48_BIT     (0)
#define NVIC_IABR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001)

#define NVIC_IABR1_NVIC_RES48_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES48_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES48_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002)
#define NVIC_IABR1_R_NVIC_UART2_BIT     (1)
#define NVIC_IABR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002)

#define NVIC_IABR1_NVIC_UART2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004)
#define NVIC_IABR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_IABR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004)

#define NVIC_IABR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SSI1_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008)
#define NVIC_IABR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_IABR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008)

#define NVIC_IABR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010)
#define NVIC_IABR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_IABR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010)

#define NVIC_IABR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020)
#define NVIC_IABR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_IABR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020)

#define NVIC_IABR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000040)
#define NVIC_IABR1_R_NVIC_CAN0_BIT      (6)
#define NVIC_IABR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000040)

#define NVIC_IABR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_CAN0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000080)
#define NVIC_IABR1_R_NVIC_CAN1_BIT      (7)
#define NVIC_IABR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000080)

#define NVIC_IABR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_CAN1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ETH_MASK     ((uint32_t)0x00000100)
#define NVIC_IABR1_R_NVIC_ETH_BIT      (8)
#define NVIC_IABR1_R_NVIC_ETH_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ETH_EN       ((uint32_t)0x00000100)

#define NVIC_IABR1_NVIC_ETH_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ETH_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ETH_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_HIB_MASK    ((uint32_t)0x00000200)
#define NVIC_IABR1_R_NVIC_HIB_BIT     (9)
#define NVIC_IABR1_R_NVIC_HIB_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_HIB_EN      ((uint32_t)0x00000200)

#define NVIC_IABR1_NVIC_HIB_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_HIB_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_HIB_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_USB_MASK    ((uint32_t)0x00000400)
#define NVIC_IABR1_R_NVIC_USB_BIT     (10)
#define NVIC_IABR1_R_NVIC_USB_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_USB_EN      ((uint32_t)0x00000400)

#define NVIC_IABR1_NVIC_USB_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_USB_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_USB_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PWM0GEN3_MASK      ((uint32_t)0x00000800)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_BIT       (11)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_EN        ((uint32_t)0x00000800)

#define NVIC_IABR1_NVIC_PWM0GEN3_MASK        ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PWM0GEN3_DIS         ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PWM0GEN3_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x00001000)
#define NVIC_IABR1_R_NVIC_UDMASOFT_BIT       (12)
#define NVIC_IABR1_R_NVIC_UDMASOFT_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UDMASOFT_EN        ((uint32_t)0x00001000)

#define NVIC_IABR1_NVIC_UDMASOFT_MASK        ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UDMASOFT_DIS         ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UDMASOFT_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00002000)
#define NVIC_IABR1_R_NVIC_UDMAERROR_BIT  (13)
#define NVIC_IABR1_R_NVIC_UDMAERROR_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UDMAERROR_EN   ((uint32_t)0x00002000)

#define NVIC_IABR1_NVIC_UDMAERROR_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UDMAERROR_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UDMAERROR_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00004000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_BIT  (14)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00004000)

#define NVIC_IABR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00008000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_BIT (15)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_DIS ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_EN  ((uint32_t)0x00008000)

#define NVIC_IABR1_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ADC1SEQ1_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ADC1SEQ1_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00010000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_BIT  (16)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00010000)

#define NVIC_IABR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00020000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_BIT  (17)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00020000)

#define NVIC_IABR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_EPI0_MASK ((uint32_t)0x00040000)
#define NVIC_IABR1_R_NVIC_EPI0_BIT  (18)
#define NVIC_IABR1_R_NVIC_EPI0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_EPI0_EN   ((uint32_t)0x00040000)

#define NVIC_IABR1_NVIC_EPI0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_EPI0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_EPI0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_GPIOJ_MASK ((uint32_t)0x00080000)
#define NVIC_IABR1_R_NVIC_GPIOJ_BIT  (19)
#define NVIC_IABR1_R_NVIC_GPIOJ_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_GPIOJ_EN   ((uint32_t)0x00080000)

#define NVIC_IABR1_NVIC_GPIOJ_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_GPIOJ_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_GPIOJ_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_GPIOK_MASK    ((uint32_t)0x00100000)
#define NVIC_IABR1_R_NVIC_GPIOK_BIT     (20)
#define NVIC_IABR1_R_NVIC_GPIOK_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_GPIOK_EN      ((uint32_t)0x00100000)

#define NVIC_IABR1_NVIC_GPIOK_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_GPIOK_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_GPIOK_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_GPIOL_MASK    ((uint32_t)0x00200000)
#define NVIC_IABR1_R_NVIC_GPIOL_BIT     (21)
#define NVIC_IABR1_R_NVIC_GPIOL_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_GPIOL_EN      ((uint32_t)0x00200000)

#define NVIC_IABR1_NVIC_GPIOL_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_GPIOL_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_GPIOL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_SSI2_MASK    ((uint32_t)0x00400000)
#define NVIC_IABR1_R_NVIC_SSI2_BIT     (22)
#define NVIC_IABR1_R_NVIC_SSI2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SSI2_EN      ((uint32_t)0x00400000)

#define NVIC_IABR1_NVIC_SSI2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SSI2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SSI2_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_SSI3_MASK    ((uint32_t)0x00800000)
#define NVIC_IABR1_R_NVIC_SSI3_BIT     (23)
#define NVIC_IABR1_R_NVIC_SSI3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SSI3_EN      ((uint32_t)0x00800000)

#define NVIC_IABR1_NVIC_SSI3_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SSI3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SSI3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART3_MASK    ((uint32_t)0x01000000)
#define NVIC_IABR1_R_NVIC_UART3_BIT     (24)
#define NVIC_IABR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART3_EN      ((uint32_t)0x01000000)

#define NVIC_IABR1_NVIC_UART3_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART4_MASK     ((uint32_t)0x02000000)
#define NVIC_IABR1_R_NVIC_UART4_BIT      (25)
#define NVIC_IABR1_R_NVIC_UART4_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART4_EN       ((uint32_t)0x02000000)

#define NVIC_IABR1_NVIC_UART4_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART4_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART5_MASK     ((uint32_t)0x04000000)
#define NVIC_IABR1_R_NVIC_UART5_BIT      (26)
#define NVIC_IABR1_R_NVIC_UART5_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART5_EN       ((uint32_t)0x04000000)

#define NVIC_IABR1_NVIC_UART5_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART5_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART6_MASK    ((uint32_t)0x08000000)
#define NVIC_IABR1_R_NVIC_UART6_BIT     (27)
#define NVIC_IABR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART6_EN      ((uint32_t)0x08000000)

#define NVIC_IABR1_NVIC_UART6_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART6_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART7_MASK    ((uint32_t)0x10000000)
#define NVIC_IABR1_R_NVIC_UART7_BIT     (28)
#define NVIC_IABR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART7_EN      ((uint32_t)0x10000000)

#define NVIC_IABR1_NVIC_UART7_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART7_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_I2C2_MASK    ((uint32_t)0x20000000)
#define NVIC_IABR1_R_NVIC_I2C2_BIT     (29)
#define NVIC_IABR1_R_NVIC_I2C2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C2_EN      ((uint32_t)0x20000000)

#define NVIC_IABR1_NVIC_I2C2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_I2C3_MASK    ((uint32_t)0x40000000)
#define NVIC_IABR1_R_NVIC_I2C3_BIT     (30)
#define NVIC_IABR1_R_NVIC_I2C3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C3_EN      ((uint32_t)0x40000000)

#define NVIC_IABR1_NVIC_I2C3_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIMER4A_MASK    ((uint32_t)0x80000000)
#define NVIC_IABR1_R_NVIC_TIMER4A_BIT     (31)
#define NVIC_IABR1_R_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIMER4A_EN      ((uint32_t)0x80000000)

#define NVIC_IABR1_NVIC_TIMER4A_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIMER4A_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIMER4A_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISER2_OFFSET)))
#define NVIC_ISER2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER2_OFFSET)))


//--------
#define NVIC_ISER2_R_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER2_R_NVIC_TIMER4B_BIT     (0)
#define NVIC_ISER2_R_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_TIMER4B_EN      ((uint32_t)0x00000001)

#define NVIC_ISER2_NVIC_TIMER4B_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_TIMER4B_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_TIMER4B_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_TIMER5A_MASK    ((uint32_t)0x00000002)
#define NVIC_ISER2_R_NVIC_TIMER5A_BIT     (1)
#define NVIC_ISER2_R_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_TIMER5A_EN      ((uint32_t)0x00000002)

#define NVIC_ISER2_NVIC_TIMER5A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_TIMER5A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_TIMER5A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_TIMER5B_MASK    ((uint32_t)0x00000004)
#define NVIC_ISER2_R_NVIC_TIMER5B_BIT     (2)
#define NVIC_ISER2_R_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_TIMER5B_EN      ((uint32_t)0x00000004)

#define NVIC_ISER2_NVIC_TIMER5B_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_TIMER5B_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_TIMER5B_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_FP_EXC_MASK    ((uint32_t)0x00000008)
#define NVIC_ISER2_R_NVIC_FP_EXC_BIT     (3)
#define NVIC_ISER2_R_NVIC_FP_EXC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_FP_EXC_EN      ((uint32_t)0x00000008)

#define NVIC_ISER2_NVIC_FP_EXC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_FP_EXC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_FP_EXC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_RES84_MASK     ((uint32_t)0x00000010)
#define NVIC_ISER2_R_NVIC_RES84_BIT      (4)
#define NVIC_ISER2_R_NVIC_RES84_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RES84_EN       ((uint32_t)0x00000010)

#define NVIC_ISER2_NVIC_RES84_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RES84_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RES84_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_RES85_MASK     ((uint32_t)0x00000020)
#define NVIC_ISER2_R_NVIC_RES85_BIT      (5)
#define NVIC_ISER2_R_NVIC_RES85_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RES85_EN       ((uint32_t)0x00000020)

#define NVIC_ISER2_NVIC_RES85_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RES85_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RES85_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_I2C4_MASK  ((uint32_t)0x00000040)
#define NVIC_ISER2_R_NVIC_I2C4_BIT   (6)
#define NVIC_ISER2_R_NVIC_I2C4_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_I2C4_EN    ((uint32_t)0x00000040)

#define NVIC_ISER2_NVIC_I2C4_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_I2C4_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_I2C4_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_I2C5_MASK  ((uint32_t)0x00000080)
#define NVIC_ISER2_R_NVIC_I2C5_BIT   (7)
#define NVIC_ISER2_R_NVIC_I2C5_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_I2C5_EN    ((uint32_t)0x00000080)

#define NVIC_ISER2_NVIC_I2C5_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_I2C5_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_I2C5_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOM_MASK    ((uint32_t)0x00000100)
#define NVIC_ISER2_R_NVIC_GPIOM_BIT     (8)
#define NVIC_ISER2_R_NVIC_GPIOM_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOM_EN      ((uint32_t)0x00000100)

#define NVIC_ISER2_NVIC_GPIOM_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOM_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_GPION_MASK    ((uint32_t)0x00000200)
#define NVIC_ISER2_R_NVIC_GPION_BIT     (9)
#define NVIC_ISER2_R_NVIC_GPION_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPION_EN      ((uint32_t)0x00000200)

#define NVIC_ISER2_NVIC_GPION_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPION_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPION_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400)
#define NVIC_ISER2_R_NVIC_RES90_BIT     (10)
#define NVIC_ISER2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RES90_EN      ((uint32_t)0x00000400)

#define NVIC_ISER2_NVIC_RES90_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RES90_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RES90_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP1_EPI_IN_MASK ((uint32_t)0x00000800)
#define NVIC_ISER2_R_NVIC_GPIOP1_EPI_IN_BIT  (11)
#define NVIC_ISER2_R_NVIC_GPIOP1_EPI_IN_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP1_EPI_IN_EN   ((uint32_t)0x00000800)

#define NVIC_ISER2_NVIC_GPIOP1_EPI_IN_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP1_EPI_IN_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP1_EPI_IN_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP_MASK    ((uint32_t)0x00001000)
#define NVIC_ISER2_R_NVIC_GPIOP_BIT     (12)
#define NVIC_ISER2_R_NVIC_GPIOP_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP_EN      ((uint32_t)0x00001000)

#define NVIC_ISER2_NVIC_GPIOP_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_GPIOP1_MASK    ((uint32_t)0x00002000)
#define NVIC_ISER2_R_NVIC_GPIOP1_BIT     (13)
#define NVIC_ISER2_R_NVIC_GPIOP1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP1_EN      ((uint32_t)0x00002000)

#define NVIC_ISER2_NVIC_GPIOP1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP2_MASK    ((uint32_t)0x00004000)
#define NVIC_ISER2_R_NVIC_GPIOP2_BIT     (14)
#define NVIC_ISER2_R_NVIC_GPIOP2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP2_EN      ((uint32_t)0x00004000)

#define NVIC_ISER2_NVIC_GPIOP2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP3_MASK    ((uint32_t)0x00008000)
#define NVIC_ISER2_R_NVIC_GPIOP3_BIT     (15)
#define NVIC_ISER2_R_NVIC_GPIOP3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP3_EN      ((uint32_t)0x00008000)

#define NVIC_ISER2_NVIC_GPIOP3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP4_MASK    ((uint32_t)0x00010000)
#define NVIC_ISER2_R_NVIC_GPIOP4_BIT     (16)
#define NVIC_ISER2_R_NVIC_GPIOP4_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP4_EN      ((uint32_t)0x00010000)

#define NVIC_ISER2_NVIC_GPIOP4_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP4_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP4_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP5_MASK    ((uint32_t)0x00020000)
#define NVIC_ISER2_R_NVIC_GPIOP5_BIT     (17)
#define NVIC_ISER2_R_NVIC_GPIOP5_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP5_EN      ((uint32_t)0x00020000)

#define NVIC_ISER2_NVIC_GPIOP5_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP5_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP5_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP6_MASK    ((uint32_t)0x00040000)
#define NVIC_ISER2_R_NVIC_GPIOP6_BIT     (18)
#define NVIC_ISER2_R_NVIC_GPIOP6_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP6_EN      ((uint32_t)0x00040000)

#define NVIC_ISER2_NVIC_GPIOP6_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP6_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOP7_MASK    ((uint32_t)0x00080000)
#define NVIC_ISER2_R_NVIC_GPIOP7_BIT     (19)
#define NVIC_ISER2_R_NVIC_GPIOP7_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOP7_EN      ((uint32_t)0x00080000)

#define NVIC_ISER2_NVIC_GPIOP7_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOP7_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOP7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ_MASK   ((uint32_t)0x00100000)
#define NVIC_ISER2_R_NVIC_GPIOQ_BIT    (20)
#define NVIC_ISER2_R_NVIC_GPIOQ_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ_EN     ((uint32_t)0x00100000)

#define NVIC_ISER2_NVIC_GPIOQ_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ1_MASK   ((uint32_t)0x00200000)
#define NVIC_ISER2_R_NVIC_GPIOQ1_BIT    (21)
#define NVIC_ISER2_R_NVIC_GPIOQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ1_EN     ((uint32_t)0x00200000)

#define NVIC_ISER2_NVIC_GPIOQ1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00400000)
#define NVIC_ISER2_R_NVIC_GPIOQ2_BIT    (22)
#define NVIC_ISER2_R_NVIC_GPIOQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ2_EN     ((uint32_t)0x00400000)

#define NVIC_ISER2_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ2_EN       ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_GPIOQ3_MASK   ((uint32_t)0x00800000)
#define NVIC_ISER2_R_NVIC_GPIOQ3_BIT    (23)
#define NVIC_ISER2_R_NVIC_GPIOQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ3_EN     ((uint32_t)0x00800000)

#define NVIC_ISER2_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ3_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ3_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ4_MASK   ((uint32_t)0x01000000)
#define NVIC_ISER2_R_NVIC_GPIOQ4_BIT    (24)
#define NVIC_ISER2_R_NVIC_GPIOQ4_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ4_EN     ((uint32_t)0x01000000)

#define NVIC_ISER2_NVIC_GPIOQ4_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ4_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ5_MASK   ((uint32_t)0x02000000)
#define NVIC_ISER2_R_NVIC_GPIOQ5_BIT    (25)
#define NVIC_ISER2_R_NVIC_GPIOQ5_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ5_EN     ((uint32_t)0x02000000)

#define NVIC_ISER2_NVIC_GPIOQ5_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ5_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x04000000)
#define NVIC_ISER2_R_NVIC_GPIOQ6_BIT    (26)
#define NVIC_ISER2_R_NVIC_GPIOQ6_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ6_EN     ((uint32_t)0x04000000)

#define NVIC_ISER2_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ6_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ6_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_GPIOQ7_MASK   ((uint32_t)0x08000000)
#define NVIC_ISER2_R_NVIC_GPIOQ7_BIT    (27)
#define NVIC_ISER2_R_NVIC_GPIOQ7_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_GPIOQ7_EN     ((uint32_t)0x08000000)

#define NVIC_ISER2_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_GPIOQ7_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_GPIOQ7_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_RES108_MASK  ((uint32_t)0x10000000)
#define NVIC_ISER2_R_NVIC_RES108_BIT   (28)
#define NVIC_ISER2_R_NVIC_RES108_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RES108_EN    ((uint32_t)0x10000000)

#define NVIC_ISER2_NVIC_RES108_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RES108_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RES108_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_RES109_MASK  ((uint32_t)0x20000000)
#define NVIC_ISER2_R_NVIC_RES109_BIT   (29)
#define NVIC_ISER2_R_NVIC_RES109_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RES109_EN    ((uint32_t)0x20000000)

#define NVIC_ISER2_NVIC_RES109_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RES109_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RES109_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_SHA_MD5_MASK ((uint32_t)0x40000000)
#define NVIC_ISER2_R_NVIC_SHA_MD5_BIT  (30)
#define NVIC_ISER2_R_NVIC_SHA_MD5_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SHA_MD5_EN   ((uint32_t)0x40000000)

#define NVIC_ISER2_NVIC_SHA_MD5_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SHA_MD5_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SHA_MD5_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_AES_MASK ((uint32_t)0x80000000)
#define NVIC_ISER2_R_NVIC_AES_BIT  (31)
#define NVIC_ISER2_R_NVIC_AES_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_AES_EN   ((uint32_t)0x80000000)

#define NVIC_ISER2_NVIC_AES_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_AES_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_AES_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICER2_OFFSET)))
#define NVIC_ICER2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER2_OFFSET)))

//--------
#define NVIC_ICER2_R_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER2_R_NVIC_TIMER4B_BIT     (0)
#define NVIC_ICER2_R_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_TIMER4B_EN      ((uint32_t)0x00000001)

#define NVIC_ICER2_NVIC_TIMER4B_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_TIMER4B_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_TIMER4B_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_TIMER5A_MASK    ((uint32_t)0x00000002)
#define NVIC_ICER2_R_NVIC_TIMER5A_BIT     (1)
#define NVIC_ICER2_R_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_TIMER5A_EN      ((uint32_t)0x00000002)

#define NVIC_ICER2_NVIC_TIMER5A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_TIMER5A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_TIMER5A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_TIMER5B_MASK    ((uint32_t)0x00000004)
#define NVIC_ICER2_R_NVIC_TIMER5B_BIT     (2)
#define NVIC_ICER2_R_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_TIMER5B_EN      ((uint32_t)0x00000004)

#define NVIC_ICER2_NVIC_TIMER5B_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_TIMER5B_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_TIMER5B_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_FP_EXC_MASK    ((uint32_t)0x00000008)
#define NVIC_ICER2_R_NVIC_FP_EXC_BIT     (3)
#define NVIC_ICER2_R_NVIC_FP_EXC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_FP_EXC_EN      ((uint32_t)0x00000008)

#define NVIC_ICER2_NVIC_FP_EXC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_FP_EXC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_FP_EXC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_RES84_MASK     ((uint32_t)0x00000010)
#define NVIC_ICER2_R_NVIC_RES84_BIT      (4)
#define NVIC_ICER2_R_NVIC_RES84_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_RES84_EN       ((uint32_t)0x00000010)

#define NVIC_ICER2_NVIC_RES84_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_RES84_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_RES84_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_RES85_MASK     ((uint32_t)0x00000020)
#define NVIC_ICER2_R_NVIC_RES85_BIT      (5)
#define NVIC_ICER2_R_NVIC_RES85_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_RES85_EN       ((uint32_t)0x00000020)

#define NVIC_ICER2_NVIC_RES85_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_RES85_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_RES85_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_I2C4_MASK  ((uint32_t)0x00000040)
#define NVIC_ICER2_R_NVIC_I2C4_BIT   (6)
#define NVIC_ICER2_R_NVIC_I2C4_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_I2C4_EN    ((uint32_t)0x00000040)

#define NVIC_ICER2_NVIC_I2C4_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_I2C4_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_I2C4_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_I2C5_MASK  ((uint32_t)0x00000080)
#define NVIC_ICER2_R_NVIC_I2C5_BIT   (7)
#define NVIC_ICER2_R_NVIC_I2C5_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_I2C5_EN    ((uint32_t)0x00000080)

#define NVIC_ICER2_NVIC_I2C5_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_I2C5_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_I2C5_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOM_MASK    ((uint32_t)0x00000100)
#define NVIC_ICER2_R_NVIC_GPIOM_BIT     (8)
#define NVIC_ICER2_R_NVIC_GPIOM_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOM_EN      ((uint32_t)0x00000100)

#define NVIC_ICER2_NVIC_GPIOM_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOM_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_GPION_MASK    ((uint32_t)0x00000200)
#define NVIC_ICER2_R_NVIC_GPION_BIT     (9)
#define NVIC_ICER2_R_NVIC_GPION_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPION_EN      ((uint32_t)0x00000200)

#define NVIC_ICER2_NVIC_GPION_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPION_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPION_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400)
#define NVIC_ICER2_R_NVIC_RES90_BIT     (10)
#define NVIC_ICER2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_RES90_EN      ((uint32_t)0x00000400)

#define NVIC_ICER2_NVIC_RES90_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_RES90_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_RES90_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP1_EPI_IN_MASK ((uint32_t)0x00000800)
#define NVIC_ICER2_R_NVIC_GPIOP1_EPI_IN_BIT  (11)
#define NVIC_ICER2_R_NVIC_GPIOP1_EPI_IN_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP1_EPI_IN_EN   ((uint32_t)0x00000800)

#define NVIC_ICER2_NVIC_GPIOP1_EPI_IN_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP1_EPI_IN_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP1_EPI_IN_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP_MASK    ((uint32_t)0x00001000)
#define NVIC_ICER2_R_NVIC_GPIOP_BIT     (12)
#define NVIC_ICER2_R_NVIC_GPIOP_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP_EN      ((uint32_t)0x00001000)

#define NVIC_ICER2_NVIC_GPIOP_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_GPIOP1_MASK    ((uint32_t)0x00002000)
#define NVIC_ICER2_R_NVIC_GPIOP1_BIT     (13)
#define NVIC_ICER2_R_NVIC_GPIOP1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP1_EN      ((uint32_t)0x00002000)

#define NVIC_ICER2_NVIC_GPIOP1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP2_MASK    ((uint32_t)0x00004000)
#define NVIC_ICER2_R_NVIC_GPIOP2_BIT     (14)
#define NVIC_ICER2_R_NVIC_GPIOP2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP2_EN      ((uint32_t)0x00004000)

#define NVIC_ICER2_NVIC_GPIOP2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP3_MASK    ((uint32_t)0x00008000)
#define NVIC_ICER2_R_NVIC_GPIOP3_BIT     (15)
#define NVIC_ICER2_R_NVIC_GPIOP3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP3_EN      ((uint32_t)0x00008000)

#define NVIC_ICER2_NVIC_GPIOP3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP4_MASK    ((uint32_t)0x00010000)
#define NVIC_ICER2_R_NVIC_GPIOP4_BIT     (16)
#define NVIC_ICER2_R_NVIC_GPIOP4_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP4_EN      ((uint32_t)0x00010000)

#define NVIC_ICER2_NVIC_GPIOP4_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP4_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP4_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP5_MASK    ((uint32_t)0x00020000)
#define NVIC_ICER2_R_NVIC_GPIOP5_BIT     (17)
#define NVIC_ICER2_R_NVIC_GPIOP5_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP5_EN      ((uint32_t)0x00020000)

#define NVIC_ICER2_NVIC_GPIOP5_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP5_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP5_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP6_MASK    ((uint32_t)0x00040000)
#define NVIC_ICER2_R_NVIC_GPIOP6_BIT     (18)
#define NVIC_ICER2_R_NVIC_GPIOP6_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP6_EN      ((uint32_t)0x00040000)

#define NVIC_ICER2_NVIC_GPIOP6_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP6_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOP7_MASK    ((uint32_t)0x00080000)
#define NVIC_ICER2_R_NVIC_GPIOP7_BIT     (19)
#define NVIC_ICER2_R_NVIC_GPIOP7_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOP7_EN      ((uint32_t)0x00080000)

#define NVIC_ICER2_NVIC_GPIOP7_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOP7_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOP7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ_MASK   ((uint32_t)0x00100000)
#define NVIC_ICER2_R_NVIC_GPIOQ_BIT    (20)
#define NVIC_ICER2_R_NVIC_GPIOQ_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ_EN     ((uint32_t)0x00100000)

#define NVIC_ICER2_NVIC_GPIOQ_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ1_MASK   ((uint32_t)0x00200000)
#define NVIC_ICER2_R_NVIC_GPIOQ1_BIT    (21)
#define NVIC_ICER2_R_NVIC_GPIOQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ1_EN     ((uint32_t)0x00200000)

#define NVIC_ICER2_NVIC_GPIOQ1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00400000)
#define NVIC_ICER2_R_NVIC_GPIOQ2_BIT    (22)
#define NVIC_ICER2_R_NVIC_GPIOQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ2_EN     ((uint32_t)0x00400000)

#define NVIC_ICER2_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ2_EN       ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_GPIOQ3_MASK   ((uint32_t)0x00800000)
#define NVIC_ICER2_R_NVIC_GPIOQ3_BIT    (23)
#define NVIC_ICER2_R_NVIC_GPIOQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ3_EN     ((uint32_t)0x00800000)

#define NVIC_ICER2_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ3_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ3_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ4_MASK   ((uint32_t)0x01000000)
#define NVIC_ICER2_R_NVIC_GPIOQ4_BIT    (24)
#define NVIC_ICER2_R_NVIC_GPIOQ4_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ4_EN     ((uint32_t)0x01000000)

#define NVIC_ICER2_NVIC_GPIOQ4_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ4_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ5_MASK   ((uint32_t)0x02000000)
#define NVIC_ICER2_R_NVIC_GPIOQ5_BIT    (25)
#define NVIC_ICER2_R_NVIC_GPIOQ5_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ5_EN     ((uint32_t)0x02000000)

#define NVIC_ICER2_NVIC_GPIOQ5_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ5_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x04000000)
#define NVIC_ICER2_R_NVIC_GPIOQ6_BIT    (26)
#define NVIC_ICER2_R_NVIC_GPIOQ6_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ6_EN     ((uint32_t)0x04000000)

#define NVIC_ICER2_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ6_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ6_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_GPIOQ7_MASK   ((uint32_t)0x08000000)
#define NVIC_ICER2_R_NVIC_GPIOQ7_BIT    (27)
#define NVIC_ICER2_R_NVIC_GPIOQ7_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_GPIOQ7_EN     ((uint32_t)0x08000000)

#define NVIC_ICER2_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_GPIOQ7_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_GPIOQ7_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_RES108_MASK  ((uint32_t)0x10000000)
#define NVIC_ICER2_R_NVIC_RES108_BIT   (28)
#define NVIC_ICER2_R_NVIC_RES108_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_RES108_EN    ((uint32_t)0x10000000)

#define NVIC_ICER2_NVIC_RES108_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_RES108_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_RES108_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_RES109_MASK  ((uint32_t)0x20000000)
#define NVIC_ICER2_R_NVIC_RES109_BIT   (29)
#define NVIC_ICER2_R_NVIC_RES109_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_RES109_EN    ((uint32_t)0x20000000)

#define NVIC_ICER2_NVIC_RES109_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_RES109_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_RES109_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_SHA_MD5_MASK ((uint32_t)0x40000000)
#define NVIC_ICER2_R_NVIC_SHA_MD5_BIT  (30)
#define NVIC_ICER2_R_NVIC_SHA_MD5_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SHA_MD5_EN   ((uint32_t)0x40000000)

#define NVIC_ICER2_NVIC_SHA_MD5_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SHA_MD5_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SHA_MD5_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_AES_MASK ((uint32_t)0x80000000)
#define NVIC_ICER2_R_NVIC_AES_BIT  (31)
#define NVIC_ICER2_R_NVIC_AES_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_AES_EN   ((uint32_t)0x80000000)

#define NVIC_ICER2_NVIC_AES_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_AES_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_AES_EN     ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISPR2_OFFSET)))
#define NVIC_ISPR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR2_OFFSET)))

//--------
#define NVIC_ISPR2_R_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR2_R_NVIC_TIMER4B_BIT     (0)
#define NVIC_ISPR2_R_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_TIMER4B_EN      ((uint32_t)0x00000001)

#define NVIC_ISPR2_NVIC_TIMER4B_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_TIMER4B_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_TIMER4B_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_TIMER5A_MASK    ((uint32_t)0x00000002)
#define NVIC_ISPR2_R_NVIC_TIMER5A_BIT     (1)
#define NVIC_ISPR2_R_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_TIMER5A_EN      ((uint32_t)0x00000002)

#define NVIC_ISPR2_NVIC_TIMER5A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_TIMER5A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_TIMER5A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_TIMER5B_MASK    ((uint32_t)0x00000004)
#define NVIC_ISPR2_R_NVIC_TIMER5B_BIT     (2)
#define NVIC_ISPR2_R_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_TIMER5B_EN      ((uint32_t)0x00000004)

#define NVIC_ISPR2_NVIC_TIMER5B_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_TIMER5B_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_TIMER5B_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_FP_EXC_MASK    ((uint32_t)0x00000008)
#define NVIC_ISPR2_R_NVIC_FP_EXC_BIT     (3)
#define NVIC_ISPR2_R_NVIC_FP_EXC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_FP_EXC_EN      ((uint32_t)0x00000008)

#define NVIC_ISPR2_NVIC_FP_EXC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_FP_EXC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_FP_EXC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_RES84_MASK     ((uint32_t)0x00000010)
#define NVIC_ISPR2_R_NVIC_RES84_BIT      (4)
#define NVIC_ISPR2_R_NVIC_RES84_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_RES84_EN       ((uint32_t)0x00000010)

#define NVIC_ISPR2_NVIC_RES84_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_RES84_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_RES84_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_RES85_MASK     ((uint32_t)0x00000020)
#define NVIC_ISPR2_R_NVIC_RES85_BIT      (5)
#define NVIC_ISPR2_R_NVIC_RES85_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_RES85_EN       ((uint32_t)0x00000020)

#define NVIC_ISPR2_NVIC_RES85_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_RES85_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_RES85_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_I2C4_MASK  ((uint32_t)0x00000040)
#define NVIC_ISPR2_R_NVIC_I2C4_BIT   (6)
#define NVIC_ISPR2_R_NVIC_I2C4_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_I2C4_EN    ((uint32_t)0x00000040)

#define NVIC_ISPR2_NVIC_I2C4_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_I2C4_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_I2C4_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_I2C5_MASK  ((uint32_t)0x00000080)
#define NVIC_ISPR2_R_NVIC_I2C5_BIT   (7)
#define NVIC_ISPR2_R_NVIC_I2C5_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_I2C5_EN    ((uint32_t)0x00000080)

#define NVIC_ISPR2_NVIC_I2C5_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_I2C5_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_I2C5_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOM_MASK    ((uint32_t)0x00000100)
#define NVIC_ISPR2_R_NVIC_GPIOM_BIT     (8)
#define NVIC_ISPR2_R_NVIC_GPIOM_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOM_EN      ((uint32_t)0x00000100)

#define NVIC_ISPR2_NVIC_GPIOM_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOM_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_GPION_MASK    ((uint32_t)0x00000200)
#define NVIC_ISPR2_R_NVIC_GPION_BIT     (9)
#define NVIC_ISPR2_R_NVIC_GPION_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPION_EN      ((uint32_t)0x00000200)

#define NVIC_ISPR2_NVIC_GPION_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPION_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPION_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400)
#define NVIC_ISPR2_R_NVIC_RES90_BIT     (10)
#define NVIC_ISPR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400)

#define NVIC_ISPR2_NVIC_RES90_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_RES90_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_RES90_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP1_EPI_IN_MASK ((uint32_t)0x00000800)
#define NVIC_ISPR2_R_NVIC_GPIOP1_EPI_IN_BIT  (11)
#define NVIC_ISPR2_R_NVIC_GPIOP1_EPI_IN_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP1_EPI_IN_EN   ((uint32_t)0x00000800)

#define NVIC_ISPR2_NVIC_GPIOP1_EPI_IN_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP1_EPI_IN_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP1_EPI_IN_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP_MASK    ((uint32_t)0x00001000)
#define NVIC_ISPR2_R_NVIC_GPIOP_BIT     (12)
#define NVIC_ISPR2_R_NVIC_GPIOP_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP_EN      ((uint32_t)0x00001000)

#define NVIC_ISPR2_NVIC_GPIOP_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_GPIOP1_MASK    ((uint32_t)0x00002000)
#define NVIC_ISPR2_R_NVIC_GPIOP1_BIT     (13)
#define NVIC_ISPR2_R_NVIC_GPIOP1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP1_EN      ((uint32_t)0x00002000)

#define NVIC_ISPR2_NVIC_GPIOP1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP2_MASK    ((uint32_t)0x00004000)
#define NVIC_ISPR2_R_NVIC_GPIOP2_BIT     (14)
#define NVIC_ISPR2_R_NVIC_GPIOP2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP2_EN      ((uint32_t)0x00004000)

#define NVIC_ISPR2_NVIC_GPIOP2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP3_MASK    ((uint32_t)0x00008000)
#define NVIC_ISPR2_R_NVIC_GPIOP3_BIT     (15)
#define NVIC_ISPR2_R_NVIC_GPIOP3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP3_EN      ((uint32_t)0x00008000)

#define NVIC_ISPR2_NVIC_GPIOP3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP4_MASK    ((uint32_t)0x00010000)
#define NVIC_ISPR2_R_NVIC_GPIOP4_BIT     (16)
#define NVIC_ISPR2_R_NVIC_GPIOP4_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP4_EN      ((uint32_t)0x00010000)

#define NVIC_ISPR2_NVIC_GPIOP4_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP4_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP4_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP5_MASK    ((uint32_t)0x00020000)
#define NVIC_ISPR2_R_NVIC_GPIOP5_BIT     (17)
#define NVIC_ISPR2_R_NVIC_GPIOP5_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP5_EN      ((uint32_t)0x00020000)

#define NVIC_ISPR2_NVIC_GPIOP5_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP5_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP5_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP6_MASK    ((uint32_t)0x00040000)
#define NVIC_ISPR2_R_NVIC_GPIOP6_BIT     (18)
#define NVIC_ISPR2_R_NVIC_GPIOP6_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP6_EN      ((uint32_t)0x00040000)

#define NVIC_ISPR2_NVIC_GPIOP6_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP6_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOP7_MASK    ((uint32_t)0x00080000)
#define NVIC_ISPR2_R_NVIC_GPIOP7_BIT     (19)
#define NVIC_ISPR2_R_NVIC_GPIOP7_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOP7_EN      ((uint32_t)0x00080000)

#define NVIC_ISPR2_NVIC_GPIOP7_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOP7_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOP7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ_MASK   ((uint32_t)0x00100000)
#define NVIC_ISPR2_R_NVIC_GPIOQ_BIT    (20)
#define NVIC_ISPR2_R_NVIC_GPIOQ_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ_EN     ((uint32_t)0x00100000)

#define NVIC_ISPR2_NVIC_GPIOQ_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ1_MASK   ((uint32_t)0x00200000)
#define NVIC_ISPR2_R_NVIC_GPIOQ1_BIT    (21)
#define NVIC_ISPR2_R_NVIC_GPIOQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ1_EN     ((uint32_t)0x00200000)

#define NVIC_ISPR2_NVIC_GPIOQ1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00400000)
#define NVIC_ISPR2_R_NVIC_GPIOQ2_BIT    (22)
#define NVIC_ISPR2_R_NVIC_GPIOQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ2_EN     ((uint32_t)0x00400000)

#define NVIC_ISPR2_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ2_EN       ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ3_MASK   ((uint32_t)0x00800000)
#define NVIC_ISPR2_R_NVIC_GPIOQ3_BIT    (23)
#define NVIC_ISPR2_R_NVIC_GPIOQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ3_EN     ((uint32_t)0x00800000)

#define NVIC_ISPR2_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ3_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ3_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ4_MASK   ((uint32_t)0x01000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ4_BIT    (24)
#define NVIC_ISPR2_R_NVIC_GPIOQ4_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ4_EN     ((uint32_t)0x01000000)

#define NVIC_ISPR2_NVIC_GPIOQ4_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ4_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ5_MASK   ((uint32_t)0x02000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ5_BIT    (25)
#define NVIC_ISPR2_R_NVIC_GPIOQ5_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ5_EN     ((uint32_t)0x02000000)

#define NVIC_ISPR2_NVIC_GPIOQ5_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ5_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x04000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ6_BIT    (26)
#define NVIC_ISPR2_R_NVIC_GPIOQ6_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ6_EN     ((uint32_t)0x04000000)

#define NVIC_ISPR2_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ6_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ6_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_GPIOQ7_MASK   ((uint32_t)0x08000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ7_BIT    (27)
#define NVIC_ISPR2_R_NVIC_GPIOQ7_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_GPIOQ7_EN     ((uint32_t)0x08000000)

#define NVIC_ISPR2_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_GPIOQ7_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_GPIOQ7_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_RES108_MASK  ((uint32_t)0x10000000)
#define NVIC_ISPR2_R_NVIC_RES108_BIT   (28)
#define NVIC_ISPR2_R_NVIC_RES108_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_RES108_EN    ((uint32_t)0x10000000)

#define NVIC_ISPR2_NVIC_RES108_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_RES108_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_RES108_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_RES109_MASK  ((uint32_t)0x20000000)
#define NVIC_ISPR2_R_NVIC_RES109_BIT   (29)
#define NVIC_ISPR2_R_NVIC_RES109_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_RES109_EN    ((uint32_t)0x20000000)

#define NVIC_ISPR2_NVIC_RES109_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_RES109_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_RES109_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_SHA_MD5_MASK ((uint32_t)0x40000000)
#define NVIC_ISPR2_R_NVIC_SHA_MD5_BIT  (30)
#define NVIC_ISPR2_R_NVIC_SHA_MD5_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SHA_MD5_EN   ((uint32_t)0x40000000)

#define NVIC_ISPR2_NVIC_SHA_MD5_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SHA_MD5_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SHA_MD5_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_AES_MASK ((uint32_t)0x80000000)
#define NVIC_ISPR2_R_NVIC_AES_BIT  (31)
#define NVIC_ISPR2_R_NVIC_AES_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_AES_EN   ((uint32_t)0x80000000)

#define NVIC_ISPR2_NVIC_AES_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_AES_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_AES_EN     ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICPR2_OFFSET)))
#define NVIC_ICPR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR2_OFFSET)))

//--------
#define NVIC_ICPR2_R_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR2_R_NVIC_TIMER4B_BIT     (0)
#define NVIC_ICPR2_R_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_TIMER4B_EN      ((uint32_t)0x00000001)

#define NVIC_ICPR2_NVIC_TIMER4B_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_TIMER4B_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_TIMER4B_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_TIMER5A_MASK    ((uint32_t)0x00000002)
#define NVIC_ICPR2_R_NVIC_TIMER5A_BIT     (1)
#define NVIC_ICPR2_R_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_TIMER5A_EN      ((uint32_t)0x00000002)

#define NVIC_ICPR2_NVIC_TIMER5A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_TIMER5A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_TIMER5A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_TIMER5B_MASK    ((uint32_t)0x00000004)
#define NVIC_ICPR2_R_NVIC_TIMER5B_BIT     (2)
#define NVIC_ICPR2_R_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_TIMER5B_EN      ((uint32_t)0x00000004)

#define NVIC_ICPR2_NVIC_TIMER5B_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_TIMER5B_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_TIMER5B_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_FP_EXC_MASK    ((uint32_t)0x00000008)
#define NVIC_ICPR2_R_NVIC_FP_EXC_BIT     (3)
#define NVIC_ICPR2_R_NVIC_FP_EXC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_FP_EXC_EN      ((uint32_t)0x00000008)

#define NVIC_ICPR2_NVIC_FP_EXC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_FP_EXC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_FP_EXC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_RES84_MASK     ((uint32_t)0x00000010)
#define NVIC_ICPR2_R_NVIC_RES84_BIT      (4)
#define NVIC_ICPR2_R_NVIC_RES84_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_RES84_EN       ((uint32_t)0x00000010)

#define NVIC_ICPR2_NVIC_RES84_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_RES84_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_RES84_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_RES85_MASK     ((uint32_t)0x00000020)
#define NVIC_ICPR2_R_NVIC_RES85_BIT      (5)
#define NVIC_ICPR2_R_NVIC_RES85_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_RES85_EN       ((uint32_t)0x00000020)

#define NVIC_ICPR2_NVIC_RES85_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_RES85_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_RES85_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_I2C4_MASK  ((uint32_t)0x00000040)
#define NVIC_ICPR2_R_NVIC_I2C4_BIT   (6)
#define NVIC_ICPR2_R_NVIC_I2C4_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_I2C4_EN    ((uint32_t)0x00000040)

#define NVIC_ICPR2_NVIC_I2C4_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_I2C4_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_I2C4_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_I2C5_MASK  ((uint32_t)0x00000080)
#define NVIC_ICPR2_R_NVIC_I2C5_BIT   (7)
#define NVIC_ICPR2_R_NVIC_I2C5_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_I2C5_EN    ((uint32_t)0x00000080)

#define NVIC_ICPR2_NVIC_I2C5_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_I2C5_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_I2C5_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOM_MASK    ((uint32_t)0x00000100)
#define NVIC_ICPR2_R_NVIC_GPIOM_BIT     (8)
#define NVIC_ICPR2_R_NVIC_GPIOM_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOM_EN      ((uint32_t)0x00000100)

#define NVIC_ICPR2_NVIC_GPIOM_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOM_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_GPION_MASK    ((uint32_t)0x00000200)
#define NVIC_ICPR2_R_NVIC_GPION_BIT     (9)
#define NVIC_ICPR2_R_NVIC_GPION_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPION_EN      ((uint32_t)0x00000200)

#define NVIC_ICPR2_NVIC_GPION_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPION_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPION_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400)
#define NVIC_ICPR2_R_NVIC_RES90_BIT     (10)
#define NVIC_ICPR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400)

#define NVIC_ICPR2_NVIC_RES90_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_RES90_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_RES90_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP1_EPI_IN_MASK ((uint32_t)0x00000800)
#define NVIC_ICPR2_R_NVIC_GPIOP1_EPI_IN_BIT  (11)
#define NVIC_ICPR2_R_NVIC_GPIOP1_EPI_IN_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP1_EPI_IN_EN   ((uint32_t)0x00000800)

#define NVIC_ICPR2_NVIC_GPIOP1_EPI_IN_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP1_EPI_IN_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP1_EPI_IN_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP_MASK    ((uint32_t)0x00001000)
#define NVIC_ICPR2_R_NVIC_GPIOP_BIT     (12)
#define NVIC_ICPR2_R_NVIC_GPIOP_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP_EN      ((uint32_t)0x00001000)

#define NVIC_ICPR2_NVIC_GPIOP_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_GPIOP1_MASK    ((uint32_t)0x00002000)
#define NVIC_ICPR2_R_NVIC_GPIOP1_BIT     (13)
#define NVIC_ICPR2_R_NVIC_GPIOP1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP1_EN      ((uint32_t)0x00002000)

#define NVIC_ICPR2_NVIC_GPIOP1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP2_MASK    ((uint32_t)0x00004000)
#define NVIC_ICPR2_R_NVIC_GPIOP2_BIT     (14)
#define NVIC_ICPR2_R_NVIC_GPIOP2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP2_EN      ((uint32_t)0x00004000)

#define NVIC_ICPR2_NVIC_GPIOP2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP3_MASK    ((uint32_t)0x00008000)
#define NVIC_ICPR2_R_NVIC_GPIOP3_BIT     (15)
#define NVIC_ICPR2_R_NVIC_GPIOP3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP3_EN      ((uint32_t)0x00008000)

#define NVIC_ICPR2_NVIC_GPIOP3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP4_MASK    ((uint32_t)0x00010000)
#define NVIC_ICPR2_R_NVIC_GPIOP4_BIT     (16)
#define NVIC_ICPR2_R_NVIC_GPIOP4_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP4_EN      ((uint32_t)0x00010000)

#define NVIC_ICPR2_NVIC_GPIOP4_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP4_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP4_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP5_MASK    ((uint32_t)0x00020000)
#define NVIC_ICPR2_R_NVIC_GPIOP5_BIT     (17)
#define NVIC_ICPR2_R_NVIC_GPIOP5_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP5_EN      ((uint32_t)0x00020000)

#define NVIC_ICPR2_NVIC_GPIOP5_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP5_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP5_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP6_MASK    ((uint32_t)0x00040000)
#define NVIC_ICPR2_R_NVIC_GPIOP6_BIT     (18)
#define NVIC_ICPR2_R_NVIC_GPIOP6_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP6_EN      ((uint32_t)0x00040000)

#define NVIC_ICPR2_NVIC_GPIOP6_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP6_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOP7_MASK    ((uint32_t)0x00080000)
#define NVIC_ICPR2_R_NVIC_GPIOP7_BIT     (19)
#define NVIC_ICPR2_R_NVIC_GPIOP7_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOP7_EN      ((uint32_t)0x00080000)

#define NVIC_ICPR2_NVIC_GPIOP7_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOP7_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOP7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ_MASK   ((uint32_t)0x00100000)
#define NVIC_ICPR2_R_NVIC_GPIOQ_BIT    (20)
#define NVIC_ICPR2_R_NVIC_GPIOQ_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ_EN     ((uint32_t)0x00100000)

#define NVIC_ICPR2_NVIC_GPIOQ_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ1_MASK   ((uint32_t)0x00200000)
#define NVIC_ICPR2_R_NVIC_GPIOQ1_BIT    (21)
#define NVIC_ICPR2_R_NVIC_GPIOQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ1_EN     ((uint32_t)0x00200000)

#define NVIC_ICPR2_NVIC_GPIOQ1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00400000)
#define NVIC_ICPR2_R_NVIC_GPIOQ2_BIT    (22)
#define NVIC_ICPR2_R_NVIC_GPIOQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ2_EN     ((uint32_t)0x00400000)

#define NVIC_ICPR2_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ2_EN       ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ3_MASK   ((uint32_t)0x00800000)
#define NVIC_ICPR2_R_NVIC_GPIOQ3_BIT    (23)
#define NVIC_ICPR2_R_NVIC_GPIOQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ3_EN     ((uint32_t)0x00800000)

#define NVIC_ICPR2_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ3_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ3_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ4_MASK   ((uint32_t)0x01000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ4_BIT    (24)
#define NVIC_ICPR2_R_NVIC_GPIOQ4_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ4_EN     ((uint32_t)0x01000000)

#define NVIC_ICPR2_NVIC_GPIOQ4_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ4_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ5_MASK   ((uint32_t)0x02000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ5_BIT    (25)
#define NVIC_ICPR2_R_NVIC_GPIOQ5_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ5_EN     ((uint32_t)0x02000000)

#define NVIC_ICPR2_NVIC_GPIOQ5_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ5_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x04000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ6_BIT    (26)
#define NVIC_ICPR2_R_NVIC_GPIOQ6_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ6_EN     ((uint32_t)0x04000000)

#define NVIC_ICPR2_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ6_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ6_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_GPIOQ7_MASK   ((uint32_t)0x08000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ7_BIT    (27)
#define NVIC_ICPR2_R_NVIC_GPIOQ7_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_GPIOQ7_EN     ((uint32_t)0x08000000)

#define NVIC_ICPR2_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_GPIOQ7_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_GPIOQ7_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_RES108_MASK  ((uint32_t)0x10000000)
#define NVIC_ICPR2_R_NVIC_RES108_BIT   (28)
#define NVIC_ICPR2_R_NVIC_RES108_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_RES108_EN    ((uint32_t)0x10000000)

#define NVIC_ICPR2_NVIC_RES108_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_RES108_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_RES108_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_RES109_MASK  ((uint32_t)0x20000000)
#define NVIC_ICPR2_R_NVIC_RES109_BIT   (29)
#define NVIC_ICPR2_R_NVIC_RES109_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_RES109_EN    ((uint32_t)0x20000000)

#define NVIC_ICPR2_NVIC_RES109_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_RES109_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_RES109_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_SHA_MD5_MASK ((uint32_t)0x40000000)
#define NVIC_ICPR2_R_NVIC_SHA_MD5_BIT  (30)
#define NVIC_ICPR2_R_NVIC_SHA_MD5_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SHA_MD5_EN   ((uint32_t)0x40000000)

#define NVIC_ICPR2_NVIC_SHA_MD5_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SHA_MD5_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SHA_MD5_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_AES_MASK ((uint32_t)0x80000000)
#define NVIC_ICPR2_R_NVIC_AES_BIT  (31)
#define NVIC_ICPR2_R_NVIC_AES_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_AES_EN   ((uint32_t)0x80000000)

#define NVIC_ICPR2_NVIC_AES_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_AES_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_AES_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_IABR2_OFFSET)))
#define NVIC_IABR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR2_OFFSET)))

//--------
#define NVIC_IABR2_R_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR2_R_NVIC_TIMER4B_BIT     (0)
#define NVIC_IABR2_R_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_TIMER4B_EN      ((uint32_t)0x00000001)

#define NVIC_IABR2_NVIC_TIMER4B_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_TIMER4B_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_TIMER4B_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_TIMER5A_MASK    ((uint32_t)0x00000002)
#define NVIC_IABR2_R_NVIC_TIMER5A_BIT     (1)
#define NVIC_IABR2_R_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_TIMER5A_EN      ((uint32_t)0x00000002)

#define NVIC_IABR2_NVIC_TIMER5A_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_TIMER5A_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_TIMER5A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_TIMER5B_MASK    ((uint32_t)0x00000004)
#define NVIC_IABR2_R_NVIC_TIMER5B_BIT     (2)
#define NVIC_IABR2_R_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_TIMER5B_EN      ((uint32_t)0x00000004)

#define NVIC_IABR2_NVIC_TIMER5B_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_TIMER5B_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_TIMER5B_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_FP_EXC_MASK    ((uint32_t)0x00000008)
#define NVIC_IABR2_R_NVIC_FP_EXC_BIT     (3)
#define NVIC_IABR2_R_NVIC_FP_EXC_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_FP_EXC_EN      ((uint32_t)0x00000008)

#define NVIC_IABR2_NVIC_FP_EXC_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_FP_EXC_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_FP_EXC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_RES84_MASK     ((uint32_t)0x00000010)
#define NVIC_IABR2_R_NVIC_RES84_BIT      (4)
#define NVIC_IABR2_R_NVIC_RES84_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_RES84_EN       ((uint32_t)0x00000010)

#define NVIC_IABR2_NVIC_RES84_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_RES84_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_RES84_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_RES85_MASK     ((uint32_t)0x00000020)
#define NVIC_IABR2_R_NVIC_RES85_BIT      (5)
#define NVIC_IABR2_R_NVIC_RES85_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_RES85_EN       ((uint32_t)0x00000020)

#define NVIC_IABR2_NVIC_RES85_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_RES85_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_RES85_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_I2C4_MASK  ((uint32_t)0x00000040)
#define NVIC_IABR2_R_NVIC_I2C4_BIT   (6)
#define NVIC_IABR2_R_NVIC_I2C4_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_I2C4_EN    ((uint32_t)0x00000040)

#define NVIC_IABR2_NVIC_I2C4_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_I2C4_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_I2C4_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_I2C5_MASK  ((uint32_t)0x00000080)
#define NVIC_IABR2_R_NVIC_I2C5_BIT   (7)
#define NVIC_IABR2_R_NVIC_I2C5_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_I2C5_EN    ((uint32_t)0x00000080)

#define NVIC_IABR2_NVIC_I2C5_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_I2C5_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_I2C5_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOM_MASK    ((uint32_t)0x00000100)
#define NVIC_IABR2_R_NVIC_GPIOM_BIT     (8)
#define NVIC_IABR2_R_NVIC_GPIOM_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOM_EN      ((uint32_t)0x00000100)

#define NVIC_IABR2_NVIC_GPIOM_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOM_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_GPION_MASK    ((uint32_t)0x00000200)
#define NVIC_IABR2_R_NVIC_GPION_BIT     (9)
#define NVIC_IABR2_R_NVIC_GPION_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPION_EN      ((uint32_t)0x00000200)

#define NVIC_IABR2_NVIC_GPION_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPION_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPION_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400)
#define NVIC_IABR2_R_NVIC_RES90_BIT     (10)
#define NVIC_IABR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400)

#define NVIC_IABR2_NVIC_RES90_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_RES90_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_RES90_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP1_EPI_IN_MASK ((uint32_t)0x00000800)
#define NVIC_IABR2_R_NVIC_GPIOP1_EPI_IN_BIT  (11)
#define NVIC_IABR2_R_NVIC_GPIOP1_EPI_IN_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP1_EPI_IN_EN   ((uint32_t)0x00000800)

#define NVIC_IABR2_NVIC_GPIOP1_EPI_IN_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP1_EPI_IN_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP1_EPI_IN_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP_MASK    ((uint32_t)0x00001000)
#define NVIC_IABR2_R_NVIC_GPIOP_BIT     (12)
#define NVIC_IABR2_R_NVIC_GPIOP_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP_EN      ((uint32_t)0x00001000)

#define NVIC_IABR2_NVIC_GPIOP_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_GPIOP1_MASK    ((uint32_t)0x00002000)
#define NVIC_IABR2_R_NVIC_GPIOP1_BIT     (13)
#define NVIC_IABR2_R_NVIC_GPIOP1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP1_EN      ((uint32_t)0x00002000)

#define NVIC_IABR2_NVIC_GPIOP1_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP1_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP2_MASK    ((uint32_t)0x00004000)
#define NVIC_IABR2_R_NVIC_GPIOP2_BIT     (14)
#define NVIC_IABR2_R_NVIC_GPIOP2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP2_EN      ((uint32_t)0x00004000)

#define NVIC_IABR2_NVIC_GPIOP2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP3_MASK    ((uint32_t)0x00008000)
#define NVIC_IABR2_R_NVIC_GPIOP3_BIT     (15)
#define NVIC_IABR2_R_NVIC_GPIOP3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP3_EN      ((uint32_t)0x00008000)

#define NVIC_IABR2_NVIC_GPIOP3_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP3_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP4_MASK    ((uint32_t)0x00010000)
#define NVIC_IABR2_R_NVIC_GPIOP4_BIT     (16)
#define NVIC_IABR2_R_NVIC_GPIOP4_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP4_EN      ((uint32_t)0x00010000)

#define NVIC_IABR2_NVIC_GPIOP4_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP4_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP4_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP5_MASK    ((uint32_t)0x00020000)
#define NVIC_IABR2_R_NVIC_GPIOP5_BIT     (17)
#define NVIC_IABR2_R_NVIC_GPIOP5_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP5_EN      ((uint32_t)0x00020000)

#define NVIC_IABR2_NVIC_GPIOP5_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP5_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP5_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP6_MASK    ((uint32_t)0x00040000)
#define NVIC_IABR2_R_NVIC_GPIOP6_BIT     (18)
#define NVIC_IABR2_R_NVIC_GPIOP6_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP6_EN      ((uint32_t)0x00040000)

#define NVIC_IABR2_NVIC_GPIOP6_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP6_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP6_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOP7_MASK    ((uint32_t)0x00080000)
#define NVIC_IABR2_R_NVIC_GPIOP7_BIT     (19)
#define NVIC_IABR2_R_NVIC_GPIOP7_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOP7_EN      ((uint32_t)0x00080000)

#define NVIC_IABR2_NVIC_GPIOP7_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOP7_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOP7_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ_MASK   ((uint32_t)0x00100000)
#define NVIC_IABR2_R_NVIC_GPIOQ_BIT    (20)
#define NVIC_IABR2_R_NVIC_GPIOQ_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ_EN     ((uint32_t)0x00100000)

#define NVIC_IABR2_NVIC_GPIOQ_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ1_MASK   ((uint32_t)0x00200000)
#define NVIC_IABR2_R_NVIC_GPIOQ1_BIT    (21)
#define NVIC_IABR2_R_NVIC_GPIOQ1_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ1_EN     ((uint32_t)0x00200000)

#define NVIC_IABR2_NVIC_GPIOQ1_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00400000)
#define NVIC_IABR2_R_NVIC_GPIOQ2_BIT    (22)
#define NVIC_IABR2_R_NVIC_GPIOQ2_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ2_EN     ((uint32_t)0x00400000)

#define NVIC_IABR2_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ2_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ2_EN       ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_GPIOQ3_MASK   ((uint32_t)0x00800000)
#define NVIC_IABR2_R_NVIC_GPIOQ3_BIT    (23)
#define NVIC_IABR2_R_NVIC_GPIOQ3_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ3_EN     ((uint32_t)0x00800000)

#define NVIC_IABR2_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ3_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ3_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ4_MASK   ((uint32_t)0x01000000)
#define NVIC_IABR2_R_NVIC_GPIOQ4_BIT    (24)
#define NVIC_IABR2_R_NVIC_GPIOQ4_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ4_EN     ((uint32_t)0x01000000)

#define NVIC_IABR2_NVIC_GPIOQ4_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ4_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ4_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ5_MASK   ((uint32_t)0x02000000)
#define NVIC_IABR2_R_NVIC_GPIOQ5_BIT    (25)
#define NVIC_IABR2_R_NVIC_GPIOQ5_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ5_EN     ((uint32_t)0x02000000)

#define NVIC_IABR2_NVIC_GPIOQ5_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ5_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ5_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x04000000)
#define NVIC_IABR2_R_NVIC_GPIOQ6_BIT    (26)
#define NVIC_IABR2_R_NVIC_GPIOQ6_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ6_EN     ((uint32_t)0x04000000)

#define NVIC_IABR2_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ6_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ6_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_GPIOQ7_MASK   ((uint32_t)0x08000000)
#define NVIC_IABR2_R_NVIC_GPIOQ7_BIT    (27)
#define NVIC_IABR2_R_NVIC_GPIOQ7_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_GPIOQ7_EN     ((uint32_t)0x08000000)

#define NVIC_IABR2_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_GPIOQ7_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_GPIOQ7_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_RES108_MASK  ((uint32_t)0x10000000)
#define NVIC_IABR2_R_NVIC_RES108_BIT   (28)
#define NVIC_IABR2_R_NVIC_RES108_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_RES108_EN    ((uint32_t)0x10000000)

#define NVIC_IABR2_NVIC_RES108_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_RES108_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_RES108_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_RES109_MASK  ((uint32_t)0x20000000)
#define NVIC_IABR2_R_NVIC_RES109_BIT   (29)
#define NVIC_IABR2_R_NVIC_RES109_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_RES109_EN    ((uint32_t)0x20000000)

#define NVIC_IABR2_NVIC_RES109_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_RES109_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_RES109_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_SHA_MD5_MASK ((uint32_t)0x40000000)
#define NVIC_IABR2_R_NVIC_SHA_MD5_BIT  (30)
#define NVIC_IABR2_R_NVIC_SHA_MD5_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SHA_MD5_EN   ((uint32_t)0x40000000)

#define NVIC_IABR2_NVIC_SHA_MD5_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SHA_MD5_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SHA_MD5_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_AES_MASK ((uint32_t)0x80000000)
#define NVIC_IABR2_R_NVIC_AES_BIT  (31)
#define NVIC_IABR2_R_NVIC_AES_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_AES_EN   ((uint32_t)0x80000000)

#define NVIC_IABR2_NVIC_AES_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_AES_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_AES_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISER3_OFFSET)))
#define NVIC_ISER3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER3_OFFSET)))

//--------
#define NVIC_ISER3_R_NVIC_DES_MASK ((uint32_t)0x00000001)
#define NVIC_ISER3_R_NVIC_DES_BIT  (0)
#define NVIC_ISER3_R_NVIC_DES_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_DES_EN   ((uint32_t)0x00000001)

#define NVIC_ISER3_NVIC_DES_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_DES_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_DES_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES113_MASK ((uint32_t)0x00000002)
#define NVIC_ISER3_R_NVIC_RES113_BIT  (1)
#define NVIC_ISER3_R_NVIC_RES113_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES113_EN   ((uint32_t)0x00000002)

#define NVIC_ISER3_NVIC_RES113_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES113_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES113_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_TIMER6A_MASK ((uint32_t)0x00000004)
#define NVIC_ISER3_R_NVIC_TIMER6A_BIT  (2)
#define NVIC_ISER3_R_NVIC_TIMER6A_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_TIMER6A_EN   ((uint32_t)0x00000004)

#define NVIC_ISER3_NVIC_TIMER6A_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_TIMER6A_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_TIMER6A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_TIMER6B_MASK ((uint32_t)0x00000008)
#define NVIC_ISER3_R_NVIC_TIMER6B_BIT  (3)
#define NVIC_ISER3_R_NVIC_TIMER6B_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_TIMER6B_EN   ((uint32_t)0x00000008)

#define NVIC_ISER3_NVIC_TIMER6B_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_TIMER6B_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_TIMER6B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_TIMER7A_MASK ((uint32_t)0x00000010)
#define NVIC_ISER3_R_NVIC_TIMER7A_BIT  (4)
#define NVIC_ISER3_R_NVIC_TIMER7A_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_TIMER7A_EN   ((uint32_t)0x00000010)

#define NVIC_ISER3_NVIC_TIMER7A_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_TIMER7A_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_TIMER7A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_TIMER7B_MASK ((uint32_t)0x00000020)
#define NVIC_ISER3_R_NVIC_TIMER7B_BIT  (5)
#define NVIC_ISER3_R_NVIC_TIMER7B_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_TIMER7B_EN   ((uint32_t)0x00000020)

#define NVIC_ISER3_NVIC_TIMER7B_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_TIMER7B_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_TIMER7B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_I2C6_MASK ((uint32_t)0x00000040)
#define NVIC_ISER3_R_NVIC_I2C6_BIT  (6)
#define NVIC_ISER3_R_NVIC_I2C6_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_I2C6_EN   ((uint32_t)0x00000040)

#define NVIC_ISER3_NVIC_I2C6_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_I2C6_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_I2C6_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_I2C7_MASK ((uint32_t)0x00000080)
#define NVIC_ISER3_R_NVIC_I2C7_BIT  (7)
#define NVIC_ISER3_R_NVIC_I2C7_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_I2C7_EN   ((uint32_t)0x00000080)

#define NVIC_ISER3_NVIC_I2C7_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_I2C7_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_I2C7_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES120_MASK ((uint32_t)0x00000100)
#define NVIC_ISER3_R_NVIC_RES120_BIT  (8)
#define NVIC_ISER3_R_NVIC_RES120_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES120_EN   ((uint32_t)0x00000100)

#define NVIC_ISER3_NVIC_RES120_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES120_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES120_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES121_MASK ((uint32_t)0x00000200)
#define NVIC_ISER3_R_NVIC_RES121_BIT  (9)
#define NVIC_ISER3_R_NVIC_RES121_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES121_EN   ((uint32_t)0x00000200)

#define NVIC_ISER3_NVIC_RES121_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES121_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES121_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES122_MASK ((uint32_t)0x00000400)
#define NVIC_ISER3_R_NVIC_RES122_BIT  (10)
#define NVIC_ISER3_R_NVIC_RES122_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES122_EN   ((uint32_t)0x00000400)

#define NVIC_ISER3_NVIC_RES122_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES122_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES122_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES123_MASK ((uint32_t)0x00000800)
#define NVIC_ISER3_R_NVIC_RES123_BIT  (11)
#define NVIC_ISER3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES123_EN   ((uint32_t)0x00000800)

#define NVIC_ISER3_NVIC_RES123_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES123_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES123_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES124_MASK ((uint32_t)0x00001000)
#define NVIC_ISER3_R_NVIC_RES124_BIT  (12)
#define NVIC_ISER3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES124_EN   ((uint32_t)0x00001000)

#define NVIC_ISER3_NVIC_RES124_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES124_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES124_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_I2C8_MASK ((uint32_t)0x00002000)
#define NVIC_ISER3_R_NVIC_I2C8_BIT  (13)
#define NVIC_ISER3_R_NVIC_I2C8_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_I2C8_EN   ((uint32_t)0x00002000)

#define NVIC_ISER3_NVIC_I2C8_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_I2C8_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_I2C8_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_I2C9_MASK ((uint32_t)0x00004000)
#define NVIC_ISER3_R_NVIC_I2C9_BIT  (14)
#define NVIC_ISER3_R_NVIC_I2C9_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_I2C9_EN   ((uint32_t)0x00004000)

#define NVIC_ISER3_NVIC_I2C9_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_I2C9_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_I2C9_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES127_MASK ((uint32_t)0x00008000)
#define NVIC_ISER3_R_NVIC_RES127_BIT  (15)
#define NVIC_ISER3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES127_EN   ((uint32_t)0x00008000)

#define NVIC_ISER3_NVIC_RES127_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES127_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES127_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES128_MASK ((uint32_t)0x00010000)
#define NVIC_ISER3_R_NVIC_RES128_BIT  (16)
#define NVIC_ISER3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES128_EN   ((uint32_t)0x00010000)

#define NVIC_ISER3_NVIC_RES128_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES128_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES128_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_RES129_MASK ((uint32_t)0x00020000)
#define NVIC_ISER3_R_NVIC_RES129_BIT  (17)
#define NVIC_ISER3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_RES129_EN   ((uint32_t)0x00020000)

#define NVIC_ISER3_NVIC_RES129_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_RES129_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_RES129_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICER3_OFFSET)))
#define NVIC_ICER3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER3_OFFSET)))

//--------
#define NVIC_ICER3_R_NVIC_DES_MASK ((uint32_t)0x00000001)
#define NVIC_ICER3_R_NVIC_DES_BIT  (0)
#define NVIC_ICER3_R_NVIC_DES_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_DES_EN   ((uint32_t)0x00000001)

#define NVIC_ICER3_NVIC_DES_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_DES_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_DES_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES113_MASK ((uint32_t)0x00000002)
#define NVIC_ICER3_R_NVIC_RES113_BIT  (1)
#define NVIC_ICER3_R_NVIC_RES113_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES113_EN   ((uint32_t)0x00000002)

#define NVIC_ICER3_NVIC_RES113_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES113_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES113_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_TIMER6A_MASK ((uint32_t)0x00000004)
#define NVIC_ICER3_R_NVIC_TIMER6A_BIT  (2)
#define NVIC_ICER3_R_NVIC_TIMER6A_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_TIMER6A_EN   ((uint32_t)0x00000004)

#define NVIC_ICER3_NVIC_TIMER6A_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_TIMER6A_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_TIMER6A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_TIMER6B_MASK ((uint32_t)0x00000008)
#define NVIC_ICER3_R_NVIC_TIMER6B_BIT  (3)
#define NVIC_ICER3_R_NVIC_TIMER6B_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_TIMER6B_EN   ((uint32_t)0x00000008)

#define NVIC_ICER3_NVIC_TIMER6B_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_TIMER6B_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_TIMER6B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_TIMER7A_MASK ((uint32_t)0x00000010)
#define NVIC_ICER3_R_NVIC_TIMER7A_BIT  (4)
#define NVIC_ICER3_R_NVIC_TIMER7A_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_TIMER7A_EN   ((uint32_t)0x00000010)

#define NVIC_ICER3_NVIC_TIMER7A_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_TIMER7A_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_TIMER7A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_TIMER7B_MASK ((uint32_t)0x00000020)
#define NVIC_ICER3_R_NVIC_TIMER7B_BIT  (5)
#define NVIC_ICER3_R_NVIC_TIMER7B_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_TIMER7B_EN   ((uint32_t)0x00000020)

#define NVIC_ICER3_NVIC_TIMER7B_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_TIMER7B_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_TIMER7B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_I2C6_MASK ((uint32_t)0x00000040)
#define NVIC_ICER3_R_NVIC_I2C6_BIT  (6)
#define NVIC_ICER3_R_NVIC_I2C6_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_I2C6_EN   ((uint32_t)0x00000040)

#define NVIC_ICER3_NVIC_I2C6_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_I2C6_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_I2C6_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_I2C7_MASK ((uint32_t)0x00000080)
#define NVIC_ICER3_R_NVIC_I2C7_BIT  (7)
#define NVIC_ICER3_R_NVIC_I2C7_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_I2C7_EN   ((uint32_t)0x00000080)

#define NVIC_ICER3_NVIC_I2C7_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_I2C7_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_I2C7_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES120_MASK ((uint32_t)0x00000100)
#define NVIC_ICER3_R_NVIC_RES120_BIT  (8)
#define NVIC_ICER3_R_NVIC_RES120_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES120_EN   ((uint32_t)0x00000100)

#define NVIC_ICER3_NVIC_RES120_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES120_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES120_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES121_MASK ((uint32_t)0x00000200)
#define NVIC_ICER3_R_NVIC_RES121_BIT  (9)
#define NVIC_ICER3_R_NVIC_RES121_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES121_EN   ((uint32_t)0x00000200)

#define NVIC_ICER3_NVIC_RES121_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES121_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES121_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES122_MASK ((uint32_t)0x00000400)
#define NVIC_ICER3_R_NVIC_RES122_BIT  (10)
#define NVIC_ICER3_R_NVIC_RES122_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES122_EN   ((uint32_t)0x00000400)

#define NVIC_ICER3_NVIC_RES122_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES122_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES122_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES123_MASK ((uint32_t)0x00000800)
#define NVIC_ICER3_R_NVIC_RES123_BIT  (11)
#define NVIC_ICER3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES123_EN   ((uint32_t)0x00000800)

#define NVIC_ICER3_NVIC_RES123_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES123_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES123_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES124_MASK ((uint32_t)0x00001000)
#define NVIC_ICER3_R_NVIC_RES124_BIT  (12)
#define NVIC_ICER3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES124_EN   ((uint32_t)0x00001000)

#define NVIC_ICER3_NVIC_RES124_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES124_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES124_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_I2C8_MASK ((uint32_t)0x00002000)
#define NVIC_ICER3_R_NVIC_I2C8_BIT  (13)
#define NVIC_ICER3_R_NVIC_I2C8_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_I2C8_EN   ((uint32_t)0x00002000)

#define NVIC_ICER3_NVIC_I2C8_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_I2C8_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_I2C8_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_I2C9_MASK ((uint32_t)0x00004000)
#define NVIC_ICER3_R_NVIC_I2C9_BIT  (14)
#define NVIC_ICER3_R_NVIC_I2C9_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_I2C9_EN   ((uint32_t)0x00004000)

#define NVIC_ICER3_NVIC_I2C9_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_I2C9_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_I2C9_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES127_MASK ((uint32_t)0x00008000)
#define NVIC_ICER3_R_NVIC_RES127_BIT  (15)
#define NVIC_ICER3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES127_EN   ((uint32_t)0x00008000)

#define NVIC_ICER3_NVIC_RES127_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES127_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES127_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES128_MASK ((uint32_t)0x00010000)
#define NVIC_ICER3_R_NVIC_RES128_BIT  (16)
#define NVIC_ICER3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES128_EN   ((uint32_t)0x00010000)

#define NVIC_ICER3_NVIC_RES128_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES128_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES128_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_RES129_MASK ((uint32_t)0x00020000)
#define NVIC_ICER3_R_NVIC_RES129_BIT  (17)
#define NVIC_ICER3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_RES129_EN   ((uint32_t)0x00020000)

#define NVIC_ICER3_NVIC_RES129_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_RES129_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_RES129_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISPR3_OFFSET)))
#define NVIC_ISPR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR3_OFFSET)))

//--------
#define NVIC_ISPR3_R_NVIC_DES_MASK ((uint32_t)0x00000001)
#define NVIC_ISPR3_R_NVIC_DES_BIT  (0)
#define NVIC_ISPR3_R_NVIC_DES_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_DES_EN   ((uint32_t)0x00000001)

#define NVIC_ISPR3_NVIC_DES_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_DES_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_DES_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES113_MASK ((uint32_t)0x00000002)
#define NVIC_ISPR3_R_NVIC_RES113_BIT  (1)
#define NVIC_ISPR3_R_NVIC_RES113_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES113_EN   ((uint32_t)0x00000002)

#define NVIC_ISPR3_NVIC_RES113_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES113_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES113_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_TIMER6A_MASK ((uint32_t)0x00000004)
#define NVIC_ISPR3_R_NVIC_TIMER6A_BIT  (2)
#define NVIC_ISPR3_R_NVIC_TIMER6A_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_TIMER6A_EN   ((uint32_t)0x00000004)

#define NVIC_ISPR3_NVIC_TIMER6A_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_TIMER6A_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_TIMER6A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_TIMER6B_MASK ((uint32_t)0x00000008)
#define NVIC_ISPR3_R_NVIC_TIMER6B_BIT  (3)
#define NVIC_ISPR3_R_NVIC_TIMER6B_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_TIMER6B_EN   ((uint32_t)0x00000008)

#define NVIC_ISPR3_NVIC_TIMER6B_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_TIMER6B_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_TIMER6B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_TIMER7A_MASK ((uint32_t)0x00000010)
#define NVIC_ISPR3_R_NVIC_TIMER7A_BIT  (4)
#define NVIC_ISPR3_R_NVIC_TIMER7A_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_TIMER7A_EN   ((uint32_t)0x00000010)

#define NVIC_ISPR3_NVIC_TIMER7A_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_TIMER7A_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_TIMER7A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_TIMER7B_MASK ((uint32_t)0x00000020)
#define NVIC_ISPR3_R_NVIC_TIMER7B_BIT  (5)
#define NVIC_ISPR3_R_NVIC_TIMER7B_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_TIMER7B_EN   ((uint32_t)0x00000020)

#define NVIC_ISPR3_NVIC_TIMER7B_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_TIMER7B_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_TIMER7B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_I2C6_MASK ((uint32_t)0x00000040)
#define NVIC_ISPR3_R_NVIC_I2C6_BIT  (6)
#define NVIC_ISPR3_R_NVIC_I2C6_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_I2C6_EN   ((uint32_t)0x00000040)

#define NVIC_ISPR3_NVIC_I2C6_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_I2C6_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_I2C6_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_I2C7_MASK ((uint32_t)0x00000080)
#define NVIC_ISPR3_R_NVIC_I2C7_BIT  (7)
#define NVIC_ISPR3_R_NVIC_I2C7_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_I2C7_EN   ((uint32_t)0x00000080)

#define NVIC_ISPR3_NVIC_I2C7_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_I2C7_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_I2C7_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES120_MASK ((uint32_t)0x00000100)
#define NVIC_ISPR3_R_NVIC_RES120_BIT  (8)
#define NVIC_ISPR3_R_NVIC_RES120_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES120_EN   ((uint32_t)0x00000100)

#define NVIC_ISPR3_NVIC_RES120_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES120_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES120_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES121_MASK ((uint32_t)0x00000200)
#define NVIC_ISPR3_R_NVIC_RES121_BIT  (9)
#define NVIC_ISPR3_R_NVIC_RES121_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES121_EN   ((uint32_t)0x00000200)

#define NVIC_ISPR3_NVIC_RES121_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES121_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES121_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES122_MASK ((uint32_t)0x00000400)
#define NVIC_ISPR3_R_NVIC_RES122_BIT  (10)
#define NVIC_ISPR3_R_NVIC_RES122_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES122_EN   ((uint32_t)0x00000400)

#define NVIC_ISPR3_NVIC_RES122_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES122_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES122_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800)
#define NVIC_ISPR3_R_NVIC_RES123_BIT  (11)
#define NVIC_ISPR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800)

#define NVIC_ISPR3_NVIC_RES123_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES123_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES123_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000)
#define NVIC_ISPR3_R_NVIC_RES124_BIT  (12)
#define NVIC_ISPR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000)

#define NVIC_ISPR3_NVIC_RES124_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES124_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES124_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_I2C8_MASK ((uint32_t)0x00002000)
#define NVIC_ISPR3_R_NVIC_I2C8_BIT  (13)
#define NVIC_ISPR3_R_NVIC_I2C8_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_I2C8_EN   ((uint32_t)0x00002000)

#define NVIC_ISPR3_NVIC_I2C8_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_I2C8_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_I2C8_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_I2C9_MASK ((uint32_t)0x00004000)
#define NVIC_ISPR3_R_NVIC_I2C9_BIT  (14)
#define NVIC_ISPR3_R_NVIC_I2C9_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_I2C9_EN   ((uint32_t)0x00004000)

#define NVIC_ISPR3_NVIC_I2C9_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_I2C9_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_I2C9_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000)
#define NVIC_ISPR3_R_NVIC_RES127_BIT  (15)
#define NVIC_ISPR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000)

#define NVIC_ISPR3_NVIC_RES127_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES127_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES127_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000)
#define NVIC_ISPR3_R_NVIC_RES128_BIT  (16)
#define NVIC_ISPR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000)

#define NVIC_ISPR3_NVIC_RES128_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES128_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES128_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000)
#define NVIC_ISPR3_R_NVIC_RES129_BIT  (17)
#define NVIC_ISPR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000)

#define NVIC_ISPR3_NVIC_RES129_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_RES129_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_RES129_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICPR3_OFFSET)))
#define NVIC_ICPR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR3_OFFSET)))


//--------
#define NVIC_ICPR3_R_NVIC_DES_MASK ((uint32_t)0x00000001)
#define NVIC_ICPR3_R_NVIC_DES_BIT  (0)
#define NVIC_ICPR3_R_NVIC_DES_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_DES_EN   ((uint32_t)0x00000001)

#define NVIC_ICPR3_NVIC_DES_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_DES_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_DES_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES113_MASK ((uint32_t)0x00000002)
#define NVIC_ICPR3_R_NVIC_RES113_BIT  (1)
#define NVIC_ICPR3_R_NVIC_RES113_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES113_EN   ((uint32_t)0x00000002)

#define NVIC_ICPR3_NVIC_RES113_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES113_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES113_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_TIMER6A_MASK ((uint32_t)0x00000004)
#define NVIC_ICPR3_R_NVIC_TIMER6A_BIT  (2)
#define NVIC_ICPR3_R_NVIC_TIMER6A_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_TIMER6A_EN   ((uint32_t)0x00000004)

#define NVIC_ICPR3_NVIC_TIMER6A_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_TIMER6A_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_TIMER6A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_TIMER6B_MASK ((uint32_t)0x00000008)
#define NVIC_ICPR3_R_NVIC_TIMER6B_BIT  (3)
#define NVIC_ICPR3_R_NVIC_TIMER6B_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_TIMER6B_EN   ((uint32_t)0x00000008)

#define NVIC_ICPR3_NVIC_TIMER6B_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_TIMER6B_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_TIMER6B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_TIMER7A_MASK ((uint32_t)0x00000010)
#define NVIC_ICPR3_R_NVIC_TIMER7A_BIT  (4)
#define NVIC_ICPR3_R_NVIC_TIMER7A_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_TIMER7A_EN   ((uint32_t)0x00000010)

#define NVIC_ICPR3_NVIC_TIMER7A_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_TIMER7A_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_TIMER7A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_TIMER7B_MASK ((uint32_t)0x00000020)
#define NVIC_ICPR3_R_NVIC_TIMER7B_BIT  (5)
#define NVIC_ICPR3_R_NVIC_TIMER7B_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_TIMER7B_EN   ((uint32_t)0x00000020)

#define NVIC_ICPR3_NVIC_TIMER7B_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_TIMER7B_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_TIMER7B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_I2C6_MASK ((uint32_t)0x00000040)
#define NVIC_ICPR3_R_NVIC_I2C6_BIT  (6)
#define NVIC_ICPR3_R_NVIC_I2C6_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_I2C6_EN   ((uint32_t)0x00000040)

#define NVIC_ICPR3_NVIC_I2C6_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_I2C6_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_I2C6_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_I2C7_MASK ((uint32_t)0x00000080)
#define NVIC_ICPR3_R_NVIC_I2C7_BIT  (7)
#define NVIC_ICPR3_R_NVIC_I2C7_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_I2C7_EN   ((uint32_t)0x00000080)

#define NVIC_ICPR3_NVIC_I2C7_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_I2C7_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_I2C7_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES120_MASK ((uint32_t)0x00000100)
#define NVIC_ICPR3_R_NVIC_RES120_BIT  (8)
#define NVIC_ICPR3_R_NVIC_RES120_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES120_EN   ((uint32_t)0x00000100)

#define NVIC_ICPR3_NVIC_RES120_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES120_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES120_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES121_MASK ((uint32_t)0x00000200)
#define NVIC_ICPR3_R_NVIC_RES121_BIT  (9)
#define NVIC_ICPR3_R_NVIC_RES121_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES121_EN   ((uint32_t)0x00000200)

#define NVIC_ICPR3_NVIC_RES121_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES121_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES121_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES122_MASK ((uint32_t)0x00000400)
#define NVIC_ICPR3_R_NVIC_RES122_BIT  (10)
#define NVIC_ICPR3_R_NVIC_RES122_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES122_EN   ((uint32_t)0x00000400)

#define NVIC_ICPR3_NVIC_RES122_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES122_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES122_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800)
#define NVIC_ICPR3_R_NVIC_RES123_BIT  (11)
#define NVIC_ICPR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800)

#define NVIC_ICPR3_NVIC_RES123_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES123_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES123_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000)
#define NVIC_ICPR3_R_NVIC_RES124_BIT  (12)
#define NVIC_ICPR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000)

#define NVIC_ICPR3_NVIC_RES124_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES124_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES124_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_I2C8_MASK ((uint32_t)0x00002000)
#define NVIC_ICPR3_R_NVIC_I2C8_BIT  (13)
#define NVIC_ICPR3_R_NVIC_I2C8_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_I2C8_EN   ((uint32_t)0x00002000)

#define NVIC_ICPR3_NVIC_I2C8_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_I2C8_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_I2C8_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_I2C9_MASK ((uint32_t)0x00004000)
#define NVIC_ICPR3_R_NVIC_I2C9_BIT  (14)
#define NVIC_ICPR3_R_NVIC_I2C9_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_I2C9_EN   ((uint32_t)0x00004000)

#define NVIC_ICPR3_NVIC_I2C9_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_I2C9_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_I2C9_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000)
#define NVIC_ICPR3_R_NVIC_RES127_BIT  (15)
#define NVIC_ICPR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000)

#define NVIC_ICPR3_NVIC_RES127_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES127_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES127_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000)
#define NVIC_ICPR3_R_NVIC_RES128_BIT  (16)
#define NVIC_ICPR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000)

#define NVIC_ICPR3_NVIC_RES128_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES128_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES128_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000)
#define NVIC_ICPR3_R_NVIC_RES129_BIT  (17)
#define NVIC_ICPR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000)

#define NVIC_ICPR3_NVIC_RES129_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_RES129_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_RES129_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_IABR3_OFFSET)))
#define NVIC_IABR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR3_OFFSET)))


//--------
#define NVIC_IABR3_R_NVIC_DES_MASK ((uint32_t)0x00000001)
#define NVIC_IABR3_R_NVIC_DES_BIT  (0)
#define NVIC_IABR3_R_NVIC_DES_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_DES_EN   ((uint32_t)0x00000001)

#define NVIC_IABR3_NVIC_DES_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_DES_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_DES_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES113_MASK ((uint32_t)0x00000002)
#define NVIC_IABR3_R_NVIC_RES113_BIT  (1)
#define NVIC_IABR3_R_NVIC_RES113_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES113_EN   ((uint32_t)0x00000002)

#define NVIC_IABR3_NVIC_RES113_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES113_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES113_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_TIMER6A_MASK ((uint32_t)0x00000004)
#define NVIC_IABR3_R_NVIC_TIMER6A_BIT  (2)
#define NVIC_IABR3_R_NVIC_TIMER6A_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_TIMER6A_EN   ((uint32_t)0x00000004)

#define NVIC_IABR3_NVIC_TIMER6A_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_TIMER6A_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_TIMER6A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_TIMER6B_MASK ((uint32_t)0x00000008)
#define NVIC_IABR3_R_NVIC_TIMER6B_BIT  (3)
#define NVIC_IABR3_R_NVIC_TIMER6B_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_TIMER6B_EN   ((uint32_t)0x00000008)

#define NVIC_IABR3_NVIC_TIMER6B_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_TIMER6B_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_TIMER6B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_TIMER7A_MASK ((uint32_t)0x00000010)
#define NVIC_IABR3_R_NVIC_TIMER7A_BIT  (4)
#define NVIC_IABR3_R_NVIC_TIMER7A_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_TIMER7A_EN   ((uint32_t)0x00000010)

#define NVIC_IABR3_NVIC_TIMER7A_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_TIMER7A_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_TIMER7A_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_TIMER7B_MASK ((uint32_t)0x00000020)
#define NVIC_IABR3_R_NVIC_TIMER7B_BIT  (5)
#define NVIC_IABR3_R_NVIC_TIMER7B_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_TIMER7B_EN   ((uint32_t)0x00000020)

#define NVIC_IABR3_NVIC_TIMER7B_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_TIMER7B_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_TIMER7B_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_I2C6_MASK ((uint32_t)0x00000040)
#define NVIC_IABR3_R_NVIC_I2C6_BIT  (6)
#define NVIC_IABR3_R_NVIC_I2C6_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_I2C6_EN   ((uint32_t)0x00000040)

#define NVIC_IABR3_NVIC_I2C6_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_I2C6_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_I2C6_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_I2C7_MASK ((uint32_t)0x00000080)
#define NVIC_IABR3_R_NVIC_I2C7_BIT  (7)
#define NVIC_IABR3_R_NVIC_I2C7_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_I2C7_EN   ((uint32_t)0x00000080)

#define NVIC_IABR3_NVIC_I2C7_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_I2C7_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_I2C7_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES120_MASK ((uint32_t)0x00000100)
#define NVIC_IABR3_R_NVIC_RES120_BIT  (8)
#define NVIC_IABR3_R_NVIC_RES120_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES120_EN   ((uint32_t)0x00000100)

#define NVIC_IABR3_NVIC_RES120_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES120_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES120_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES121_MASK ((uint32_t)0x00000200)
#define NVIC_IABR3_R_NVIC_RES121_BIT  (9)
#define NVIC_IABR3_R_NVIC_RES121_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES121_EN   ((uint32_t)0x00000200)

#define NVIC_IABR3_NVIC_RES121_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES121_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES121_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES122_MASK ((uint32_t)0x00000400)
#define NVIC_IABR3_R_NVIC_RES122_BIT  (10)
#define NVIC_IABR3_R_NVIC_RES122_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES122_EN   ((uint32_t)0x00000400)

#define NVIC_IABR3_NVIC_RES122_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES122_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES122_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800)
#define NVIC_IABR3_R_NVIC_RES123_BIT  (11)
#define NVIC_IABR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800)

#define NVIC_IABR3_NVIC_RES123_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES123_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES123_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000)
#define NVIC_IABR3_R_NVIC_RES124_BIT  (12)
#define NVIC_IABR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000)

#define NVIC_IABR3_NVIC_RES124_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES124_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES124_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_I2C8_MASK ((uint32_t)0x00002000)
#define NVIC_IABR3_R_NVIC_I2C8_BIT  (13)
#define NVIC_IABR3_R_NVIC_I2C8_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_I2C8_EN   ((uint32_t)0x00002000)

#define NVIC_IABR3_NVIC_I2C8_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_I2C8_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_I2C8_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_I2C9_MASK ((uint32_t)0x00004000)
#define NVIC_IABR3_R_NVIC_I2C9_BIT  (14)
#define NVIC_IABR3_R_NVIC_I2C9_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_I2C9_EN   ((uint32_t)0x00004000)

#define NVIC_IABR3_NVIC_I2C9_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_I2C9_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_I2C9_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000)
#define NVIC_IABR3_R_NVIC_RES127_BIT  (15)
#define NVIC_IABR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000)

#define NVIC_IABR3_NVIC_RES127_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES127_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES127_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000)
#define NVIC_IABR3_R_NVIC_RES128_BIT  (16)
#define NVIC_IABR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000)

#define NVIC_IABR3_NVIC_RES128_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES128_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES128_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000)
#define NVIC_IABR3_R_NVIC_RES129_BIT  (17)
#define NVIC_IABR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000)

#define NVIC_IABR3_NVIC_RES129_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_RES129_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_RES129_EN     ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_IPRb            (((IPRb__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPRw            (((IPRw__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR0 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR0            (((IPR0_TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPR0_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR0_OFFSET)))

//--------
#define NVIC_IPR0_R_NVIC_GPIOA_MASK     ((uint32_t)0x000000E0)
#define NVIC_IPR0_R_NVIC_GPIOA_BIT      (5)
#define NVIC_IPR0_R_NVIC_GPIOA_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_GPIOA_IP1      ((uint32_t)0x00000020)
#define NVIC_IPR0_R_NVIC_GPIOA_IP2      ((uint32_t)0x00000040)
#define NVIC_IPR0_R_NVIC_GPIOA_IP3      ((uint32_t)0x00000060)
#define NVIC_IPR0_R_NVIC_GPIOA_IP4      ((uint32_t)0x00000080)
#define NVIC_IPR0_R_NVIC_GPIOA_IP5      ((uint32_t)0x000000A0)
#define NVIC_IPR0_R_NVIC_GPIOA_IP6      ((uint32_t)0x000000C0)
#define NVIC_IPR0_R_NVIC_GPIOA_IP7      ((uint32_t)0x000000E0)

#define NVIC_IPR0_NVIC_GPIOA_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_GPIOA_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_GPIOA_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_GPIOA_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_GPIOA_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_GPIOA_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_GPIOA_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_GPIOA_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_GPIOA_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_GPIOB_MASK     ((uint32_t)0x0000E000)
#define NVIC_IPR0_R_NVIC_GPIOB_BIT      (13)
#define NVIC_IPR0_R_NVIC_GPIOB_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP1      ((uint32_t)0x00002000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP2      ((uint32_t)0x00004000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP3      ((uint32_t)0x00006000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP4      ((uint32_t)0x00008000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP5      ((uint32_t)0x0000A000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP6      ((uint32_t)0x0000C000)
#define NVIC_IPR0_R_NVIC_GPIOB_IP7      ((uint32_t)0x0000E000)

#define NVIC_IPR0_NVIC_GPIOB_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_GPIOB_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_GPIOB_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_GPIOB_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_GPIOB_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_GPIOB_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_GPIOB_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_GPIOB_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_GPIOB_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_GPIOC_MASK    	((uint32_t)0x00E00000)
#define NVIC_IPR0_R_NVIC_GPIOC_BIT     	(21)
#define NVIC_IPR0_R_NVIC_GPIOC_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP1      ((uint32_t)0x00200000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP2      ((uint32_t)0x00400000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP3      ((uint32_t)0x00600000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP4      ((uint32_t)0x00800000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP5      ((uint32_t)0x00A00000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP6      ((uint32_t)0x00C00000)
#define NVIC_IPR0_R_NVIC_GPIOC_IP7      ((uint32_t)0x00E00000)

#define NVIC_IPR0_NVIC_GPIOC_MASK      	((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_GPIOC_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_GPIOC_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_GPIOC_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_GPIOC_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_GPIOC_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_GPIOC_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_GPIOC_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_GPIOC_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_GPIOD_MASK     ((uint32_t)0xF0000000)
#define NVIC_IPR0_R_NVIC_GPIOD_BIT      (29)
#define NVIC_IPR0_R_NVIC_GPIOD_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP1      ((uint32_t)0x10000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP2      ((uint32_t)0x20000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP3      ((uint32_t)0x30000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP4      ((uint32_t)0x40000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP5      ((uint32_t)0x50000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP6      ((uint32_t)0x60000000)
#define NVIC_IPR0_R_NVIC_GPIOD_IP7      ((uint32_t)0x70000000)

#define NVIC_IPR0_NVIC_GPIOD_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_GPIOD_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_GPIOD_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_GPIOD_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_GPIOD_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_GPIOD_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_GPIOD_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_GPIOD_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_GPIOD_IP7        ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR1 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR1            (((IPR1_TypeDef*)(NVIC_BASE+NVIC_IPR1_OFFSET)))
#define NVIC_IPR1_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR1_OFFSET)))

//--------
#define NVIC_IPR1_R_NVIC_GPIOE_MASK     ((uint32_t)0x000000E0)
#define NVIC_IPR1_R_NVIC_GPIOE_BIT      (5)
#define NVIC_IPR1_R_NVIC_GPIOE_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_GPIOE_IP1      ((uint32_t)0x00000020)
#define NVIC_IPR1_R_NVIC_GPIOE_IP2      ((uint32_t)0x00000040)
#define NVIC_IPR1_R_NVIC_GPIOE_IP3      ((uint32_t)0x00000060)
#define NVIC_IPR1_R_NVIC_GPIOE_IP4      ((uint32_t)0x00000080)
#define NVIC_IPR1_R_NVIC_GPIOE_IP5      ((uint32_t)0x000000A0)
#define NVIC_IPR1_R_NVIC_GPIOE_IP6      ((uint32_t)0x000000C0)
#define NVIC_IPR1_R_NVIC_GPIOE_IP7      ((uint32_t)0x000000E0)

#define NVIC_IPR1_NVIC_GPIOE_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_GPIOE_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_GPIOE_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_GPIOE_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_GPIOE_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_GPIOE_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_GPIOE_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_GPIOE_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_GPIOE_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR1_R_NVIC_UART0_MASK     ((uint32_t)0x0000E000)
#define NVIC_IPR1_R_NVIC_UART0_BIT      (13)
#define NVIC_IPR1_R_NVIC_UART0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_UART0_IP1      ((uint32_t)0x00002000)
#define NVIC_IPR1_R_NVIC_UART0_IP2      ((uint32_t)0x00004000)
#define NVIC_IPR1_R_NVIC_UART0_IP3      ((uint32_t)0x00006000)
#define NVIC_IPR1_R_NVIC_UART0_IP4      ((uint32_t)0x00008000)
#define NVIC_IPR1_R_NVIC_UART0_IP5      ((uint32_t)0x0000A000)
#define NVIC_IPR1_R_NVIC_UART0_IP6      ((uint32_t)0x0000C000)
#define NVIC_IPR1_R_NVIC_UART0_IP7      ((uint32_t)0x0000E000)

#define NVIC_IPR1_NVIC_UART0_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_UART0_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_UART0_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_UART0_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_UART0_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_UART0_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_UART0_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_UART0_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_UART0_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR1_R_NVIC_UART1_MASK     ((uint32_t)0x00E00000)
#define NVIC_IPR1_R_NVIC_UART1_BIT      (21)
#define NVIC_IPR1_R_NVIC_UART1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_UART1_IP1      ((uint32_t)0x00200000)
#define NVIC_IPR1_R_NVIC_UART1_IP2      ((uint32_t)0x00400000)
#define NVIC_IPR1_R_NVIC_UART1_IP3      ((uint32_t)0x00600000)
#define NVIC_IPR1_R_NVIC_UART1_IP4      ((uint32_t)0x00800000)
#define NVIC_IPR1_R_NVIC_UART1_IP5      ((uint32_t)0x00A00000)
#define NVIC_IPR1_R_NVIC_UART1_IP6      ((uint32_t)0x00C00000)
#define NVIC_IPR1_R_NVIC_UART1_IP7      ((uint32_t)0x00E00000)

#define NVIC_IPR1_NVIC_UART1_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_UART1_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_UART1_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_UART1_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_UART1_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_UART1_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_UART1_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_UART1_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_UART1_IP7        ((uint32_t)0x00000007)
//--------

//-------
#define NVIC_IPR1_R_NVIC_SSI0_MASK      ((uint32_t)0xE0000000)
#define NVIC_IPR1_R_NVIC_SSI0_BIT       (29)
#define NVIC_IPR1_R_NVIC_SSI0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP1       ((uint32_t)0x20000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP2       ((uint32_t)0x40000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP3       ((uint32_t)0x60000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP4       ((uint32_t)0x80000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP5       ((uint32_t)0xA0000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP6       ((uint32_t)0xC0000000)
#define NVIC_IPR1_R_NVIC_SSI0_IP7       ((uint32_t)0xE0000000)

#define NVIC_IPR1_NVIC_SSI0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_SSI0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_SSI0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_SSI0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_SSI0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_SSI0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_SSI0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_SSI0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_SSI0_IP7         ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR2 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR2            (((IPR2_TypeDef*)(NVIC_BASE+NVIC_IPR2_OFFSET)))
#define NVIC_IPR2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR2_OFFSET)))


//--------
#define NVIC_IPR2_R_NVIC_I2C0_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR2_R_NVIC_I2C0_BIT       (5)
#define NVIC_IPR2_R_NVIC_I2C0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_I2C0_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR2_R_NVIC_I2C0_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR2_R_NVIC_I2C0_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR2_R_NVIC_I2C0_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR2_R_NVIC_I2C0_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR2_R_NVIC_I2C0_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR2_R_NVIC_I2C0_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR2_NVIC_I2C0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_I2C0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_I2C0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_I2C0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_I2C0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_I2C0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_I2C0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_I2C0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_I2C0_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_PWM0FAULT_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_BIT   (13)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR2_NVIC_PWM0FAULT_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_PWM0GEN0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_BIT    (21)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR2_NVIC_PWM0GEN0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_PWM0GEN1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_BIT    (29)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR2_NVIC_PWM0GEN1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR3 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR3            (((IPR3_TypeDef*)(NVIC_BASE+NVIC_IPR3_OFFSET)))
#define NVIC_IPR3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR3_OFFSET)))


//--------
#define NVIC_IPR3_R_NVIC_PWM0GEN2_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_BIT       (5)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR3_NVIC_PWM0GEN2_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_QEI0_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR3_R_NVIC_QEI0_BIT   (13)
#define NVIC_IPR3_R_NVIC_QEI0_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_QEI0_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR3_R_NVIC_QEI0_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR3_R_NVIC_QEI0_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR3_R_NVIC_QEI0_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR3_R_NVIC_QEI0_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR3_R_NVIC_QEI0_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR3_R_NVIC_QEI0_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR3_NVIC_QEI0_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_QEI0_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_QEI0_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_QEI0_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_QEI0_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_QEI0_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_QEI0_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_QEI0_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_QEI0_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_BIT    (21)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR3_NVIC_ADC0SEQ0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_BIT    (29)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR3_NVIC_ADC0SEQ1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR4 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR4            (((IPR4_TypeDef*)(NVIC_BASE+NVIC_IPR4_OFFSET)))
#define NVIC_IPR4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR4_OFFSET)))


//--------
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_BIT       (5)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR4_NVIC_ADC0SEQ2_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_BIT   (13)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR4_NVIC_ADC0SEQ3_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_WDT01_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR4_R_NVIC_WDT01_BIT    (21)
#define NVIC_IPR4_R_NVIC_WDT01_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_WDT01_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR4_R_NVIC_WDT01_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR4_R_NVIC_WDT01_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR4_R_NVIC_WDT01_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR4_R_NVIC_WDT01_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR4_R_NVIC_WDT01_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR4_R_NVIC_WDT01_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR4_NVIC_WDT01_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_WDT01_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_WDT01_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_WDT01_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_WDT01_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_WDT01_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_WDT01_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_WDT01_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_WDT01_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_TIMER0A_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_BIT    (29)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR4_NVIC_TIMER0A_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_TIMER0A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_TIMER0A_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_TIMER0A_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_TIMER0A_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_TIMER0A_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_TIMER0A_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_TIMER0A_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_TIMER0A_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR5 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR5            (((IPR5_TypeDef*)(NVIC_BASE+NVIC_IPR5_OFFSET)))
#define NVIC_IPR5_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR5_OFFSET)))

//--------
#define NVIC_IPR5_R_NVIC_TIMER0B_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR5_R_NVIC_TIMER0B_BIT       (5)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR5_NVIC_TIMER0B_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_TIMER0B_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_TIMER0B_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_TIMER0B_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_TIMER0B_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_TIMER0B_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_TIMER0B_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_TIMER0B_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_TIMER0B_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_TIMER1A_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR5_R_NVIC_TIMER1A_BIT   (13)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR5_NVIC_TIMER1A_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_TIMER1A_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_TIMER1A_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_TIMER1A_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_TIMER1A_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_TIMER1A_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_TIMER1A_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_TIMER1A_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_TIMER1A_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_TIMER1B_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR5_R_NVIC_TIMER1B_BIT    (21)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR5_NVIC_TIMER1B_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_TIMER1B_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_TIMER1B_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_TIMER1B_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_TIMER1B_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_TIMER1B_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_TIMER1B_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_TIMER1B_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_TIMER1B_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_TIMER2A_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_BIT    (29)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR5_NVIC_TIMER2A_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_TIMER2A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_TIMER2A_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_TIMER2A_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_TIMER2A_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_TIMER2A_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_TIMER2A_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_TIMER2A_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_TIMER2A_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR6 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR6            (((IPR6_TypeDef*)(NVIC_BASE+NVIC_IPR6_OFFSET)))
#define NVIC_IPR6_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR6_OFFSET)))

//--------
#define NVIC_IPR6_R_NVIC_TIMER2B_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR6_R_NVIC_TIMER2B_BIT       (5)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR6_NVIC_TIMER2B_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_TIMER2B_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_TIMER2B_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_TIMER2B_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_TIMER2B_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_TIMER2B_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_TIMER2B_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_TIMER2B_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_TIMER2B_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_ACOMP0_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR6_R_NVIC_ACOMP0_BIT   (13)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR6_NVIC_ACOMP0_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_ACOMP0_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_ACOMP0_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_ACOMP0_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_ACOMP0_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_ACOMP0_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_ACOMP0_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_ACOMP0_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_ACOMP0_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_ACOMP1_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR6_R_NVIC_ACOMP1_BIT    (21)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR6_NVIC_ACOMP1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_ACOMP1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_ACOMP1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_ACOMP1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_ACOMP1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_ACOMP1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_ACOMP1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_ACOMP1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_ACOMP1_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_RES43_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR6_R_NVIC_RES43_BIT    (29)
#define NVIC_IPR6_R_NVIC_RES43_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_RES43_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR6_R_NVIC_RES43_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR6_R_NVIC_RES43_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR6_R_NVIC_RES43_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR6_R_NVIC_RES43_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR6_R_NVIC_RES43_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR6_R_NVIC_RES43_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR6_NVIC_RES43_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_RES43_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_RES43_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_RES43_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_RES43_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_RES43_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_RES43_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_RES43_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_RES43_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR7 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR7            (((IPR7_TypeDef*)(NVIC_BASE+NVIC_IPR7_OFFSET)))
#define NVIC_IPR7_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR7_OFFSET)))

//--------
#define NVIC_IPR7_R_NVIC_SYSCTL_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR7_R_NVIC_SYSCTL_BIT       (5)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR7_NVIC_SYSCTL_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_SYSCTL_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_SYSCTL_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_SYSCTL_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_SYSCTL_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_SYSCTL_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_SYSCTL_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_SYSCTL_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_SYSCTL_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_FLASH_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR7_R_NVIC_FLASH_BIT   (13)
#define NVIC_IPR7_R_NVIC_FLASH_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_FLASH_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR7_R_NVIC_FLASH_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR7_R_NVIC_FLASH_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR7_R_NVIC_FLASH_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR7_R_NVIC_FLASH_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR7_R_NVIC_FLASH_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR7_R_NVIC_FLASH_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR7_NVIC_FLASH_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_FLASH_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_FLASH_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_FLASH_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_FLASH_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_FLASH_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_FLASH_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_FLASH_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_FLASH_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_GPIOF_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR7_R_NVIC_GPIOF_BIT    (21)
#define NVIC_IPR7_R_NVIC_GPIOF_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR7_R_NVIC_GPIOF_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR7_NVIC_GPIOF_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_GPIOF_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_GPIOF_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_GPIOF_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_GPIOF_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_GPIOF_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_GPIOF_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_GPIOF_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_GPIOF_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_RES47_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR7_R_NVIC_RES47_BIT    (29)
#define NVIC_IPR7_R_NVIC_RES47_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_RES47_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR7_R_NVIC_RES47_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR7_R_NVIC_RES47_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR7_R_NVIC_RES47_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR7_R_NVIC_RES47_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR7_R_NVIC_RES47_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR7_R_NVIC_RES47_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR7_NVIC_RES47_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_RES47_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_RES47_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_RES47_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_RES47_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_RES47_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_RES47_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_RES47_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_RES47_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR8 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR8            (((IPR8_TypeDef*)(NVIC_BASE+NVIC_IPR8_OFFSET)))
#define NVIC_IPR8_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR8_OFFSET)))

//--------
#define NVIC_IPR8_R_NVIC_RES48_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR8_R_NVIC_RES48_BIT       (5)
#define NVIC_IPR8_R_NVIC_RES48_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_RES48_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR8_R_NVIC_RES48_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR8_R_NVIC_RES48_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR8_R_NVIC_RES48_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR8_R_NVIC_RES48_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR8_R_NVIC_RES48_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR8_R_NVIC_RES48_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR8_NVIC_RES48_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_RES48_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_RES48_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_RES48_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_RES48_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_RES48_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_RES48_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_RES48_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_RES48_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_UART2_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR8_R_NVIC_UART2_BIT   (13)
#define NVIC_IPR8_R_NVIC_UART2_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_UART2_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR8_R_NVIC_UART2_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR8_R_NVIC_UART2_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR8_R_NVIC_UART2_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR8_R_NVIC_UART2_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR8_R_NVIC_UART2_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR8_R_NVIC_UART2_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR8_NVIC_UART2_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_UART2_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_UART2_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_UART2_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_UART2_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_UART2_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_UART2_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_UART2_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_UART2_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_SSI1_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR8_R_NVIC_SSI1_BIT    (21)
#define NVIC_IPR8_R_NVIC_SSI1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_SSI1_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR8_R_NVIC_SSI1_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR8_R_NVIC_SSI1_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR8_R_NVIC_SSI1_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR8_R_NVIC_SSI1_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR8_R_NVIC_SSI1_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR8_R_NVIC_SSI1_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR8_NVIC_SSI1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_SSI1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_SSI1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_SSI1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_SSI1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_SSI1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_SSI1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_SSI1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_SSI1_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_TIMER3A_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_BIT    (29)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR8_NVIC_TIMER3A_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_TIMER3A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_TIMER3A_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_TIMER3A_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_TIMER3A_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_TIMER3A_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_TIMER3A_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_TIMER3A_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_TIMER3A_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR9 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR9            (((IPR9_TypeDef*)(NVIC_BASE+NVIC_IPR9_OFFSET)))
#define NVIC_IPR9_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR9_OFFSET)))

//--------
#define NVIC_IPR9_R_NVIC_TIMER3B_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR9_R_NVIC_TIMER3B_BIT       (5)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR9_NVIC_TIMER3B_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_TIMER3B_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_TIMER3B_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_TIMER3B_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_TIMER3B_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_TIMER3B_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_TIMER3B_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_TIMER3B_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_TIMER3B_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_I2C1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR9_R_NVIC_I2C1_BIT   (13)
#define NVIC_IPR9_R_NVIC_I2C1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_I2C1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR9_R_NVIC_I2C1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR9_R_NVIC_I2C1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR9_R_NVIC_I2C1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR9_R_NVIC_I2C1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR9_R_NVIC_I2C1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR9_R_NVIC_I2C1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR9_NVIC_I2C1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_I2C1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_I2C1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_I2C1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_I2C1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_I2C1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_I2C1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_I2C1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_I2C1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_CAN0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR9_R_NVIC_CAN0_BIT    (21)
#define NVIC_IPR9_R_NVIC_CAN0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_CAN0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR9_R_NVIC_CAN0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR9_R_NVIC_CAN0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR9_R_NVIC_CAN0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR9_R_NVIC_CAN0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR9_R_NVIC_CAN0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR9_R_NVIC_CAN0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR9_NVIC_CAN0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_CAN0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_CAN0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_CAN0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_CAN0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_CAN0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_CAN0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_CAN0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_CAN0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_CAN1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR9_R_NVIC_CAN1_BIT    (29)
#define NVIC_IPR9_R_NVIC_CAN1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR9_R_NVIC_CAN1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR9_NVIC_CAN1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_CAN1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_CAN1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_CAN1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_CAN1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_CAN1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_CAN1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_CAN1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_CAN1_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR10 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR10            (((IPR10_TypeDef*)(NVIC_BASE+NVIC_IPR10_OFFSET)))
#define NVIC_IPR10_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR10_OFFSET)))

//--------
#define NVIC_IPR10_R_NVIC_ETH_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR10_R_NVIC_ETH_BIT       (5)
#define NVIC_IPR10_R_NVIC_ETH_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_ETH_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR10_R_NVIC_ETH_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR10_R_NVIC_ETH_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR10_R_NVIC_ETH_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR10_R_NVIC_ETH_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR10_R_NVIC_ETH_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR10_R_NVIC_ETH_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR10_NVIC_ETH_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_ETH_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_ETH_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_ETH_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_ETH_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_ETH_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_ETH_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_ETH_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_ETH_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_HIB_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR10_R_NVIC_HIB_BIT   (13)
#define NVIC_IPR10_R_NVIC_HIB_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_HIB_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR10_R_NVIC_HIB_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR10_R_NVIC_HIB_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR10_R_NVIC_HIB_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR10_R_NVIC_HIB_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR10_R_NVIC_HIB_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR10_R_NVIC_HIB_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR10_NVIC_HIB_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_HIB_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_HIB_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_HIB_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_HIB_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_HIB_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_HIB_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_HIB_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_HIB_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_USB_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR10_R_NVIC_USB_BIT    (21)
#define NVIC_IPR10_R_NVIC_USB_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_USB_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR10_R_NVIC_USB_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR10_R_NVIC_USB_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR10_R_NVIC_USB_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR10_R_NVIC_USB_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR10_R_NVIC_USB_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR10_R_NVIC_USB_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR10_NVIC_USB_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_USB_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_USB_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_USB_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_USB_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_USB_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_USB_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_USB_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_USB_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_PWM0GEN3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_BIT    (29)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR10_R_NVIC_PWM0GEN3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR10_NVIC_PWM0GEN3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_PWM0GEN3_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR11 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR11            (((IPR11_TypeDef*)(NVIC_BASE+NVIC_IPR11_OFFSET)))
#define NVIC_IPR11_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR11_OFFSET)))

//--------
#define NVIC_IPR11_R_NVIC_UDMASOFT_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR11_R_NVIC_UDMASOFT_BIT       (5)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR11_NVIC_UDMASOFT_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_UDMASOFT_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_UDMASOFT_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_UDMASOFT_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_UDMASOFT_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_UDMASOFT_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_UDMASOFT_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_UDMASOFT_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_UDMASOFT_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_UDMAERROR_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_BIT   (13)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR11_NVIC_UDMAERROR_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_UDMAERROR_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_UDMAERROR_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_UDMAERROR_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_UDMAERROR_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_UDMAERROR_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_UDMAERROR_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_UDMAERROR_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_UDMAERROR_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_BIT    (21)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR11_NVIC_ADC1SEQ0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_ADC1SEQ0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_BIT    (29)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR11_R_NVIC_ADC1SEQ1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR11_NVIC_ADC1SEQ1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_ADC1SEQ1_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR12 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR12            (((IPR12_TypeDef*)(NVIC_BASE+NVIC_IPR12_OFFSET)))
#define NVIC_IPR12_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR12_OFFSET)))

//--------
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_BIT       (5)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR12_NVIC_ADC1SEQ2_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_BIT   (13)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR12_NVIC_ADC1SEQ3_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_EPI0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR12_R_NVIC_EPI0_BIT    (21)
#define NVIC_IPR12_R_NVIC_EPI0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_EPI0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR12_R_NVIC_EPI0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR12_R_NVIC_EPI0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR12_R_NVIC_EPI0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR12_R_NVIC_EPI0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR12_R_NVIC_EPI0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR12_R_NVIC_EPI0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR12_NVIC_EPI0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_EPI0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_EPI0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_EPI0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_EPI0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_EPI0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_EPI0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_EPI0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_EPI0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_GPIOJ_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_BIT    (29)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR12_R_NVIC_GPIOJ_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR12_NVIC_GPIOJ_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_GPIOJ_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_GPIOJ_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_GPIOJ_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_GPIOJ_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_GPIOJ_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_GPIOJ_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_GPIOJ_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_GPIOJ_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR13 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR13            (((IPR13_TypeDef*)(NVIC_BASE+NVIC_IPR13_OFFSET)))
#define NVIC_IPR13_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR13_OFFSET)))

//--------
#define NVIC_IPR13_R_NVIC_GPIOK_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR13_R_NVIC_GPIOK_BIT       (5)
#define NVIC_IPR13_R_NVIC_GPIOK_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_GPIOK_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR13_R_NVIC_GPIOK_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR13_R_NVIC_GPIOK_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR13_R_NVIC_GPIOK_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR13_R_NVIC_GPIOK_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR13_R_NVIC_GPIOK_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR13_R_NVIC_GPIOK_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR13_NVIC_GPIOK_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_GPIOK_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_GPIOK_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_GPIOK_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_GPIOK_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_GPIOK_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_GPIOK_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_GPIOK_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_GPIOK_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_GPIOL_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR13_R_NVIC_GPIOL_BIT   (13)
#define NVIC_IPR13_R_NVIC_GPIOL_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR13_R_NVIC_GPIOL_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR13_NVIC_GPIOL_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_GPIOL_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_GPIOL_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_GPIOL_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_GPIOL_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_GPIOL_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_GPIOL_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_GPIOL_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_GPIOL_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_SSI2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR13_R_NVIC_SSI2_BIT    (21)
#define NVIC_IPR13_R_NVIC_SSI2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_SSI2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR13_R_NVIC_SSI2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR13_R_NVIC_SSI2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR13_R_NVIC_SSI2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR13_R_NVIC_SSI2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR13_R_NVIC_SSI2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR13_R_NVIC_SSI2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR13_NVIC_SSI2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_SSI2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_SSI2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_SSI2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_SSI2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_SSI2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_SSI2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_SSI2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_SSI2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_SSI3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR13_R_NVIC_SSI3_BIT    (29)
#define NVIC_IPR13_R_NVIC_SSI3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR13_R_NVIC_SSI3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR13_NVIC_SSI3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_SSI3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_SSI3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_SSI3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_SSI3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_SSI3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_SSI3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_SSI3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_SSI3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR14 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR14            (((IPR14_TypeDef*)(NVIC_BASE+NVIC_IPR14_OFFSET)))
#define NVIC_IPR14_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR14_OFFSET)))

//--------
#define NVIC_IPR14_R_NVIC_UART3_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR14_R_NVIC_UART3_BIT       (5)
#define NVIC_IPR14_R_NVIC_UART3_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_UART3_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR14_R_NVIC_UART3_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR14_R_NVIC_UART3_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR14_R_NVIC_UART3_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR14_R_NVIC_UART3_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR14_R_NVIC_UART3_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR14_R_NVIC_UART3_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR14_NVIC_UART3_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_UART3_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_UART3_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_UART3_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_UART3_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_UART3_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_UART3_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_UART3_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_UART3_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_UART4_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR14_R_NVIC_UART4_BIT   (13)
#define NVIC_IPR14_R_NVIC_UART4_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_UART4_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR14_R_NVIC_UART4_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR14_R_NVIC_UART4_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR14_R_NVIC_UART4_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR14_R_NVIC_UART4_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR14_R_NVIC_UART4_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR14_R_NVIC_UART4_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR14_NVIC_UART4_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_UART4_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_UART4_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_UART4_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_UART4_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_UART4_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_UART4_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_UART4_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_UART4_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_UART5_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR14_R_NVIC_UART5_BIT    (21)
#define NVIC_IPR14_R_NVIC_UART5_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_UART5_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR14_R_NVIC_UART5_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR14_R_NVIC_UART5_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR14_R_NVIC_UART5_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR14_R_NVIC_UART5_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR14_R_NVIC_UART5_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR14_R_NVIC_UART5_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR14_NVIC_UART5_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_UART5_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_UART5_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_UART5_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_UART5_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_UART5_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_UART5_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_UART5_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_UART5_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_UART6_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR14_R_NVIC_UART6_BIT    (29)
#define NVIC_IPR14_R_NVIC_UART6_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_UART6_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR14_R_NVIC_UART6_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR14_R_NVIC_UART6_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR14_R_NVIC_UART6_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR14_R_NVIC_UART6_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR14_R_NVIC_UART6_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR14_R_NVIC_UART6_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR14_NVIC_UART6_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_UART6_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_UART6_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_UART6_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_UART6_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_UART6_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_UART6_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_UART6_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_UART6_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR15 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR15            (((IPR15_TypeDef*)(NVIC_BASE+NVIC_IPR15_OFFSET)))
#define NVIC_IPR15_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR15_OFFSET)))

//--------
#define NVIC_IPR15_R_NVIC_UART7_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR15_R_NVIC_UART7_BIT       (5)
#define NVIC_IPR15_R_NVIC_UART7_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_UART7_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR15_R_NVIC_UART7_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR15_R_NVIC_UART7_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR15_R_NVIC_UART7_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR15_R_NVIC_UART7_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR15_R_NVIC_UART7_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR15_R_NVIC_UART7_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR15_NVIC_UART7_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_UART7_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_UART7_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_UART7_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_UART7_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_UART7_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_UART7_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_UART7_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_UART7_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_I2C2_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR15_R_NVIC_I2C2_BIT   (13)
#define NVIC_IPR15_R_NVIC_I2C2_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_I2C2_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR15_R_NVIC_I2C2_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR15_R_NVIC_I2C2_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR15_R_NVIC_I2C2_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR15_R_NVIC_I2C2_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR15_R_NVIC_I2C2_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR15_R_NVIC_I2C2_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR15_NVIC_I2C2_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_I2C2_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_I2C2_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_I2C2_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_I2C2_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_I2C2_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_I2C2_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_I2C2_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_I2C2_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_I2C3_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR15_R_NVIC_I2C3_BIT    (21)
#define NVIC_IPR15_R_NVIC_I2C3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_I2C3_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR15_R_NVIC_I2C3_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR15_R_NVIC_I2C3_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR15_R_NVIC_I2C3_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR15_R_NVIC_I2C3_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR15_R_NVIC_I2C3_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR15_R_NVIC_I2C3_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR15_NVIC_I2C3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_I2C3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_I2C3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_I2C3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_I2C3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_I2C3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_I2C3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_I2C3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_I2C3_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_TIMER4A_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_BIT    (29)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR15_R_NVIC_TIMER4A_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR15_NVIC_TIMER4A_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_TIMER4A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_TIMER4A_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_TIMER4A_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_TIMER4A_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_TIMER4A_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_TIMER4A_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_TIMER4A_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_TIMER4A_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR16 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR16            (((IPR16_TypeDef*)(NVIC_BASE+NVIC_IPR16_OFFSET)))
#define NVIC_IPR16_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR16_OFFSET)))

//--------
#define NVIC_IPR16_R_NVIC_TIMER4B_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR16_R_NVIC_TIMER4B_BIT       (5)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR16_R_NVIC_TIMER4B_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR16_NVIC_TIMER4B_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_TIMER4B_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_TIMER4B_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_TIMER4B_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_TIMER4B_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_TIMER4B_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_TIMER4B_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_TIMER4B_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_TIMER4B_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR16_R_NVIC_TIMER5A_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR16_R_NVIC_TIMER5A_BIT   (13)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR16_R_NVIC_TIMER5A_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR16_NVIC_TIMER5A_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_TIMER5A_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_TIMER5A_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_TIMER5A_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_TIMER5A_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_TIMER5A_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_TIMER5A_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_TIMER5A_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_TIMER5A_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR16_R_NVIC_TIMER5B_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR16_R_NVIC_TIMER5B_BIT    (21)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR16_R_NVIC_TIMER5B_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR16_NVIC_TIMER5B_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_TIMER5B_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_TIMER5B_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_TIMER5B_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_TIMER5B_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_TIMER5B_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_TIMER5B_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_TIMER5B_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_TIMER5B_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR16_R_NVIC_FP_EXC_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_BIT    (29)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR16_R_NVIC_FP_EXC_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR16_NVIC_FP_EXC_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_FP_EXC_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_FP_EXC_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_FP_EXC_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_FP_EXC_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_FP_EXC_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_FP_EXC_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_FP_EXC_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_FP_EXC_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR17 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR17            (((IPR17_TypeDef*)(NVIC_BASE+NVIC_IPR17_OFFSET)))
#define NVIC_IPR17_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR17_OFFSET)))

//--------
#define NVIC_IPR17_R_NVIC_RES84_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR17_R_NVIC_RES84_BIT       (5)
#define NVIC_IPR17_R_NVIC_RES84_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_RES84_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR17_R_NVIC_RES84_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR17_R_NVIC_RES84_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR17_R_NVIC_RES84_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR17_R_NVIC_RES84_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR17_R_NVIC_RES84_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR17_R_NVIC_RES84_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR17_NVIC_RES84_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_RES84_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_RES84_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_RES84_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_RES84_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_RES84_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_RES84_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_RES84_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_RES84_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR17_R_NVIC_RES85_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR17_R_NVIC_RES85_BIT   (13)
#define NVIC_IPR17_R_NVIC_RES85_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_RES85_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR17_R_NVIC_RES85_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR17_R_NVIC_RES85_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR17_R_NVIC_RES85_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR17_R_NVIC_RES85_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR17_R_NVIC_RES85_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR17_R_NVIC_RES85_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR17_NVIC_RES85_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_RES85_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_RES85_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_RES85_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_RES85_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_RES85_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_RES85_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_RES85_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_RES85_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR17_R_NVIC_I2C4_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR17_R_NVIC_I2C4_BIT    (21)
#define NVIC_IPR17_R_NVIC_I2C4_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_I2C4_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR17_R_NVIC_I2C4_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR17_R_NVIC_I2C4_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR17_R_NVIC_I2C4_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR17_R_NVIC_I2C4_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR17_R_NVIC_I2C4_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR17_R_NVIC_I2C4_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR17_NVIC_I2C4_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_I2C4_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_I2C4_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_I2C4_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_I2C4_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_I2C4_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_I2C4_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_I2C4_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_I2C4_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR17_R_NVIC_I2C5_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR17_R_NVIC_I2C5_BIT    (29)
#define NVIC_IPR17_R_NVIC_I2C5_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR17_R_NVIC_I2C5_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR17_NVIC_I2C5_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_I2C5_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_I2C5_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_I2C5_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_I2C5_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_I2C5_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_I2C5_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_I2C5_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_I2C5_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR18 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR18            (((IPR18_TypeDef*)(NVIC_BASE+NVIC_IPR18_OFFSET)))
#define NVIC_IPR18_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR18_OFFSET)))

//--------
#define NVIC_IPR18_R_NVIC_GPIOM_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR18_R_NVIC_GPIOM_BIT       (5)
#define NVIC_IPR18_R_NVIC_GPIOM_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_GPIOM_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR18_R_NVIC_GPIOM_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR18_R_NVIC_GPIOM_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR18_R_NVIC_GPIOM_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR18_R_NVIC_GPIOM_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR18_R_NVIC_GPIOM_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR18_R_NVIC_GPIOM_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR18_NVIC_GPIOM_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_GPIOM_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_GPIOM_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_GPIOM_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_GPIOM_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_GPIOM_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_GPIOM_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_GPIOM_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_GPIOM_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR18_R_NVIC_GPION_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR18_R_NVIC_GPION_BIT   (13)
#define NVIC_IPR18_R_NVIC_GPION_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_GPION_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR18_R_NVIC_GPION_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR18_R_NVIC_GPION_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR18_R_NVIC_GPION_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR18_R_NVIC_GPION_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR18_R_NVIC_GPION_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR18_R_NVIC_GPION_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR18_NVIC_GPION_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_GPION_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_GPION_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_GPION_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_GPION_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_GPION_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_GPION_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_GPION_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_GPION_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR18_R_NVIC_RES90_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR18_R_NVIC_RES90_BIT    (21)
#define NVIC_IPR18_R_NVIC_RES90_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_RES90_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR18_R_NVIC_RES90_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR18_R_NVIC_RES90_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR18_R_NVIC_RES90_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR18_R_NVIC_RES90_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR18_R_NVIC_RES90_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR18_R_NVIC_RES90_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR18_NVIC_RES90_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_RES90_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_RES90_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_RES90_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_RES90_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_RES90_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_RES90_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_RES90_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_RES90_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR18_R_NVIC_TAMPER_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR18_R_NVIC_TAMPER_BIT    (29)
#define NVIC_IPR18_R_NVIC_TAMPER_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR18_R_NVIC_TAMPER_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR18_NVIC_TAMPER_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_TAMPER_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_TAMPER_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_TAMPER_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_TAMPER_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_TAMPER_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_TAMPER_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_TAMPER_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_TAMPER_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR19 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR19            (((IPR19_TypeDef*)(NVIC_BASE+NVIC_IPR19_OFFSET)))
#define NVIC_IPR19_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR19_OFFSET)))

//--------
#define NVIC_IPR19_R_NVIC_GPIOP_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR19_R_NVIC_GPIOP_BIT       (5)
#define NVIC_IPR19_R_NVIC_GPIOP_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_GPIOP_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR19_R_NVIC_GPIOP_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR19_R_NVIC_GPIOP_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR19_R_NVIC_GPIOP_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR19_R_NVIC_GPIOP_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR19_R_NVIC_GPIOP_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR19_R_NVIC_GPIOP_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR19_NVIC_GPIOP_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_GPIOP_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_GPIOP_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_GPIOP_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_GPIOP_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_GPIOP_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_GPIOP_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_GPIOP_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_GPIOP_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR19_R_NVIC_GPIOP1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR19_R_NVIC_GPIOP1_BIT   (13)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR19_R_NVIC_GPIOP1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR19_NVIC_GPIOP1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_GPIOP1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_GPIOP1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_GPIOP1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_GPIOP1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_GPIOP1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_GPIOP1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_GPIOP1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_GPIOP1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR19_R_NVIC_GPIOP2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR19_R_NVIC_GPIOP2_BIT    (21)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR19_R_NVIC_GPIOP2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR19_NVIC_GPIOP2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_GPIOP2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_GPIOP2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_GPIOP2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_GPIOP2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_GPIOP2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_GPIOP2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_GPIOP2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_GPIOP2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR19_R_NVIC_GPIOP3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_BIT    (29)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR19_R_NVIC_GPIOP3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR19_NVIC_GPIOP3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_GPIOP3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_GPIOP3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_GPIOP3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_GPIOP3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_GPIOP3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_GPIOP3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_GPIOP3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_GPIOP3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR20 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR20            (((IPR20_TypeDef*)(NVIC_BASE+NVIC_IPR20_OFFSET)))
#define NVIC_IPR20_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR20_OFFSET)))

//--------
#define NVIC_IPR20_R_NVIC_GPIOP4_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR20_R_NVIC_GPIOP4_BIT       (5)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR20_R_NVIC_GPIOP4_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR20_NVIC_GPIOP4_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_GPIOP4_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_GPIOP4_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_GPIOP4_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_GPIOP4_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_GPIOP4_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_GPIOP4_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_GPIOP4_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_GPIOP4_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR20_R_NVIC_GPIOP5_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR20_R_NVIC_GPIOP5_BIT   (13)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR20_R_NVIC_GPIOP5_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR20_NVIC_GPIOP5_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_GPIOP5_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_GPIOP5_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_GPIOP5_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_GPIOP5_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_GPIOP5_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_GPIOP5_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_GPIOP5_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_GPIOP5_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR20_R_NVIC_GPIOP6_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR20_R_NVIC_GPIOP6_BIT    (21)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR20_R_NVIC_GPIOP6_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR20_NVIC_GPIOP6_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_GPIOP6_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_GPIOP6_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_GPIOP6_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_GPIOP6_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_GPIOP6_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_GPIOP6_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_GPIOP6_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_GPIOP6_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR20_R_NVIC_GPIOP7_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_BIT    (29)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR20_R_NVIC_GPIOP7_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR20_NVIC_GPIOP7_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_GPIOP7_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_GPIOP7_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_GPIOP7_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_GPIOP7_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_GPIOP7_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_GPIOP7_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_GPIOP7_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_GPIOP7_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR21 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR21            (((IPR21_TypeDef*)(NVIC_BASE+NVIC_IPR21_OFFSET)))
#define NVIC_IPR21_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR21_OFFSET)))

//--------
#define NVIC_IPR21_R_NVIC_GPIOQ_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR21_R_NVIC_GPIOQ_BIT       (5)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR21_R_NVIC_GPIOQ_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR21_NVIC_GPIOQ_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_GPIOQ_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_GPIOQ_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_GPIOQ_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_GPIOQ_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_GPIOQ_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_GPIOQ_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_GPIOQ_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_GPIOQ_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR21_R_NVIC_GPIOQ1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_BIT   (13)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR21_R_NVIC_GPIOQ1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR21_NVIC_GPIOQ1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_GPIOQ1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_GPIOQ1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_GPIOQ1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_GPIOQ1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_GPIOQ1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_GPIOQ1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_GPIOQ1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_GPIOQ1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR21_R_NVIC_GPIOQ2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_BIT    (21)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR21_R_NVIC_GPIOQ2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR21_NVIC_GPIOQ2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_GPIOQ2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_GPIOQ2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_GPIOQ2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_GPIOQ2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_GPIOQ2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_GPIOQ2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_GPIOQ2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_GPIOQ2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR21_R_NVIC_GPIOQ3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_BIT    (29)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR21_R_NVIC_GPIOQ3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR21_NVIC_GPIOQ3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_GPIOQ3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_GPIOQ3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_GPIOQ3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_GPIOQ3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_GPIOQ3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_GPIOQ3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_GPIOQ3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_GPIOQ3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR22 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR22            (((IPR22_TypeDef*)(NVIC_BASE+NVIC_IPR22_OFFSET)))
#define NVIC_IPR22_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR22_OFFSET)))

//--------
#define NVIC_IPR22_R_NVIC_GPIOQ4_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR22_R_NVIC_GPIOQ4_BIT       (5)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR22_R_NVIC_GPIOQ4_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR22_NVIC_GPIOQ4_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_GPIOQ4_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_GPIOQ4_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_GPIOQ4_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_GPIOQ4_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_GPIOQ4_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_GPIOQ4_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_GPIOQ4_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_GPIOQ4_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR22_R_NVIC_GPIOQ5_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_BIT   (13)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR22_R_NVIC_GPIOQ5_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR22_NVIC_GPIOQ5_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_GPIOQ5_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_GPIOQ5_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_GPIOQ5_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_GPIOQ5_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_GPIOQ5_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_GPIOQ5_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_GPIOQ5_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_GPIOQ5_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR22_R_NVIC_GPIOQ6_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_BIT    (21)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR22_R_NVIC_GPIOQ6_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR22_NVIC_GPIOQ6_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_GPIOQ6_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_GPIOQ6_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_GPIOQ6_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_GPIOQ6_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_GPIOQ6_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_GPIOQ6_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_GPIOQ6_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_GPIOQ6_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR22_R_NVIC_GPIOQ7_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_BIT    (29)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR22_R_NVIC_GPIOQ7_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR22_NVIC_GPIOQ7_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_GPIOQ7_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_GPIOQ7_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_GPIOQ7_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_GPIOQ7_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_GPIOQ7_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_GPIOQ7_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_GPIOQ7_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_GPIOQ7_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR23 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR23            (((IPR23_TypeDef*)(NVIC_BASE+NVIC_IPR23_OFFSET)))
#define NVIC_IPR23_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR23_OFFSET)))

//--------
#define NVIC_IPR23_R_NVIC_RES108_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR23_R_NVIC_RES108_BIT       (5)
#define NVIC_IPR23_R_NVIC_RES108_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_RES108_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR23_R_NVIC_RES108_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR23_R_NVIC_RES108_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR23_R_NVIC_RES108_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR23_R_NVIC_RES108_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR23_R_NVIC_RES108_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR23_R_NVIC_RES108_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR23_NVIC_RES108_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_RES108_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_RES108_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_RES108_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_RES108_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_RES108_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_RES108_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_RES108_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_RES108_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR23_R_NVIC_RES109_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR23_R_NVIC_RES109_BIT   (13)
#define NVIC_IPR23_R_NVIC_RES109_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_RES109_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR23_R_NVIC_RES109_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR23_R_NVIC_RES109_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR23_R_NVIC_RES109_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR23_R_NVIC_RES109_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR23_R_NVIC_RES109_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR23_R_NVIC_RES109_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR23_NVIC_RES109_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_RES109_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_RES109_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_RES109_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_RES109_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_RES109_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_RES109_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_RES109_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_RES109_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR23_R_NVIC_SHA_MD5_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_BIT    (21)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR23_R_NVIC_SHA_MD5_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR23_NVIC_SHA_MD5_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_SHA_MD5_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_SHA_MD5_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_SHA_MD5_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_SHA_MD5_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_SHA_MD5_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_SHA_MD5_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_SHA_MD5_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_SHA_MD5_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR23_R_NVIC_AES_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR23_R_NVIC_AES_BIT    (29)
#define NVIC_IPR23_R_NVIC_AES_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_AES_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR23_R_NVIC_AES_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR23_R_NVIC_AES_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR23_R_NVIC_AES_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR23_R_NVIC_AES_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR23_R_NVIC_AES_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR23_R_NVIC_AES_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR23_NVIC_AES_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_AES_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_AES_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_AES_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_AES_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_AES_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_AES_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_AES_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_AES_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR24 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR24            (((IPR24_TypeDef*)(NVIC_BASE+NVIC_IPR24_OFFSET)))
#define NVIC_IPR24_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR24_OFFSET)))

//--------
#define NVIC_IPR24_R_NVIC_DES_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR24_R_NVIC_DES_BIT       (5)
#define NVIC_IPR24_R_NVIC_DES_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_DES_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR24_R_NVIC_DES_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR24_R_NVIC_DES_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR24_R_NVIC_DES_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR24_R_NVIC_DES_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR24_R_NVIC_DES_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR24_R_NVIC_DES_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR24_NVIC_DES_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_DES_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_DES_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_DES_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_DES_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_DES_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_DES_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_DES_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_DES_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR24_R_NVIC_RES113_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR24_R_NVIC_RES113_BIT   (13)
#define NVIC_IPR24_R_NVIC_RES113_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_RES113_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR24_R_NVIC_RES113_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR24_R_NVIC_RES113_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR24_R_NVIC_RES113_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR24_R_NVIC_RES113_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR24_R_NVIC_RES113_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR24_R_NVIC_RES113_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR24_NVIC_RES113_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_RES113_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_RES113_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_RES113_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_RES113_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_RES113_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_RES113_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_RES113_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_RES113_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR24_R_NVIC_TIMER6A_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR24_R_NVIC_TIMER6A_BIT    (21)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR24_R_NVIC_TIMER6A_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR24_NVIC_TIMER6A_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_TIMER6A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_TIMER6A_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_TIMER6A_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_TIMER6A_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_TIMER6A_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_TIMER6A_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_TIMER6A_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_TIMER6A_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR24_R_NVIC_TIMER6B_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_BIT    (29)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR24_R_NVIC_TIMER6B_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR24_NVIC_TIMER6B_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_TIMER6B_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_TIMER6B_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_TIMER6B_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_TIMER6B_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_TIMER6B_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_TIMER6B_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_TIMER6B_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_TIMER6B_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR25 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR25            (((IPR25_TypeDef*)(NVIC_BASE+NVIC_IPR25_OFFSET)))
#define NVIC_IPR25_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR25_OFFSET)))

//--------
#define NVIC_IPR25_R_NVIC_TIMER7A_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR25_R_NVIC_TIMER7A_BIT       (5)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR25_R_NVIC_TIMER7A_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR25_NVIC_TIMER7A_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR25_NVIC_TIMER7A_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR25_NVIC_TIMER7A_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR25_NVIC_TIMER7A_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR25_NVIC_TIMER7A_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR25_NVIC_TIMER7A_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR25_NVIC_TIMER7A_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR25_NVIC_TIMER7A_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR25_NVIC_TIMER7A_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR25_R_NVIC_TIMER7B_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR25_R_NVIC_TIMER7B_BIT   (13)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR25_R_NVIC_TIMER7B_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR25_NVIC_TIMER7B_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR25_NVIC_TIMER7B_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR25_NVIC_TIMER7B_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR25_NVIC_TIMER7B_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR25_NVIC_TIMER7B_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR25_NVIC_TIMER7B_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR25_NVIC_TIMER7B_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR25_NVIC_TIMER7B_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR25_NVIC_TIMER7B_IP7     ((uint32_t)0x00000007)


#define NVIC_IPR25_R_NVIC_I2C6_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR25_R_NVIC_I2C6_BIT    (21)
#define NVIC_IPR25_R_NVIC_I2C6_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR25_R_NVIC_I2C6_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR25_R_NVIC_I2C6_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR25_R_NVIC_I2C6_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR25_R_NVIC_I2C6_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR25_R_NVIC_I2C6_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR25_R_NVIC_I2C6_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR25_R_NVIC_I2C6_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR25_NVIC_I2C6_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR25_NVIC_I2C6_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR25_NVIC_I2C6_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR25_NVIC_I2C6_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR25_NVIC_I2C6_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR25_NVIC_I2C6_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR25_NVIC_I2C6_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR25_NVIC_I2C6_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR25_NVIC_I2C6_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR25_R_NVIC_I2C7_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR25_R_NVIC_I2C7_BIT    (29)
#define NVIC_IPR25_R_NVIC_I2C7_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR25_R_NVIC_I2C7_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR25_NVIC_I2C7_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR25_NVIC_I2C7_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR25_NVIC_I2C7_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR25_NVIC_I2C7_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR25_NVIC_I2C7_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR25_NVIC_I2C7_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR25_NVIC_I2C7_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR25_NVIC_I2C7_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR25_NVIC_I2C7_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR26 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR26            (((IPR26_TypeDef*)(NVIC_BASE+NVIC_IPR26_OFFSET)))
#define NVIC_IPR26_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR26_OFFSET)))

//--------
#define NVIC_IPR26_R_NVIC_RES120_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR26_R_NVIC_RES120_BIT       (5)
#define NVIC_IPR26_R_NVIC_RES120_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR26_R_NVIC_RES120_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR26_R_NVIC_RES120_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR26_R_NVIC_RES120_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR26_R_NVIC_RES120_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR26_R_NVIC_RES120_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR26_R_NVIC_RES120_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR26_R_NVIC_RES120_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR26_NVIC_RES120_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR26_NVIC_RES120_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR26_NVIC_RES120_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR26_NVIC_RES120_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR26_NVIC_RES120_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR26_NVIC_RES120_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR26_NVIC_RES120_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR26_NVIC_RES120_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR26_NVIC_RES120_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR26_R_NVIC_RES121_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR26_R_NVIC_RES121_BIT   (13)
#define NVIC_IPR26_R_NVIC_RES121_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR26_R_NVIC_RES121_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR26_R_NVIC_RES121_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR26_R_NVIC_RES121_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR26_R_NVIC_RES121_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR26_R_NVIC_RES121_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR26_R_NVIC_RES121_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR26_R_NVIC_RES121_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR26_NVIC_RES121_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR26_NVIC_RES121_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR26_NVIC_RES121_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR26_NVIC_RES121_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR26_NVIC_RES121_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR26_NVIC_RES121_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR26_NVIC_RES121_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR26_NVIC_RES121_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR26_NVIC_RES121_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR26_R_NVIC_RES122_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR26_R_NVIC_RES122_BIT    (21)
#define NVIC_IPR26_R_NVIC_RES122_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR26_R_NVIC_RES122_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR26_R_NVIC_RES122_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR26_R_NVIC_RES122_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR26_R_NVIC_RES122_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR26_R_NVIC_RES122_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR26_R_NVIC_RES122_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR26_R_NVIC_RES122_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR26_NVIC_RES122_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR26_NVIC_RES122_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR26_NVIC_RES122_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR26_NVIC_RES122_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR26_NVIC_RES122_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR26_NVIC_RES122_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR26_NVIC_RES122_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR26_NVIC_RES122_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR26_NVIC_RES122_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR26_R_NVIC_RES123_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR26_R_NVIC_RES123_BIT    (29)
#define NVIC_IPR26_R_NVIC_RES123_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR26_R_NVIC_RES123_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR26_R_NVIC_RES123_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR26_R_NVIC_RES123_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR26_R_NVIC_RES123_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR26_R_NVIC_RES123_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR26_R_NVIC_RES123_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR26_R_NVIC_RES123_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR26_NVIC_RES123_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR26_NVIC_RES123_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR26_NVIC_RES123_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR26_NVIC_RES123_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR26_NVIC_RES123_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR26_NVIC_RES123_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR26_NVIC_RES123_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR26_NVIC_RES123_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR26_NVIC_RES123_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR27 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR27            (((IPR27_TypeDef*)(NVIC_BASE+NVIC_IPR27_OFFSET)))
#define NVIC_IPR27_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR27_OFFSET)))

//--------
#define NVIC_IPR27_R_NVIC_RES124_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR27_R_NVIC_RES124_BIT       (5)
#define NVIC_IPR27_R_NVIC_RES124_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR27_R_NVIC_RES124_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR27_R_NVIC_RES124_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR27_R_NVIC_RES124_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR27_R_NVIC_RES124_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR27_R_NVIC_RES124_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR27_R_NVIC_RES124_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR27_R_NVIC_RES124_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR27_NVIC_RES124_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR27_NVIC_RES124_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR27_NVIC_RES124_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR27_NVIC_RES124_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR27_NVIC_RES124_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR27_NVIC_RES124_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR27_NVIC_RES124_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR27_NVIC_RES124_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR27_NVIC_RES124_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR27_R_NVIC_I2C8_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR27_R_NVIC_I2C8_BIT   (13)
#define NVIC_IPR27_R_NVIC_I2C8_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR27_R_NVIC_I2C8_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR27_R_NVIC_I2C8_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR27_R_NVIC_I2C8_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR27_R_NVIC_I2C8_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR27_R_NVIC_I2C8_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR27_R_NVIC_I2C8_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR27_R_NVIC_I2C8_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR27_NVIC_I2C8_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR27_NVIC_I2C8_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR27_NVIC_I2C8_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR27_NVIC_I2C8_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR27_NVIC_I2C8_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR27_NVIC_I2C8_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR27_NVIC_I2C8_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR27_NVIC_I2C8_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR27_NVIC_I2C8_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR27_R_NVIC_I2C9_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR27_R_NVIC_I2C9_BIT    (21)
#define NVIC_IPR27_R_NVIC_I2C9_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR27_R_NVIC_I2C9_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR27_R_NVIC_I2C9_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR27_R_NVIC_I2C9_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR27_R_NVIC_I2C9_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR27_R_NVIC_I2C9_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR27_R_NVIC_I2C9_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR27_R_NVIC_I2C9_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR27_NVIC_I2C9_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR27_NVIC_I2C9_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR27_NVIC_I2C9_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR27_NVIC_I2C9_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR27_NVIC_I2C9_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR27_NVIC_I2C9_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR27_NVIC_I2C9_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR27_NVIC_I2C9_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR27_NVIC_I2C9_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR27_R_NVIC_RES127_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR27_R_NVIC_RES127_BIT    (29)
#define NVIC_IPR27_R_NVIC_RES127_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR27_R_NVIC_RES127_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR27_R_NVIC_RES127_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR27_R_NVIC_RES127_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR27_R_NVIC_RES127_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR27_R_NVIC_RES127_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR27_R_NVIC_RES127_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR27_R_NVIC_RES127_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR27_NVIC_RES127_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR27_NVIC_RES127_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR27_NVIC_RES127_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR27_NVIC_RES127_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR27_NVIC_RES127_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR27_NVIC_RES127_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR27_NVIC_RES127_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR27_NVIC_RES127_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR27_NVIC_RES127_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR28 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR28            (((IPR28_TypeDef*)(NVIC_BASE+NVIC_IPR28_OFFSET)))
#define NVIC_IPR28_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR28_OFFSET)))

//--------
#define NVIC_IPR28_R_NVIC_RES128_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR28_R_NVIC_RES128_BIT       (5)
#define NVIC_IPR28_R_NVIC_RES128_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR28_R_NVIC_RES128_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR28_R_NVIC_RES128_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR28_R_NVIC_RES128_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR28_R_NVIC_RES128_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR28_R_NVIC_RES128_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR28_R_NVIC_RES128_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR28_R_NVIC_RES128_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR28_NVIC_RES128_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR28_NVIC_RES128_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR28_NVIC_RES128_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR28_NVIC_RES128_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR28_NVIC_RES128_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR28_NVIC_RES128_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR28_NVIC_RES128_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR28_NVIC_RES128_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR28_NVIC_RES128_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR28_R_NVIC_RES129_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR28_R_NVIC_RES129_BIT   (13)
#define NVIC_IPR28_R_NVIC_RES129_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR28_R_NVIC_RES129_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR28_R_NVIC_RES129_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR28_R_NVIC_RES129_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR28_R_NVIC_RES129_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR28_R_NVIC_RES129_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR28_R_NVIC_RES129_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR28_R_NVIC_RES129_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR28_NVIC_RES129_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR28_NVIC_RES129_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR28_NVIC_RES129_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR28_NVIC_RES129_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR28_NVIC_RES129_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR28_NVIC_RES129_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR28_NVIC_RES129_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR28_NVIC_RES129_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR28_NVIC_RES129_IP7     ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// STIR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_STIR            (((STIR_TypeDef*)(NVIC_BASE+NVIC_STIR_OFFSET)))
#define NVIC_STIR_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_STIR_OFFSET)))


//--------
#define NVIC_STIR_R_INTID_MASK      ((uint32_t)0x000000FF)
#define NVIC_STIR_R_INTID_BIT       (0)
#define NVIC_STIR_R_INTID_GPIOA      ((uint32_t)0x00000000)
#define NVIC_STIR_R_INTID_GPIOB      ((uint32_t)0x00000001)
#define NVIC_STIR_R_INTID_GPIOC      ((uint32_t)0x00000002)
#define NVIC_STIR_R_INTID_GPIOD      ((uint32_t)0x00000003)
#define NVIC_STIR_R_INTID_GPIOE      ((uint32_t)0x00000004)
#define NVIC_STIR_R_INTID_UART0      ((uint32_t)0x00000005)
#define NVIC_STIR_R_INTID_UART1      ((uint32_t)0x00000006)
#define NVIC_STIR_R_INTID_SSI0       ((uint32_t)0x00000007)
#define NVIC_STIR_R_INTID_I2C0       ((uint32_t)0x00000008)
#define NVIC_STIR_R_INTID_PWM0FAULT   ((uint32_t)0x00000009)
#define NVIC_STIR_R_INTID_PWM0GEN0    ((uint32_t)0x0000000A)
#define NVIC_STIR_R_INTID_PWM0GEN1    ((uint32_t)0x0000000B)
#define NVIC_STIR_R_INTID_PWM0GEN2    ((uint32_t)0x0000000C)
#define NVIC_STIR_R_INTID_QEI0       ((uint32_t)0x0000000D)
#define NVIC_STIR_R_INTID_ADC0SEQ0   ((uint32_t)0x0000000E)
#define NVIC_STIR_R_INTID_ADC0SEQ1   ((uint32_t)0x0000000F)
#define NVIC_STIR_R_INTID_ADC0SEQ2   ((uint32_t)0x00000010)
#define NVIC_STIR_R_INTID_ADC0SEQ3   ((uint32_t)0x00000011)
#define NVIC_STIR_R_INTID_WDT01      ((uint32_t)0x00000012)
#define NVIC_STIR_R_INTID_TIMER0A    ((uint32_t)0x00000013)
#define NVIC_STIR_R_INTID_TIMER0B    ((uint32_t)0x00000014)
#define NVIC_STIR_R_INTID_TIMER1A    ((uint32_t)0x00000015)
#define NVIC_STIR_R_INTID_TIMER1B    ((uint32_t)0x00000016)
#define NVIC_STIR_R_INTID_TIMER2A    ((uint32_t)0x00000017)
#define NVIC_STIR_R_INTID_TIMER2B    ((uint32_t)0x00000018)
#define NVIC_STIR_R_INTID_ACOMP0     ((uint32_t)0x00000019)
#define NVIC_STIR_R_INTID_ACOMP1     ((uint32_t)0x0000001A)
#define NVIC_STIR_R_INTID_RES43      ((uint32_t)0x0000001B)
#define NVIC_STIR_R_INTID_SYSCTL     ((uint32_t)0x0000001C)
#define NVIC_STIR_R_INTID_FLASH      ((uint32_t)0x0000001D)
#define NVIC_STIR_R_INTID_GPIOF      ((uint32_t)0x0000001E)
#define NVIC_STIR_R_INTID_RES47      ((uint32_t)0x0000001F)
#define NVIC_STIR_R_INTID_RES48      ((uint32_t)0x00000020)
#define NVIC_STIR_R_INTID_UART2      ((uint32_t)0x00000021)
#define NVIC_STIR_R_INTID_SSI1       ((uint32_t)0x00000022)
#define NVIC_STIR_R_INTID_TIMER3A    ((uint32_t)0x00000023)
#define NVIC_STIR_R_INTID_TIMER3B    ((uint32_t)0x00000024)
#define NVIC_STIR_R_INTID_I2C1       ((uint32_t)0x00000025)
#define NVIC_STIR_R_INTID_CAN0       ((uint32_t)0x00000026)
#define NVIC_STIR_R_INTID_CAN1       ((uint32_t)0x00000027)
#define NVIC_STIR_R_INTID_ETH       ((uint32_t)0x00000028)
#define NVIC_STIR_R_INTID_HIB      ((uint32_t)0x00000029)
#define NVIC_STIR_R_INTID_USB      ((uint32_t)0x0000002A)
#define NVIC_STIR_R_INTID_PWM0GEN3        ((uint32_t)0x0000002B)
#define NVIC_STIR_R_INTID_UDMASOFT        ((uint32_t)0x0000002C)
#define NVIC_STIR_R_INTID_UDMAERROR   ((uint32_t)0x0000002D)
#define NVIC_STIR_R_INTID_ADC1SEQ0   ((uint32_t)0x0000002E)
#define NVIC_STIR_R_INTID_ADC1SEQ1  ((uint32_t)0x0000002F)
#define NVIC_STIR_R_INTID_ADC1SEQ2   ((uint32_t)0x00000030)
#define NVIC_STIR_R_INTID_ADC1SEQ3   ((uint32_t)0x00000031)
#define NVIC_STIR_R_INTID_EPI0   ((uint32_t)0x00000032)
#define NVIC_STIR_R_INTID_GPIOJ   ((uint32_t)0x00000033)
#define NVIC_STIR_R_INTID_GPIOK      ((uint32_t)0x00000034)
#define NVIC_STIR_R_INTID_GPIOL      ((uint32_t)0x00000035)
#define NVIC_STIR_R_INTID_SSI2      ((uint32_t)0x00000036)
#define NVIC_STIR_R_INTID_SSI3      ((uint32_t)0x00000037)
#define NVIC_STIR_R_INTID_UART3      ((uint32_t)0x00000038)
#define NVIC_STIR_R_INTID_UART4       ((uint32_t)0x00000039)
#define NVIC_STIR_R_INTID_UART5       ((uint32_t)0x0000003A)
#define NVIC_STIR_R_INTID_UART6      ((uint32_t)0x0000003B)
#define NVIC_STIR_R_INTID_UART7      ((uint32_t)0x0000003C)
#define NVIC_STIR_R_INTID_I2C2      ((uint32_t)0x0000003D)
#define NVIC_STIR_R_INTID_I2C3      ((uint32_t)0x0000003E)
#define NVIC_STIR_R_INTID_TIMER4A      ((uint32_t)0x0000003F)
#define NVIC_STIR_R_INTID_TIMER4B      ((uint32_t)0x00000040)
#define NVIC_STIR_R_INTID_TIMER5A      ((uint32_t)0x00000041)
#define NVIC_STIR_R_INTID_TIMER5B      ((uint32_t)0x00000042)
#define NVIC_STIR_R_INTID_FP_EXC      ((uint32_t)0x00000043)
#define NVIC_STIR_R_INTID_RES84       ((uint32_t)0x00000044)
#define NVIC_STIR_R_INTID_RES85       ((uint32_t)0x00000045)
#define NVIC_STIR_R_INTID_I2C4    ((uint32_t)0x00000046)
#define NVIC_STIR_R_INTID_I2C5    ((uint32_t)0x00000047)
#define NVIC_STIR_R_INTID_GPIOM      ((uint32_t)0x00000048)
#define NVIC_STIR_R_INTID_GPION      ((uint32_t)0x00000049)
#define NVIC_STIR_R_INTID_RES90      ((uint32_t)0x0000004A)
#define NVIC_STIR_R_INTID_TAMPER      ((uint32_t)0x0000004B)
#define NVIC_STIR_R_INTID_GPIOP      ((uint32_t)0x0000004C)
#define NVIC_STIR_R_INTID_GPIOP1      ((uint32_t)0x0000004D)
#define NVIC_STIR_R_INTID_GPIOP2      ((uint32_t)0x0000004E)
#define NVIC_STIR_R_INTID_GPIOP3      ((uint32_t)0x0000004F)
#define NVIC_STIR_R_INTID_GPIOP4      ((uint32_t)0x00000050)
#define NVIC_STIR_R_INTID_GPIOP5      ((uint32_t)0x00000051)
#define NVIC_STIR_R_INTID_GPIOP6      ((uint32_t)0x00000052)
#define NVIC_STIR_R_INTID_GPIOP7      ((uint32_t)0x00000053)
#define NVIC_STIR_R_INTID_GPIOQ     ((uint32_t)0x00000054)
#define NVIC_STIR_R_INTID_GPIOQ1     ((uint32_t)0x00000055)
#define NVIC_STIR_R_INTID_GPIOQ2     ((uint32_t)0x00000056)
#define NVIC_STIR_R_INTID_GPIOQ3     ((uint32_t)0x00000057)
#define NVIC_STIR_R_INTID_GPIOQ4     ((uint32_t)0x00000058)
#define NVIC_STIR_R_INTID_GPIOQ5     ((uint32_t)0x00000059)
#define NVIC_STIR_R_INTID_GPIOQ6     ((uint32_t)0x0000005A)
#define NVIC_STIR_R_INTID_GPIOQ7     ((uint32_t)0x0000005B)
#define NVIC_STIR_R_INTID_RES108    ((uint32_t)0x0000005C)
#define NVIC_STIR_R_INTID_RES109    ((uint32_t)0x0000005D)
#define NVIC_STIR_R_INTID_SHA_MD5   ((uint32_t)0x0000005E)
#define NVIC_STIR_R_INTID_AES   ((uint32_t)0x0000005F)
#define NVIC_STIR_R_INTID_DES   ((uint32_t)0x00000060)
#define NVIC_STIR_R_INTID_RES113   ((uint32_t)0x00000061)
#define NVIC_STIR_R_INTID_TIMER6A   ((uint32_t)0x00000062)
#define NVIC_STIR_R_INTID_TIMER6B   ((uint32_t)0x00000063)
#define NVIC_STIR_R_INTID_TIMER7A   ((uint32_t)0x00000064)
#define NVIC_STIR_R_INTID_TIMER7B   ((uint32_t)0x00000065)
#define NVIC_STIR_R_INTID_I2C6   ((uint32_t)0x00000066)
#define NVIC_STIR_R_INTID_I2C7   ((uint32_t)0x00000067)
#define NVIC_STIR_R_INTID_RES120   ((uint32_t)0x00000068)
#define NVIC_STIR_R_INTID_RES121   ((uint32_t)0x00000069)
#define NVIC_STIR_R_INTID_RES122     ((uint32_t)0x0000006A)
#define NVIC_STIR_R_INTID_RES123     ((uint32_t)0x0000006B)
#define NVIC_STIR_R_INTID_RES124     ((uint32_t)0x0000006C)
#define NVIC_STIR_R_INTID_I2C8     ((uint32_t)0x0000006D)
#define NVIC_STIR_R_INTID_I2C9     ((uint32_t)0x0000006E)
#define NVIC_STIR_R_INTID_RES127     ((uint32_t)0x0000006F)
#define NVIC_STIR_R_INTID_RES128     ((uint32_t)0x00000070)
#define NVIC_STIR_R_INTID_RES129     ((uint32_t)0x00000071)

#define NVIC_STIR_INTID_GPIOA     ((uint32_t)0x00000000)
#define NVIC_STIR_INTID_GPIOB	    ((uint32_t)0x00000001)
#define NVIC_STIR_INTID_GPIOC	    ((uint32_t)0x00000002)
#define NVIC_STIR_INTID_GPIOD     ((uint32_t)0x00000003)
#define NVIC_STIR_INTID_GPIOE     ((uint32_t)0x00000004)
#define NVIC_STIR_INTID_UART0     ((uint32_t)0x00000005)
#define NVIC_STIR_INTID_UART1     ((uint32_t)0x00000006)
#define NVIC_STIR_INTID_SSI0      ((uint32_t)0x00000007)
#define NVIC_STIR_INTID_I2C0      ((uint32_t)0x00000008)
#define NVIC_STIR_INTID_PWM0FAULT  ((uint32_t)0x00000009)
#define NVIC_STIR_INTID_PWM0GEN0   ((uint32_t)0x0000000A)
#define NVIC_STIR_INTID_PWM0GEN1   ((uint32_t)0x0000000B)
#define NVIC_STIR_INTID_PWM0GEN2   ((uint32_t)0x0000000C)
#define NVIC_STIR_INTID_QEI0      ((uint32_t)0x0000000D)
#define NVIC_STIR_INTID_ADC0SEQ0  ((uint32_t)0x0000000E)
#define NVIC_STIR_INTID_ADC0SEQ1  ((uint32_t)0x0000000F)
#define NVIC_STIR_INTID_ADC0SEQ2  ((uint32_t)0x00000010)
#define NVIC_STIR_INTID_ADC0SEQ3  ((uint32_t)0x00000011)
#define NVIC_STIR_INTID_WDT01     ((uint32_t)0x00000012)
#define NVIC_STIR_INTID_TIMER0A   ((uint32_t)0x00000013)
#define NVIC_STIR_INTID_TIMER0B   ((uint32_t)0x00000014)
#define NVIC_STIR_INTID_TIMER1A   ((uint32_t)0x00000015)
#define NVIC_STIR_INTID_TIMER1B   ((uint32_t)0x00000016)
#define NVIC_STIR_INTID_TIMER2A   ((uint32_t)0x00000017)
#define NVIC_STIR_INTID_TIMER2B   ((uint32_t)0x00000018)
#define NVIC_STIR_INTID_ACOMP0    ((uint32_t)0x00000019)
#define NVIC_STIR_INTID_ACOMP1	((uint32_t)0x0000001A)
#define NVIC_STIR_INTID_RES43     ((uint32_t)0x0000001B)
#define NVIC_STIR_INTID_SYSCTL    ((uint32_t)0x0000001C)
#define NVIC_STIR_INTID_FLASH	    ((uint32_t)0x0000001D)
#define NVIC_STIR_INTID_GPIOF     ((uint32_t)0x0000001E)
#define NVIC_STIR_INTID_RES47     ((uint32_t)0x0000001F)
#define NVIC_STIR_INTID_RES48	    ((uint32_t)0x00000020)
#define NVIC_STIR_INTID_UART2	    ((uint32_t)0x00000021)
#define NVIC_STIR_INTID_SSI1	    ((uint32_t)0x00000022)
#define NVIC_STIR_INTID_TIMER3A   ((uint32_t)0x00000023)
#define NVIC_STIR_INTID_TIMER3B   ((uint32_t)0x00000024)
#define NVIC_STIR_INTID_I2C1      ((uint32_t)0x00000025)
#define NVIC_STIR_INTID_CAN0      ((uint32_t)0x00000026)
#define NVIC_STIR_INTID_CAN1      ((uint32_t)0x00000027)
#define NVIC_STIR_INTID_ETH	    ((uint32_t)0x00000028)
#define NVIC_STIR_INTID_HIB	    ((uint32_t)0x00000029)
#define NVIC_STIR_INTID_USB	    ((uint32_t)0x0000002A)
#define NVIC_STIR_INTID_PWM0GEN3		((uint32_t)0x0000002B)
#define NVIC_STIR_INTID_UDMASOFT	    ((uint32_t)0x0000002C)
#define NVIC_STIR_INTID_UDMAERROR	((uint32_t)0x0000002D)
#define NVIC_STIR_INTID_ADC1SEQ0  ((uint32_t)0x0000002E)
#define NVIC_STIR_INTID_ADC1SEQ1 ((uint32_t)0x0000002F)
#define NVIC_STIR_INTID_ADC1SEQ2  ((uint32_t)0x00000030)
#define NVIC_STIR_INTID_ADC1SEQ3  ((uint32_t)0x00000031)
#define NVIC_STIR_INTID_EPI0  ((uint32_t)0x00000032)
#define NVIC_STIR_INTID_GPIOJ  ((uint32_t)0x00000033)
#define NVIC_STIR_INTID_GPIOK     ((uint32_t)0x00000034)
#define NVIC_STIR_INTID_GPIOL	    ((uint32_t)0x00000035)
#define NVIC_STIR_INTID_SSI2	    ((uint32_t)0x00000036)
#define NVIC_STIR_INTID_SSI3	    ((uint32_t)0x00000037)
#define NVIC_STIR_INTID_UART3	    ((uint32_t)0x00000038)
#define NVIC_STIR_INTID_UART4	    ((uint32_t)0x00000039)
#define NVIC_STIR_INTID_UART5	    ((uint32_t)0x0000003A)
#define NVIC_STIR_INTID_UART6	    ((uint32_t)0x0000003B)
#define NVIC_STIR_INTID_UART7	    ((uint32_t)0x0000003C)
#define NVIC_STIR_INTID_I2C2	    ((uint32_t)0x0000003D)
#define NVIC_STIR_INTID_I2C3	    ((uint32_t)0x0000003E)
#define NVIC_STIR_INTID_TIMER4A	    ((uint32_t)0x0000003F)
#define NVIC_STIR_INTID_TIMER4B	    ((uint32_t)0x00000040)
#define NVIC_STIR_INTID_TIMER5A	    ((uint32_t)0x00000041)
#define NVIC_STIR_INTID_TIMER5B	    ((uint32_t)0x00000042)
#define NVIC_STIR_INTID_FP_EXC	    ((uint32_t)0x00000043)
#define NVIC_STIR_INTID_RES84	    ((uint32_t)0x00000044)
#define NVIC_STIR_INTID_RES85	    ((uint32_t)0x00000045)
#define NVIC_STIR_INTID_I2C4   ((uint32_t)0x00000046)
#define NVIC_STIR_INTID_I2C5   ((uint32_t)0x00000047)
#define NVIC_STIR_INTID_GPIOM	    ((uint32_t)0x00000048)
#define NVIC_STIR_INTID_GPION	    ((uint32_t)0x00000049)
#define NVIC_STIR_INTID_RES90		((uint32_t)0x0000004A)
#define NVIC_STIR_INTID_TAMPER	    ((uint32_t)0x0000004B)
#define NVIC_STIR_INTID_GPIOP	    ((uint32_t)0x0000004C)
#define NVIC_STIR_INTID_GPIOP1	    ((uint32_t)0x0000004D)
#define NVIC_STIR_INTID_GPIOP2	    ((uint32_t)0x0000004E)
#define NVIC_STIR_INTID_GPIOP3	    ((uint32_t)0x0000004F)
#define NVIC_STIR_INTID_GPIOP4	    ((uint32_t)0x00000050)
#define NVIC_STIR_INTID_GPIOP5	    ((uint32_t)0x00000051)
#define NVIC_STIR_INTID_GPIOP6	    ((uint32_t)0x00000052)
#define NVIC_STIR_INTID_GPIOP7	    ((uint32_t)0x00000053)
#define NVIC_STIR_INTID_GPIOQ    ((uint32_t)0x00000054)
#define NVIC_STIR_INTID_GPIOQ1    ((uint32_t)0x00000055)
#define NVIC_STIR_INTID_GPIOQ2    ((uint32_t)0x00000056)
#define NVIC_STIR_INTID_GPIOQ3    ((uint32_t)0x00000057)
#define NVIC_STIR_INTID_GPIOQ4    ((uint32_t)0x00000058)
#define NVIC_STIR_INTID_GPIOQ5    ((uint32_t)0x00000059)
#define NVIC_STIR_INTID_GPIOQ6    ((uint32_t)0x0000005A)
#define NVIC_STIR_INTID_GPIOQ7    ((uint32_t)0x0000005B)
#define NVIC_STIR_INTID_RES108   ((uint32_t)0x0000005C)
#define NVIC_STIR_INTID_RES109   ((uint32_t)0x0000005D)
#define NVIC_STIR_INTID_SHA_MD5  ((uint32_t)0x0000005E)
#define NVIC_STIR_INTID_AES  ((uint32_t)0x0000005F)
#define NVIC_STIR_INTID_DES  ((uint32_t)0x00000060)
#define NVIC_STIR_INTID_RES113  ((uint32_t)0x00000061)
#define NVIC_STIR_INTID_TIMER6A   ((uint32_t)0x00000062)
#define NVIC_STIR_INTID_TIMER6B   ((uint32_t)0x00000063)
#define NVIC_STIR_INTID_TIMER7A   ((uint32_t)0x00000064)
#define NVIC_STIR_INTID_TIMER7B   ((uint32_t)0x00000065)
#define NVIC_STIR_INTID_I2C6   ((uint32_t)0x00000066)
#define NVIC_STIR_INTID_I2C7   ((uint32_t)0x00000067)
#define NVIC_STIR_INTID_RES120   ((uint32_t)0x00000068)
#define NVIC_STIR_INTID_RES121   ((uint32_t)0x00000069)
#define NVIC_STIR_INTID_RES122     ((uint32_t)0x0000006A)
#define NVIC_STIR_INTID_RES123     ((uint32_t)0x0000006B)
#define NVIC_STIR_INTID_RES124     ((uint32_t)0x0000006C)
#define NVIC_STIR_INTID_I2C8     ((uint32_t)0x0000006D)
#define NVIC_STIR_INTID_I2C9       ((uint32_t)0x0000006E)
#define NVIC_STIR_INTID_RES127     ((uint32_t)0x0000006F)
#define NVIC_STIR_INTID_RES128     ((uint32_t)0x00000070)
#define NVIC_STIR_INTID_RES129     ((uint32_t)0x00000071)
//---------------
typedef enum
{
    NVIC_enOK =0,
    NVIC_enERROR=1
}NVIC_nSTATUS;
typedef enum
{
    NVIC_enENABLE =0,
    NVIC_enDISABLE=1
}NVIC_nENABLE;

typedef enum
{
    NVIC_enPENDING =0,
    NVIC_enNOPENDING=1
}NVIC_nPENDING;
typedef enum
{
    NVIC_enACTIVE =0,
    NVIC_enNOACTIVE=1
}NVIC_nACTIVE;


typedef enum
{
    NVIC_enPRI0=0,
    NVIC_enPRI1=1,
    NVIC_enPRI2=2,
    NVIC_enPRI3=3,
    NVIC_enPRI4=4,
    NVIC_enPRI5=5,
    NVIC_enPRI6=6,
    NVIC_enPRI7=7,
    NVIC_enDEFAULT=0xFF,
}NVIC_nPRIORITY;
typedef enum
{
     NVIC_enSTIR_GPIOA      =(0x00000000),
     NVIC_enSTIR_GPIOB      =(0x00000001),
     NVIC_enSTIR_GPIOC      =(0x00000002),
     NVIC_enSTIR_GPIOD      =(0x00000003),
     NVIC_enSTIR_GPIOE      =(0x00000004),
     NVIC_enSTIR_UART0      =(0x00000005),
     NVIC_enSTIR_UART1      =(0x00000006),
     NVIC_enSTIR_SSI0       =(0x00000007),
     NVIC_enSTIR_I2C0       =(0x00000008),
     NVIC_enSTIR_PWM0FAULT   =(0x00000009),
     NVIC_enSTIR_PWM0GEN0    =(0x0000000A),
     NVIC_enSTIR_PWM0GEN1    =(0x0000000B),
     NVIC_enSTIR_PWM0GEN2    =(0x0000000C),
     NVIC_enSTIR_QEI0       =(0x0000000D),
     NVIC_enSTIR_ADC0SEQ0   =(0x0000000E),
     NVIC_enSTIR_ADC0SEQ1   =(0x0000000F),
     NVIC_enSTIR_ADC0SEQ2   =(0x00000010),
     NVIC_enSTIR_ADC0SEQ3   =(0x00000011),
     NVIC_enSTIR_WDT01      =(0x00000012),
     NVIC_enSTIR_TIMER0A    =(0x00000013),
     NVIC_enSTIR_TIMER0B    =(0x00000014),
     NVIC_enSTIR_TIMER1A    =(0x00000015),
     NVIC_enSTIR_TIMER1B    =(0x00000016),
     NVIC_enSTIR_TIMER2A    =(0x00000017),
     NVIC_enSTIR_TIMER2B    =(0x00000018),
     NVIC_enSTIR_ACOMP0     =(0x00000019),
     NVIC_enSTIR_ACOMP1     =(0x0000001A),
     NVIC_enSTIR_RES43      =(0x0000001B),
     NVIC_enSTIR_SYSCTL     =(0x0000001C),
     NVIC_enSTIR_FLASH      =(0x0000001D),
     NVIC_enSTIR_GPIOF      =(0x0000001E),
     NVIC_enSTIR_RES47      =(0x0000001F),
     NVIC_enSTIR_RES48      =(0x00000020),
     NVIC_enSTIR_UART2      =(0x00000021),
     NVIC_enSTIR_SSI1       =(0x00000022),
     NVIC_enSTIR_TIMER3A    =(0x00000023),
     NVIC_enSTIR_TIMER3B    =(0x00000024),
     NVIC_enSTIR_I2C1       =(0x00000025),
     NVIC_enSTIR_CAN0       =(0x00000026),
     NVIC_enSTIR_CAN1       =(0x00000027),
     NVIC_enSTIR_ETH       =(0x00000028),
     NVIC_enSTIR_HIB      =(0x00000029),
     NVIC_enSTIR_USB      =(0x0000002A),
     NVIC_enSTIR_PWM0GEN3        =(0x0000002B),
     NVIC_enSTIR_UDMASOFT        =(0x0000002C),
     NVIC_enSTIR_UDMAERROR   =(0x0000002D),
     NVIC_enSTIR_ADC1SEQ0   =(0x0000002E),
     NVIC_enSTIR_ADC1SEQ1  =(0x0000002F),
     NVIC_enSTIR_ADC1SEQ2   =(0x00000030),
     NVIC_enSTIR_ADC1SEQ3   =(0x00000031),
     NVIC_enSTIR_EPI0   =(0x00000032),
     NVIC_enSTIR_GPIOJ   =(0x00000033),
     NVIC_enSTIR_GPIOK      =(0x00000034),
     NVIC_enSTIR_GPIOL      =(0x00000035),
     NVIC_enSTIR_SSI2      =(0x00000036),
     NVIC_enSTIR_SSI3      =(0x00000037),
     NVIC_enSTIR_UART3      =(0x00000038),
     NVIC_enSTIR_UART4       =(0x00000039),
     NVIC_enSTIR_UART5       =(0x0000003A),
     NVIC_enSTIR_UART6      =(0x0000003B),
     NVIC_enSTIR_UART7      =(0x0000003C),
     NVIC_enSTIR_I2C2      =(0x0000003D),
     NVIC_enSTIR_I2C3      =(0x0000003E),
     NVIC_enSTIR_TIMER4A      =(0x0000003F),
     NVIC_enSTIR_TIMER4B      =(0x00000040),
     NVIC_enSTIR_TIMER5A      =(0x00000041),
     NVIC_enSTIR_TIMER5B      =(0x00000042),
     NVIC_enSTIR_FP_EXC      =(0x00000043),
     NVIC_enSTIR_RES84       =(0x00000044),
     NVIC_enSTIR_RES85       =(0x00000045),
     NVIC_enSTIR_I2C4    =(0x00000046),
     NVIC_enSTIR_I2C5    =(0x00000047),
     NVIC_enSTIR_GPIOM      =(0x00000048),
     NVIC_enSTIR_GPION      =(0x00000049),
     NVIC_enSTIR_RES90      =(0x0000004A),
     NVIC_enSTIR_TAMPER      =(0x0000004B),
     NVIC_enSTIR_GPIOP      =(0x0000004C),
     NVIC_enSTIR_GPIOP1      =(0x0000004D),
     NVIC_enSTIR_GPIOP2      =(0x0000004E),
     NVIC_enSTIR_GPIOP3      =(0x0000004F),
     NVIC_enSTIR_GPIOP4      =(0x00000050),
     NVIC_enSTIR_GPIOP5      =(0x00000051),
     NVIC_enSTIR_GPIOP6      =(0x00000052),
     NVIC_enSTIR_GPIOP7      =(0x00000053),
     NVIC_enSTIR_GPIOQ     =(0x00000054),
     NVIC_enSTIR_GPIOQ1     =(0x00000055),
     NVIC_enSTIR_GPIOQ2     =(0x00000056),
     NVIC_enSTIR_GPIOQ3     =(0x00000057),
     NVIC_enSTIR_GPIOQ4     =(0x00000058),
     NVIC_enSTIR_GPIOQ5     =(0x00000059),
     NVIC_enSTIR_GPIOQ6     =(0x0000005A),
     NVIC_enSTIR_GPIOQ7     =(0x0000005B),
     NVIC_enSTIR_RES108    =(0x0000005C),
     NVIC_enSTIR_RES109    =(0x0000005D),
     NVIC_enSTIR_SHA_MD5   =(0x0000005E),
     NVIC_enSTIR_AES   =(0x0000005F),
     NVIC_enSTIR_DES   =(0x00000060),
     NVIC_enSTIR_RES113   =(0x00000061),
     NVIC_enSTIR_TIMER6A   =(0x00000062),
     NVIC_enSTIR_TIMER6B   =(0x00000063),
     NVIC_enSTIR_TIMER7A   =(0x00000064),
     NVIC_enSTIR_TIMER7B   =(0x00000065),
     NVIC_enSTIR_I2C6   =(0x00000066),
     NVIC_enSTIR_I2C7   =(0x00000067),
     NVIC_enSTIR_RES120   =(0x00000068),
     NVIC_enSTIR_RES121   =(0x00000069),
     NVIC_enSTIR_RES122     =(0x0000006A),
     NVIC_enSTIR_RES123     =(0x0000006B),
     NVIC_enSTIR_RES124     =(0x0000006C),
     NVIC_enSTIR_I2C8       =(0x0000006D),
     NVIC_enSTIR_I2C9       =(0x0000006E),
     NVIC_enSTIR_RES127     =(0x0000006F),
     NVIC_enSTIR_RES128     =(0x00000070),
     NVIC_enSTIR_RES129     =(0x00000071),
}NVIC_nSTIR;

typedef enum
{/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
      ThreadMode_IRQn             = -16,
      Reset_IRQn                 = -15,
      NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
      HardFault_IRQn              = -13,
      MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
      BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
      UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
      SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
      DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
      PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
      SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  TM4C specific Interrupt Numbers **********************************************************************/
      GPIOA_IRQn                = 0,
      GPIOB_IRQn                = 1,
      GPIOC_IRQn                = 2,
      GPIOD_IRQn                = 3,
      GPIOE_IRQn                = 4,
      UART0_IRQn                = 5,
      UART1_IRQn                = 6,
      SSI0_IRQn                 = 7,
      I2C0_IRQn                 = 8,
      PWM0FAULT_IRQn             = 9,
      PWM0GEN0_IRQn              = 10,
      PWM0GEN1_IRQn              = 11,
      PWM0GEN2_IRQn              = 12,
      QEI0_IRQn                 = 13,
      ADC0SEQ0_IRQn             = 14,
      ADC0SEQ1_IRQn             = 15,
      ADC0SEQ2_IRQn             = 16,
      ADC0SEQ3_IRQn             = 17,
      WDT01_IRQn                = 18,
      TIMER0A_IRQn              = 19,
      TIMER0B_IRQn              = 20,
      TIMER1A_IRQn              = 21,
      TIMER1B_IRQn              = 22,
      TIMER2A_IRQn              = 23,
      TIMER2B_IRQn              = 24,
      ACOMP0_IRQn               = 25,
      ACOMP1_IRQn               = 26,
      RES43_IRQn                = 27,
      SYSCTL_IRQn               = 28,
      FLASH_IRQn                = 29,
      GPIOF_IRQn                = 30,
      RES47_IRQn                = 31,
      RES48_IRQn                = 32,
      UART2_IRQn                = 33,
      SSI1_IRQn                 = 34,
      TIMER3A_IRQn              = 35,
      TIMER3B_IRQn              = 36,
      I2C1_IRQn                 = 37,
      CAN0_IRQn                 = 38,
      CAN1_IRQn                 = 39,
      ETH_IRQn                  = 40,
      HIB_IRQn                  = 41,
      USB_IRQn                  = 42,
      PWM0GEN3_IRQn              = 43,
      UDMASOFT_IRQn             = 44,
      UDMAERROR_IRQn            = 45,
      ADC1SEQ0_IRQn             = 46,
      ADC1SEQ1_IRQn             = 47,
      ADC1SEQ2_IRQn             = 48,
      ADC1SEQ3_IRQn             = 49,
      EPI0_IRQn                 = 50,
      GPIOJ_IRQn                = 51,
      GPIOK_IRQn                = 52,
      GPIOL_IRQn                = 53,
      SSI2_IRQn                 = 54,
      SSI3_IRQn                 = 55,
      UART3_IRQn                = 56,
      UART4_IRQn                = 57,
      UART5_IRQn                = 58,
      UART6_IRQn                = 59,
      UART7_IRQn                = 60,
      I2C2_IRQn                 = 61,
      I2C3_IRQn                 = 62,
      TIMER4A_IRQn              = 63,
      TIMER4B_IRQn              = 64,
      TIMER5A_IRQn              = 65,
      TIMER5B_IRQn              = 66,
      FP_EXC_IRQn               = 67,
      RES84_IRQn                = 68,
      RES85_IRQn                = 69,
      I2C4_IRQn                 = 70,
      I2C5_IRQn                 = 71,
      GPIOM_IRQn                = 72,
      GPION_IRQn                = 73,
      RES90_IRQn                = 74,
      TAMPER_IRQn               = 75,
      GPIOP_IRQn                = 76,
      GPIOP1_IRQn               = 77,
      GPIOP2_IRQn               = 78,
      GPIOP3_IRQn               = 79,
      GPIOP4_IRQn               = 80,
      GPIOP5_IRQn               = 81,
      GPIOP6_IRQn               = 82,
      GPIOP7_IRQn               = 83,
      GPIOQ_IRQn                = 84,
      GPIOQ1_IRQn               = 85,
      GPIOQ2_IRQn               = 86,
      GPIOQ3_IRQn               = 87,
      GPIOQ4_IRQn               = 88,
      GPIOQ5_IRQn               = 89,
      GPIOQ6_IRQn               = 90,
      GPIOQ7_IRQn               = 91,
      RES108_IRQn               = 92,
      RES109_IRQn               = 93,
      SHA_MD5_IRQn              = 94,
      AES_IRQn                  = 95,
      DES_IRQn                  = 96,
      RES113_IRQn               = 97,
      TIMER6A_IRQn              = 98,
      TIMER6B_IRQn              = 99,
      TIMER7A_IRQn              = 100,
      TIMER7B_IRQn              = 101,
      I2C6_IRQn                 = 102,
      I2C7_IRQn                 = 103,
      RES120_IRQn               = 104,
      RES121_IRQn               = 105,
      RES122_IRQn               = 106,
      RES123_IRQn               = 107,
      RES124_IRQn               = 108,
      I2C8_IRQn                 = 109,
      I2C9_IRQn                 = 110,
      RES127_IRQn               = 111,
      RES128_IRQn               = 112,
      RES129_IRQn               = 113,
} IRQn_Type;

NVIC_nSTATUS    NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority);
NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ);

NVIC_nENABLE    NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority);
NVIC_nSTATUS    NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ);

NVIC_nPENDING   NVIC__enGetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enClearPendingIRQ(NVIC_nSTIR enIRQ);

NVIC_nACTIVE    NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enTriggerIRQ(NVIC_nSTIR enIRQ);




#endif /* NVIC_H_ */
