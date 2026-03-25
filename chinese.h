//
// Chinese menu support header file
//

#ifndef UV_K5_FIRMWARE_CUSTOM_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_CHINESE_H

#include "font.h"

#if ENABLE_CHINESE_FULL == 4 && !defined(ENABLE_ENGLISH)
// Chinese mode - menu names as specified by user
// Note: Due to limited font characters, some names use losehu's existing encodings

#define SQL         "\xCE\x92\xD6\xF7"             // 静噪
#define DWMode      "\x80\xD7\x82\xB9"             // 双守
#define STEP        "\x83\xA8\x83\x0A"             // 步进
#define Power       "\x80\xEA\xBA\xEC"             // 功率
#define RxDCS       "\x82\xE9\x43\x43\x53"         // 收DCS
#define RxCTCS      "\x82\xE9\x43\x54\x43\x53"     // 收CTCS
#define TxDCS       "\x81\x9A\x43\x43\x53"         // 发DCS
#define TxCTCS      "\x81\x9A\x43\x54\x43\x53"     // 发CTCS
#define TxDir       "\xC5\x8F\xCE\xDE\x82\x5E\xC0\xBA" // 频差方向
#define TxOffs      "\xC5\x8F\xCE\xDE"             // 频差
#define W_N         "\xCE\xD4\xBF\xED"             // 带宽
#define Scramb      "Scramb"                      // Scramb
#define BzLock      "\x82\xB6\xBF\xCF\x81\x9A"     // 忙禁发
#define Mode        "Mode"                         // Mode
#define TXLock      "\xBF\xCF\x81\x9A"             // 禁发
#define ChSave      "\x82\xE9\x88\x89\x92\xC8"     // 存信道
#define ChDele      "\x8B\x47\x88\x89\x92\xC8"     // 删信道
#define ChName      "\x88\x89\x92\xC8\x83\x84"     // 信道名
#define F1Shrt      "F1\xBA\x23"                   // F1短
#define F1Long      "F1\x80\x8E"                   // F1长
#define F2Shrt      "F2\xBA\x23"                   // F2短
#define F2Long      "F2\x80\x8E"                   // F2长
#define MLong       "M\x80\x8E"                    // M长
#define BatSav      "\xBF\xD1\x81\x1C"             // 省电
#define BatTxt      "\x81\x1C\xC1\x9E\xBE\xE5\x80\xDF" // 电量显示
#define Mic         "Mic"                          // Mic
#define ChDisp      "\x88\x89\x92\xC8\xBE\xE5\x80\xDF" // 信道显示
#define POnMsg      "\x80\x56\x81\x1C"              // 开机
#define BLTime      "\x96\xC8\x82\x08"             // 背光
#define BLMax      "\x82\x08\x96\xEA"              // 光亮
#define Beep        "\x92\x8E\x8A\x01"             // 键音
#define Roger       "\x88\xE1\x8A\x01"             // 尾音
#define STE         "\x88\xE1\x8A\x01\x8D\x45"      // 尾音消
#define RP_STE      "\x82\x80\x8E\xE2\x88\xE1\x8A\x01" // 中继尾音
#define Call1       "\xBF\xEC\x8E\x0B"              // 快捷
#define VOX         "VOX"                          // VOX
#define SysInf      "\x88\x89\x8D\x8C"             // 信息
#define BatVol      "\x81\x1C\x80\xE2"             // 电压
#define SetPwr      "\x80\xEA\xBA\xEC"             // 功率
#define SetCtr      "\x81\x9C\x80\x78"             // 对比
#define SetInv      "\x80\x9D\x83\x89"             // 反色
#define SetLck      "\x92\x0C\xB6\xA8\xC4\xA3\xCA\xBD" // 锁定模式
#define SetMet      "\x53\x8D\x7D\xC4\xA3\xCA\xBD"  // S表模式
#define SetGui      "Gui\xC4\xA3\xCA\xBD"           // Gui模式
#define SetNFM      "\x8D\x7D\xCE\xD4"             // 窄带
#define SetVol      "BatCal"                       // BatCal
#define SetKey      "BatTyp"                       // BatTyp
#define SetNWR      "Reset"                        // Reset
#define FLock       "FLock"                        // FLock
#define BatCal      "BatCal"                       // BatCal
#define BatTyp      "BatTyp"                       // BatTyp
#define Reset       "Reset"                        // Reset

// Sub-menu items - keep in English
#define WIDE        "WIDE"
#define NARROW      "NARROW"
#define OFF         "OFF"
#define ON          "ON"
#define NA          "N/A"

#else
// English mode - keep original English text
#define SQL         "SQL"
#define DWMode      "DWMode"
#define STEP        "Step"
#define Power       "Power"
#define RxDCS       "RxDCS"
#define RxCTCS      "RxCTCS"
#define TxDCS       "TxDCS"
#define TxCTCS      "TxCTCS"
#define TxDir       "TxDir"
#define TxOffs      "TxOffs"
#define W_N         "W/N"
#define Scramb      "Scramb"
#define BzLock      "BzLock"
#define Mode        "Mode"
#define TXLock      "TXLock"
#define ChSave      "ChSave"
#define ChDele      "ChDele"
#define ChName      "ChName"
#define F1Shrt      "F1Shrt"
#define F1Long      "F1Long"
#define F2Shrt      "F2Shrt"
#define F2Long      "F2Long"
#define MLong       "M Long"
#define BatSav      "BatSav"
#define BatTxt      "BatTxt"
#define Mic         "Mic"
#define ChDisp      "ChDisp"
#define POnMsg      "POnMsg"
#define BLTime      "BLTime"
#define BLMax       "BLMax"
#define Beep        "Beep"
#define Roger       "Roger"
#define STE         "STE"
#define RP_STE      "RP STE"
#define Call1       "1 Call"
#define VOX         "VOX"
#define SysInf      "SysInf"
#define BatVol      "BatVol"
#define SetPwr      "SetPwr"
#define SetCtr      "SetCtr"
#define SetInv      "SetInv"
#define SetLck      "SetLck"
#define SetMet      "SetMet"
#define SetGui      "SetGui"
#define SetNFM      "SetNFM"
#define SetVol      "SetVol"
#define SetKey      "SetKey"
#define SetNWR      "SetNWR"
#define FLock       "F Lock"
#define BatCal      "BatCal"
#define BatTyp      "BatTyp"
#define Reset       "Reset"

// Sub-menu items
#define WIDE        "WIDE"
#define NARROW      "NARROW"
#define OFF         "OFF"
#define ON          "ON"
#define NA          "N/A"

#endif // ENABLE_CHINESE_FULL

#endif // UV_K5_FIRMWARE_CUSTOM_CHINESE_H