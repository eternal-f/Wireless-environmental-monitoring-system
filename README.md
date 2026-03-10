# Wireless-environmental-monitoring-system
"The design of the wireless environment monitoring system" is mainly accomplished using STM32, including the function of collecting and sampling temperature data in the indoor area, the transmission and conduction function for remote sending, and the threshold judgment function for high-temperature alarms, etc. 

Among them, remote transmission can be achieved through Ethernet, or alternatively, relevant information can be sent via wireless communication.

Using the pins:
      USART		PA9 PA10
			ESP8266		PB8 PB9 PB10 PB11
			DHT11		PE6
			ir			PA4

Relevant code and file are in the src file.

“无线监控系统设计”主要使用STM32完成，包括对室内进行温度采集的收集采样功能，远程发送的传输传导功能，高温报警的阈值判断功能等。

其中远程发送可以使用以太网，也可以选择使用无线通信的方式发送相关信息。

使用引脚：
      USART		PA9 PA10
			ESP8266		PB8 PB9 PB10 PB11
			DHT11		PE6
			ir			PA4

相关代码及配置见src文件夹。
