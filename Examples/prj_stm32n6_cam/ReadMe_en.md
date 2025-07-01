# STM32N6570-DK CAMERA Program
- This project is an example of a program using the camera included with the STM32N6570-DK. You can import the project into STM32CubeIDE and run it.   
Operation has been confirmed with STM32CubeIDE Version 1.18.1.  

- This program was created based on the `DCMIPP_ContinuousMode` of `STM32CubeN6` provided by STMicroelectronics. `STM32CubeN6` can be obtained from the following link.  
[STM32Cube MCU Package for STM32N6 series (HAL, CMSIS devices, and examples running on ST boards)](https://www.st.com/ja/embedded-software/stm32cuben6.html)  

- This program uses HAL and BSP provided by STMicroelectronics.    

- For information on STM32N6570-DK, STM32CubeIDE, STM32CubeN6, BSP, HAL, etc., please refer to the respective documentation or websites.  

## Application behavior
- Images captured by the board's camera are displayed on the LCD.  
- Pressing the user button (USER) on the board will stop the camera operation. Pressing the button again will resume operation. While stopped, the last image is displayed on the LCD.  

## Project directory structure  
This program runs on FSBL in the same way as `DCMIPP_ContinuousMode`.  

├─ FSBL .............. Fast Stage Boot Loader   
│  ├─Application ........... Application program  
│  │  └─ userman.c 
│  ├─mtk3_bsp2 ............. μT-Kernel 3.0 BSP  
│  │  
