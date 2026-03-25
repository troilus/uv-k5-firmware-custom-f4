//
// Chinese menu support header file
//

#ifndef UV_K5_FIRMWARE_CUSTOM_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_CHINESE_H

#include "font.h"

#if ENABLE_CHINESE_FULL == 4 && !defined(ENABLE_ENGLISH)
// Chinese mode - menu names as specified by user
// Using losehu's existing encodings for consistency

#define SQL         "\xB3\xB4"                    // 静噪
#define DWMode      "\xC9\xD0"                    // 双守
#define STEP        "\x01\x02"                    // 步进
#define Power       "\xB7\xC1"                    // 功率
#define RxDCS       "\x06\x07\x08"                // 收DCS
#define RxCTCS      "\x06\x0C\x0D"                // 收CTCS
#define TxDCS       "\x0E\x07\x08"                // 发DCS
#define TxCTCS      "\x0E\x0C\x0D"                // 发CTCS
#define TxDir       "\x03\x10\x11\x12"            // 频差方向
#define TxOffs      "\x03\x10"                    // 频差
#define W_N         "\x8E\x8F"                    // 带宽
#define Scramb      "Scramb"                     // Scramb
#define BzLock      "\x16\x17\x0E"                // 忙禁发
#define Mode        "Mode"                       // Mode
#define TXLock      "\x17\x0E"                    // 禁发
#define ChSave      "\x1A\x1B\x1C\x1D"            // 存信道
#define ChDele      "\x1E\x1F\x1C\x1D"            // 删信道
#define ChName      "\x7F\x80\x1C\x1D"            // 信道名
#define F1Shrt      "F1\xA1"                     // F1短
#define F1Long      "F1\xA4"                     // F1长
#define F2Shrt      "F2\xA1"                     // F2短
#define F2Long      "F2\xA4"                     // F2长
#define MLong       "M\xA4"                      // M长
#define BatSav      "\x8C\x8D"                    // 省电
#define BatTxt      "\x8D\xBA\x93\x94"            // 电量显示
#define Mic         "Mic"                        // Mic
#define ChDisp      "\x1C\x1D\x93\x94"            // 信道显示
#define POnMsg      "\xC3\xC4"                    // 开机
#define BLTime      "\x95\x96"                    // 背光
#define BLMax       "\x97\x98"                    // 光亮
#define Beep        "\xA9\x0B"                    // 键音
#define Roger       "\x9B\x0B"                    // 尾音
#define STE         "\x9C\x0B\x9D"                // 尾音消
#define RP_STE      "\x9E\x9F\xA0\x9C\x0B\x9D"    // 中继尾音消
#define Call1       "\xA1\xA2"                    // 快捷
#define VOX         "VOX"                        // VOX
#define SysInf      "\xB5\xB6"                    // 信息
#define BatVol      "\xDA\x8D"                    // 电压
#define SetPwr      "\xB7\xC1"                    // 功率
#define SetCtr      "\xBE\x07"                    // 对比
#define SetInv      "\xC7\xD0"                    // 反色
#define SetLck      "\xC7\xD0\x0C\x89"             // 锁定模式
#define SetMet      "\xC7\xD0\xBD\xBD"             // S表模式
#define SetGui      "\xC7\xD0\x93\x94"             // Gui模式
#define SetNFM      "\xC7\xD0\xC7\xB9"             // 窄带
#define FLock       "FLock"                      // FLock
#define BatCal      "BatCal"                     // BatCal
#define BatTyp      "BatTyp"                     // BatTyp
#define Reset       "Reset"                      // Reset

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