# Wireless Environmental Monitoring System  

## Project Introduction  
This project designs and implements an indoor wireless environmental monitoring system based on the STM32 microcontroller, featuring temperature and humidity collection, infrared human body sensing, fire warning, and wireless data transmission functions. The system sends collected environmental data to a host computer via a Wi-Fi module, enabling remote monitoring and alarming of the indoor environment.  

## Main Features  
**Temperature and Humidity Collection**: Uses the DHT11 sensor to collect real-time indoor temperature and humidity data.  
**High Temperature/Fire Alarm**: Sets thresholds; triggers a buzzer or LED alarm when values exceed the range.  
**Infrared Human Body Sensing**: Uses the HC-SR501 module to detect people entering or leaving.  
**Wireless Data Transmission**: Sends data to the host computer via the ESP8266 Wi-Fi module (STA mode).  
**Main Control Chip**: STM32F103 (Wildfire - Guider development board)  
<img width="5920" height="2664" alt="Transfer_4" src="https://github.com/user-attachments/assets/6b45758b-1c8b-4fa8-a30f-69da00f2787e" />

## System Architecture  
**Data Acquisition Layer**: DHT11 and HC-SR501 - Collect environmental information  
**Control Layer**: STM32 - Processes data and determines alarm conditions  
**Transmission Layer**: ESP8266 - Sends data via Wi-Fi  
**Application Layer**: Host computer receives and displays data  

## File Structure
Main  
├── src/ -- Source code files  
├── demo/ -- Demonstration images  
├── report/ -- Project report (PDF)  
├── README.md -- Project documentation  
└── Requirement -- Environment configuration  

## Demonstration Video  
Baidu Netdisk link:  Detection_Video_demo.mp4  
Link: https://pan.baidu.com/s/1glfwlx05e6KSf9tHivTiQg Code: 1234  

# 无线环境监控系统

## 项目简介  
本项目基于STM32微控制器设计并实现了一个室内无线环境监控系统，具备温湿度采集、红外人体感应、火灾预警及无线数据传输等功能。系统通过Wi-Fi模块将采集到的环境数据发送至上位机，实现对室内环境的远程监控与报警。  

## 主要功能  
**温湿度采集**：使用DHT11传感器，实时采集室内温湿度数据。  
**高温/火灾报警**：设定阈值，超出范围时触发蜂鸣器或LED报警。  
**红外人体感应**：使用HC-SR501模块，检测人员进出。  
**无线数据传输**：通过ESP8266 Wi-Fi模块（STA模式）将数据发送至上位机。  
**主控芯片**：STM32F103（野火-指南者开发板）  
<img width="2212" height="1087" alt="QQ20260311-145120" src="https://github.com/user-attachments/assets/a09535ca-5f38-4196-b24c-aa31e1a4bb0e" />

## 系统架构  
**数据采集层**：DHT11 和 HC-SR501	采集环境信息  
**控制层**：STM32					处理数据并判断报警条件  
**传输层**：ESP8266					通过Wi-Fi发送数据  
**应用层**：上位机接收并显示数据  

## 文件结构  
Main  
├── src/                # 源代码文件  
├── demo/               # 演示图片  
├── report/             # 项目报告（PDF）  
├── README.md           # 项目说明文档  
└── Requirment          # 环境配置  

## 演示视频  
百度网盘链接：通过网盘分享的文件：Detection_Video_demo.mp4  
链接: https://pan.baidu.com/s/1glfwlx05e6KSf9tHivTiQg 提取码: 1234  
