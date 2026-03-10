//---------头文件引用声明------------
#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_SysTick.h"
#include "bsp_esp8266.h"
#include "test.h"
#include "bsp_dht11.h"
#include "delay.h"
//---------函数声明------------------
void infrared_init(void);
void infrared_Scan(void);

uint8_t flag_ir = 0;																							//全局变量，用于标志红外模块是否检测到人																														

int main ( void )
{
  USART_Config ();																								//初始化串口1
	SysTick_Init ();																								//配置 SysTick 为 1ms 中断一次 
	ESP8266_Init ();																								//初始化WiFi模块使用的接口和外设
  DHT11_Init();																										//DHT11初始化
	infrared_init();																								//红外模块初始化
  ESP8266_StaTcpClient_UnvarnishTest ();													//ESP8266初始化
  while ( 1 );
}

//红外模块初始化端口配置PA4，上拉输入
void infrared_init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_4;		
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOA, &GPIO_InitStructure);				
}

//红外扫描功能，检测到人标志至1，反之置0
void infrared_Scan(void)
{
	extern uint8_t flag_ir;
	if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4) == 0 )  
	{	 
		sw_delay_ms(10);
		if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4) == 0 )
		{
			flag_ir = 1;
			while(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4) == 0 ){}
			flag_ir = 0;
		}
	}  
}

