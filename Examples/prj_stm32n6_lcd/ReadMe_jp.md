# STM32N6570-DK LCD 表示プログラム
- このプロジェクトは、STM32N6570-DK付属のLCDに画像表示を行うプログラムの例です。STM32CubeIDEにプロジェクトをインポートして実行することができます。  
STM32CubeIDE Version1.18.1で動作を確認しました。  

- 本プログラムは、STマイクロエレクトロニクスから提供される
`STM32CubeN6`をベースとして作成しました。`STM32CubeN6`は以下から入手できます。  
[STM32Cube MCU Package for STM32N6 series (HAL, CMSIS devices, and examples running on ST boards)](https://www.st.com/ja/embedded-software/stm32cuben6.html)

- 本プログラムは、STマイクロエレクトロニクスから提供されるHALやBSPを利用しています。  

- STM32N6570-DK、STM32CubeIDE、STM32CubeN6、BSP、HALなどに関してはそれぞれのドキュメントやWebをご覧ください。   

## プロジェクトのディレクトリ構成  

├─ Appli .............. Application   
│  ├─Application ........... LCD表示アプリケーション・プログラム  
│  │  ├─ app_main.c ........ アプリケーション・プログラム(main)  
│  │  ├─ tglib.c ........... 簡易LCD表示ライブラリ  
│  │  └─ tglig.h 
│  ├─mtk3_bsp2 ............. μT-Kernel 3.0 BSP  
│  │  
│
├─FSBL ................. Fast Stage Boot Loader
│