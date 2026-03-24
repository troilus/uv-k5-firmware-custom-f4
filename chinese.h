//
// Chinese menu support header file
//

#ifndef UV_K5_FIRMWARE_CUSTOM_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_CHINESE_H

#include "font.h"

#if ENABLE_CHINESE_FULL == 4 && !defined(ENABLE_ENGLISH)
// Chinese mode - use losehu's encoding for Chinese characters
// Encoding maps to gFontChinese_out array indices

#define SQL         "\x03\x04"                    // 步进
#define DWMode      "\xC9\xD0"                    // 双信道
#define STEP        "\x01\x02\x03\x04"            // 步进频率
#define Power       "\xB7\xC1"                    // 频段
#define RxDCS       "\x05\x06\x07\x08\x09\x0B"    // 接收数字亚音
#define RxCTCS      "\x05\x06\x0C\x0D\x09\x0B"    // 接收模拟亚音
#define TxDCS       "\x0E\x0F\x07\x08\x09\x0B"    // 发送数字亚音
#define TxCTCS      "\x0E\x0F\x0C\x0D\x09\x0B"    // 发送模拟亚音
#define TxDir       "\x03\x10\x11\x12"            // 频差方向
#define TxOffs      "\x03\x10\x03\x04"            // 频差频率
#define W_N         "\x8E\x8F"                    // 宽窄带
#define Scramb      "\x13\x14"                    // 加密
#define BzLock      "\x15\x16\x17\x0E"            // 遇忙禁发
#define Mode        "\x0C\x89"                    // 模式
#define TXLock      "\x0E\x0F\xD9"                // 发送锁定
#define ChSave      "\x1A\x1B\x1C\x1D"            // 存置信道
#define ChDele      "\x1E\x1F\x1C\x1D"            // 删除信道
#define ChName      "\x7F\x80\x1C\x1D"            // 命名信道
#define F1Shrt      "\xC5\xD2\xC3\xC4\xA1\xA2"    // 侧键1短按
#define F1Long      "\xC5\xD2\xC3\xC4\xA1\xA4"    // 侧键1长按
#define F2Shrt      "\xC5\xD2\xC6\xC4\xA1\xA2"    // 侧键2短按
#define F2Long      "\xC5\xD2\xC6\xC4\xA1\xA4"    // 侧键2长按
#define MLong       "\x4D\xA1\xA4"                // M键长按
#define BatSav      "\x8C\x8D\x0C\x89"            // 省电模式
#define BatTxt      "\x8D\xBA\x93\x94"            // 电池文本
#define Mic         "\x8E\x8F\x90\x91\x92"        // 麦克风
#define ChDisp      "\x1C\x1D\x93\x94\x0C\x89"    // 信道显示模式
#define POnMsg      "\xC3\xC4\x93\x94"            // 开机显示
#define BLTime      "\x95\x96\x99\x9A"            // 背光时间
#define BLMax       "\x97\x98\xBC\xBD"            // 背光最大
#define Beep        "\xA9\x0B"                    // 响应音
#define Roger       "\x9B\x9C\x0B"                // 首尾音
#define STE         "\x9C\x0B\x9D\x1F"            // 尾音消除
#define RP_STE      "\x9E\x9F\xA0\x9C\x0B\x9D\x1F" // 过中继尾音消除
#define Call1       "\xA1\xA2\xA3\xA4"            // 按键即呼
#define VOX         "\xA1\xA2"                    // 声控
#define SysInf      "\xB5\xB6\xA7\xB8"            // 系统信息
#define BatVol      "\x8D\xBA\xBC\xBD"            // 电池大小
#define SetPwr      "\xC7\xD0\xC9\xD0"            // 设置功率
#define SetCtr      "\xC7\xD0\xB9\x10"            // 设置中心
#define SetInv      "\xC7\xD0\xB1\xB8"            // 设置反转
#define SetLck      "\xC7\xD0\xD9\x0E\x0F"        // 设置锁定
#define SetMet      "\xC7\xD0\xBD\xBD"            // 设置测量
#define SetGui      "\xC7\xD0\x93\x94"            // 设置GUI
#define SetNFM      "\xC7\xD0\xC7\xB9"            // 设置NFM
#define SetVol      "\xC7\xD0\xA9\x0B"            // 设置音量
#define SetKey      "\xC7\xD0\xA1\xA2"            // 设置按键
#define SetNWR      "\xC7\xD0\x8E\x8F"            // 设置窄带
#define FLock       "\x03\xB7\xB8\xB9"            // 频段解锁
#define BatCal      "\x8D\xBA\xBA\xBB\x18"        // 电池校准
#define BatTyp      "\x8D\xBA\xC8\xC9"            // 电池类型
#define Reset       "\xBE\x07\x88\xAC"            // 参数复位

// Sub-menu items
#define WIDE        "\x8E\x8F"                    // 宽带
#define NARROW      "\x91\x92"                    // 窄带
#define OFF         "\xC1\xC2"                    // 关闭
#define ON          "\xC3\xC4"                    // 开启
#define NA          "\xB1\xB2\xD1"                // 不本（不适用）

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