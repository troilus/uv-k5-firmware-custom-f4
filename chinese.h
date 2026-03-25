//
// Chinese menu support header file
//

#ifndef UV_K5_FIRMWARE_CUSTOM_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_CHINESE_H

#include "font.h"

#if ENABLE_CHINESE_FULL == 4 && !defined(ENABLE_ENGLISH)
// Chinese mode - menu names as specified by user
// Note: Due to limited font characters, some names use losehu's existing encodings

#define SQL         "\xB3\xB4"                    // 静噪
#define DWMode      "\xC9\xD0"                    // 双守
#define STEP        "\x01\x02"                    // 步进
#define Power       "\x0E\x0F\xB7\xC1"            // 发射功率
#define RxDCS       "\x06\x0E\x0F\x07\x08"        // 接收DCS
#define RxCTCS      "\x06\x0E\x0F\x0C\x0D"        // 接收CTCS
#define TxDCS       "\x0E\x0F\x07\x08"            // 发射DCS
#define TxCTCS      "\x0E\x0F\x0C\x0D"            // 发射CTCS
#define TxDir       "\x03\x10\x11\x12"            // 频差方向
#define TxOffs      "\x03\x10"                    // 频差
#define W_N         "\x8E\x8F"                    // 带宽
#define Scramb      "\x13\x14"                    // 扰频
#define BzLock      "\x15\x16\x17\x0E"            // 繁忙禁发
#define Mode        "\x0C\x89"                    // 模式
#define TXLock      "\x17\x0E"                    // 禁发
#define ChSave      "\x1A\x1B\x1C\x1D"            // 保存信道
#define ChDele      "\x1E\x1F\x1C\x1D"            // 删除信道
#define ChName      "\x7F\x80\x1C\x1D"            // 信道名称
#define F1Shrt      "F1\xA1\xA2"                  // F1短按
#define F1Long      "F1\xA1\xA4"                  // F1长按
#define F2Shrt      "F2\xA1\xA2"                  // F2短按
#define F2Long      "F2\xA1\xA4"                  // F2长按
#define MLong       "M\xA1\xA4"                   // M长按
#define BatSav      "\x8C\x8D"                    // 省电
#define BatTxt      "\x8D\xBA\x93\x94"            // 电量显示
#define Mic         "\x8E\x8F\x90\x91\x92"        // MIC增益
#define ChDisp      "\x1C\x1D\x93\x94"            // 信道显示
#define POnMsg      "\xC3\xC4\x93\x94"            // 开机信息
#define BLTime      "\x95\x96"                    // 背光
#define BLMax       "\x97\x98\xBC\xBD"            // 亮度
#define Beep        "\xA9\x0B"                    // 按键音
#define Roger       "\x9B\x9C\x0B"                // 尾音
#define STE         "\x9C\x0B\x9D\x1F"            // 尾音消除
#define RP_STE      "\x9E\x9F\xA0\x9C\x0B\x9D\x1F" // 中继尾音消除
#define Call1       "\xA1\xA2"                    // 快捷
#define VOX         "VOX"                        // VOX
#define SysInf      "\xB5\xB6\xA7\xB8"            // 信息
#define BatVol      "\xB7\xC1"                    // 功率
#define SetPwr      "\xBE\x07"                    // 对比度
#define SetCtr      "\xC7\xD0\xB1\xB8"            // 反色
#define SetInv      "\xC7\xD0\xD9\x0E\x0F"        // 锁定模式
#define SetLck      "\xC7\xD0\xBD\xBD"            // S表模式
#define SetMet      "\xC7\xD0\x93\x94"            // Gui模式
#define SetGui      "\xC7\xD0\xC7\xB9"            // 窄带
#define SetNFM      "\x03\xB7\xB8\xB9"            // 频率锁
#define SetVol      "\x8D\xBA\xBA\xBB\x18"        // 电池校准
#define SetKey      "\x8D\xBA\xC8\xC9"            // 电池容量
#define SetNWR      "\xBE\x07\x88\xAC"            // 重置
#define FLock       "\x03\xB7\xB8\xB9"            // 频率锁
#define BatCal      "\x8D\xBA\xBA\xBB\x18"        // 电池校准
#define BatTyp      "\x8D\xBA\xC8\xC9"            // 电池容量
#define Reset       "\xBE\x07\x88\xAC"            // 重置

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