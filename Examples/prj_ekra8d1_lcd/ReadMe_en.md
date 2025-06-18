# EK-RA8D1 LCD display program
- This project is an example of a program that displays images on the LCD included with the EK-RA8D1. You can import the project into e2studio and run it.   
Operation has been confirmed with e2studio Version 2025-04 (25.04.0).   

- This program was created based on the `mipi_dsi` in the `EK-RA8D1 Example Project Bundle` provided by Renesas Electronics. The `EK-RA8D1 Example Project Bundle` can be obtained from the following link.  
[EK-RA8D1 Evaluation Kit for RA8D1 MCU Group](https://www.renesas.com/en/design-resources/boards-kits/ek-ra8d1)

- This program uses FSP Version 5.9.0 provided by Renesas Electronics.    

- For information on EK-RA8D1, e2studio, EK-RA8D1 Example Project Bundle, FSP, etc., please refer to the respective documents or websites.  

## Project directory structure  

├─Application .........  LCD display application program  
│  ├─ app_main.c ......  Application program (main)  
│  ├─ tglib.c .........  Tiny LCD display library  
│  └─ tglig.h  
├─mtk3_bsp2 ............. μT-Kernel 3.0 BSP  
├─ra  
├─ra_cfg  
├─ra_gen  
├─script  
└─src  
