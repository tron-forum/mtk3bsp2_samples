# STM32N6570-DK CAMERA プログラム
- このプロジェクトは、STM32N6570-DK付属のカメラを使用したプログラムの例です。STM32CubeIDEにプロジェクトをインポートして実行することができます。  
STM32CubeIDE Version1.18.1で動作を確認しました。  

- 本プログラムは、STマイクロエレクトロニクスから提供される
`STM32CubeN6`の`DCMIPP_ContinuousMode`をベースとして作成しました。`STM32CubeN6`は以下から入手できます。  
[STM32Cube MCU Package for STM32N6 series (HAL, CMSIS devices, and examples running on ST boards)](https://www.st.com/ja/embedded-software/stm32cuben6.html)

- 本プログラムは、STマイクロエレクトロニクスから提供されるHALやBSPを利用しています。  

- STM32N6570-DK、STM32CubeIDE、STM32CubeN6、BSP、HALなどに関してはそれぞれのドキュメントやWebをご覧ください。   

## アプリケーションの動作
- ボード付属のカメラが撮影している画像をLCDに表示します。  
- ボード上のユーザボタン(USER)を押下するとカメラの動作を停止します。再びボタンを押すと動作を再開します。停止中は最後の画像をLCDに表示しています。  

## プロジェクトのディレクトリ構成  
本プログラムは`DCMIPP_ContinuousMode`と同様にFSBL上で動作します。  

├─ FSBL .............. Fast Stage Boot Loader   
│  ├─Application ........... アプリケーション・プログラム  
│  │  └─ usermain.c  
│  ├─mtk3_bsp2 ............. μT-Kernel 3.0 BSP  
│  │  
