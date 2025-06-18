# EK-RA8D1 LCD 表示プログラム
- このプロジェクトは、EK-RA8D1付属のLCDに画像表示を行うプログラムの例です。e2studioにプロジェクトをインポートして実行することができます。  
e2studio Version 2025-04(25.04.0)で動作を確認しました。  

- 本プログラムは、ルネサス エレクトロニクスから提供される
`EK-RA8D1 Example Project Bundle`の中の`mipi_dsi`をベースとして作成しました。`EK-RA8D1 Example Project Bundle`は以下から入手できます。  
[EK-RA8D1 RA8D1 MCUグループ評価キット](https://www.renesas.com/ja/design-resources/boards-kits/ek-ra8d1)

- 本プログラムは、ルネサス エレクトロニクスから提供されるFSP Version 5.9.0を利用しています。  

- EK-RA8D1、e2studio、EK-RA8D1 Example Project Bundle、FSPなどに関してはそれぞれのドキュメントやWebをご覧ください。   

## プロジェクトのディレクトリ構成  

├─Application ........... LCD表示アプリケーション・プログラム  
│  ├─ app_main.c ........ アプリケーション・プログラム(main)  
│  ├─ tglib.c............ 簡易LCD表示ライブラリ  
│  └─ tglig.h  
├─mtk3_bsp2 .............. μT-Kernel 3.0 BSP  
├─ra  
├─ra_cfg  
├─ra_gen  
├─script  
└─src  
