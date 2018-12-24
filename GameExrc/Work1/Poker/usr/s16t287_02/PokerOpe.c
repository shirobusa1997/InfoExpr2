//====================================================================
//  工学部「情報環境実験２」(富永)  C言語プログラミング  例題
//  ポーカーゲームの戦略
//--------------------------------------------------------------------
//  Poker  usr/s16t287_01/  source_main.c
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

手札、場札、チェンジ数、テイク数、捨札を引数とし、捨札を決める。
返却値は、捨札の位置である。-1のときは、交換しないで、手札を確定させる。
関数 strategy() は、戦略のインタフェースであり、この関数内で、
実際の戦略となる関数を呼び出す。手札と捨札は、不正防止のため、
変更不可なので、局所配列にコピーして、整列などの処理を行う。
複数の戦略を比較したり、パラメタを変化させて、より強い戦略を目指す。

---------------------------------------------------------------------*/


//====================================================================
//  前処理
//====================================================================

// 標準ライブラリを指定します。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 事前に定義された、ポーカーゲーム用ヘッダを指定します。
#include "Poker.h"

// 手札配列のサイズ(ルールより5のみ有効)
#define MYCARD_SIZE 5

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
//  戦略
//====================================================================

/*--------------------------------------------------------------------
//  ユーザ指定
//--------------------------------------------------------------------

指定された引数のフォーマットと、それらが有する意味は、以下の通りである。

hd : 手札配列
fd : 場札配列(テイク内の捨札)
cg : チェンジ数
tk : テイク数
ud : 捨札配列(過去のテイクも含めた全ての捨札)
us : 捨札数

--------------------------------------------------------------------*/

void analyze_cardInfo(int *hd, T_Info *t_i){
  // メンバ宣言
  int i;                                      // カウンタ変数
  #ifdef F_DEBUG
    printf("///// analyze_cardInfo() /////\n");
    printf("解析元データ:");
    for(i = 0; i < MYCARD_SIZE; i++){ printf("%d ", hd[i]); }
    printf("\n↓\n");
  #endif

  for(i = 0; i < MYCARD_SIZE; i++){
    t_i[i].symbol = hd[i] / 13;
    t_i[i].number = hd[i] % 13;
  }

  #ifdef F_DEBUG
    printf("解析後データ:");
    for(i = 0; i < MYCARD_SIZE; i++){ printf("%s%d,", t_i[i].symbol, t_i[i].number); }
    printf("\n");
    printf("///// analyze_cardInfo() /////\n");
  #endif
  return;
}

void array_bySymbol(int *hd){
  return;
}

int strategy(int hd[], int fd[], int cg, int tk, int ud[], int us)
{
  // メンバ変数宣言
  int res_hand = -1;                         // 最終的な手続き
  T_Info t_i[MYCARD_SIZE];                   // 手札解析後の情報格納先

	// 乱数生成設定(シード値は現在時刻)
  	srand((unsigned)time(NULL));

  	return rand() % 6 - 1;
}


//====================================================================
//  補助関数
//====================================================================
