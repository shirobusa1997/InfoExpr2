//====================================================================
//  工学部「情報環境実験２」(富永)  C言語プログラミング
//  ポーカーゲームの戦略
//--------------------------------------------------------------------
//  Poker  usr/s16t287_02/  PokerAgentTester.c
//  実行環境 1)
//    Apple macOS 10.14.1 Mojave g++(Apple LLVM 10.0.0, clang-1000.11.45.5)
//  実行環境 2)
//    Microsoft Windows10 gcc XXX
//    (Windows Subsystem for Ubuntu Linuxを用いて環境構築)
//  実行環境 3)
//    UbuntuLinux 14.04.5LTS gcc 4.8.4(Ubuntu 4.8.4-2ubuntu1~14.04.4)
//    (GoogleCloudPlatform VMインスタンスにて環境構築)
//--------------------------------------------------------------------
//  米谷研究室  s16t287 檜垣大地
//  2018.12.XX
//====================================================================


//====================================================================
//  仕様
//====================================================================

/*--------------------------------------------------------------------

作成した戦略プログラムの、動作を確認するための検証プログラムである。
プログラム内で設定したデバッグ部の、標準出力を確認し、実際にプログラムが想定通り
の動作をしているかを確認する。

---------------------------------------------------------------------*/


//====================================================================
//  前処理
//====================================================================

// 標準ライブラリを指定します。
#include <stdio.h>     // 標準優出力
#include <stdlib.h>    // 標準ライブラリ
#include <string.h>    // 文字列処理
#include <time.h>      // 時間関数
#include <math.h>      // 数学関数

// 事前に定義された、ポーカーゲーム用ヘッダを指定します。
// (システムライブラリではないため、相対パス指定)
#include "Poker.h"

// カードの記号をT_Symbol型として列挙します。
typedef enum {S, H, D, C} T_Symbol;
// カード情報をT_Info型構造体として宣言します。
typedef struct {
  T_Symbol symbol;
  int number;
} T_Info;

//====================================================================
//  USE FOR DEBUG ONLY
//====================================================================

#define F_DEBUG

// [DEBUG]デバッグ時専用事前処理
#ifdef F_DEBUG
  // [DEBUG]カード記号名
  const char *symbol_disp[] = {"SPADE   ", "HEART   ", "DIAMOND ", "CLUB    "};
#endif

//--------------------------------------------------------------------
//  関数宣言
//--------------------------------------------------------------------


//====================================================================
//  主関数
//====================================================================


//====================================================================
//  補助関数
//====================================================================