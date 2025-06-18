# STM32N6570-DK LCD display program
- This project is an example of a program that displays images on the LCD included with the STM32N6570-DK. You can import the project into STM32CubeIDE and run it.   
Operation has been confirmed with STM32CubeIDE Version 1.18.1.   

- This program was created based on the `STM32CubeN6` provided by STMicroelectronics. The `STM32CubeN6` can be obtained from the following link.  
[STM32Cube MCU Package for STM32N6 series (HAL, CMSIS devices, and examples running on ST boards)](https://www.st.com/en/embedded-software/stm32cuben6.html)

- This program uses HAL and BSP provided by STMicroelectronics.    

- For information on STM32N6570-DK, STM32CubeIDE, STM32CubeN6, BSP, HAL, etc., please refer to the respective documentation or websites.  

## Project directory structure  
├─ Appli .............. Application   
│  ├─Application ........... LCD display application program  
│  │  ├─ app_main.c ........ Application program (main)  
│  │  ├─ tglib.c ........... Tiny LCD display library  
│  │  └─ tglig.h 
│  ├─mtk3_bsp2 ............. μT-Kernel 3.0 BSP  
│  │  
│
├─FSBL ................. Fast Stage Boot Loader
│
