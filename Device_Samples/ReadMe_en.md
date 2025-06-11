# Device Samples
This is a sample program using μT-Kernel 3.0 device driver.  
It works with the μT-Kernel 3.0 BSP2 sample project (IDE) below. Replace each project's application program with each sample program.  

- mtk3bsp2_stm32n657X0 (STM32N6570-DK)
- tk3bsp2_ra8d1 (EK-RA8D1)
- mtk3bsp2_xmc7200 (KIT_XMC72_EVK)


## Sample programs

### ADC_Sensor
This is a sample program using an A/D converter. You can use sensors that output analog signals.
Obtain the analog input A0 of the Arduino connector using the A/D converter and display it on the serial output for debugging.  

### I2C_Sensor
This is a sample program for sensor control using I2C communication. Acquires data from Sensirion's SHT35 temperature and humidity sensor and displays it on serial output for debugging.  
Use the I2C of the Arduino connector. If you are using EK-RA8D1, please see below.  

- For EK-RA8D1 I2C
  - For EK-RA8D1, you can use either the Arduino connector's I2C or the Grove-1's I2C.
  - If `DEVCNF_USE_HAL_I3C_IIC` is enabled in the configuration, I2C of the Arduino connector will be selected. If `DEVCNF_USE_HAL_IIC` is enabled, Grove-1's I2C will be selected. If both are enabled, the Arduino connector I2C will be selected.
  - When using the I2C of the Arduino connector, turn on SW1-8 (I3C) on the board. At that time, SW1-3 (CAMERA), SW1-5 (ETH-B), and SW1-6 (GLCD (not MIPI)) should be OFF.
  - For details on EK-RA8D1 board settings, please see the EK-RA8D1 user's manual.

## Note
This sample is a simple program to explain how to use the μT-Kernel 3.0 BSP2 device driver. Hardware control implements the minimum functionality and does not guarantee the control method. For microcontrollers and other hardware, please refer to their respective documents.  

