/*****************************************************************************/
/*                              TOPLINK 2.0                                  */
/* Copyright (c) 2005 Shanghai Huateng Software Systems Co., Ltd.            */
/* All Rights Reserved                                                       */
/*****************************************************************************/

#ifndef __HT_LOG_H
#define __HT_LOG_H
#include <sys/types.h>
#include <sys/timeb.h>

#define LOG_NAME_LEN_MAX	100	
#define HT_LOG_MODE_OFF				0
#define HT_LOG_MODE_ERROR			1
#define HT_LOG_MODE_NORMAL			2
#define HT_LOG_MODE_DEBUG			3
#define LOG_PATH_LEN_MAX		128
#define LOG_SWITCH_MODE_SIZE	1
#define LOG_SWITCH_MODE_DATE	2
#define LOG_SIZE_UNIT			1000000

/* env var for Common/HtLog.c */
#define LOG_MODE					"LOG_MODE"
#define LOG_FILE_PATH				"LOG_FILE_PATH"
#define LOG_SWITCH_MODE				"LOG_SWITCH_MODE"
#define LOG_SIZE					"LOG_SIZE"
#define LOG_SIZE_DEFAULT			5
#define LOG_DEFAULT_NAME		"ht.log"
#define SINGLE_LINE				"--------------------------------------------------------------------------------\n"
#define ERR_CODE_LOG_BASE		40000
/*****************************************************************************/
/* FUNC:   int HtLog (char *sLogName, int nLogMode, char *sFileName,         */
/*                    int nLine, char *sFmt, ...);                           */
/* INPUT:  sLogName: ÈÕÖ¾Ãû, ²»´øÂ·¾¶                                        */
/*         nLogMode: ÈÕÖ¾¼¶±ð,                                               */
/*                   HT_LOG_MODE_ERROR,HT_LOG_MODE_NORMAL,HT_LOG_MODE_DEBUG  */
/*         sFileName: ±¨´íµÄÔ´³ÌÐòÃû                                         */
/*         nLine: ±¨´íµÄÔ´³ÌÐòµÄÐÐºÅ                                         */
/*         sFmt: ³ö´íÐÅÏ¢                                                    */
/* OUTPUT: ÎÞ                                                                */
/* RETURN: 0: ³É¹¦, ÆäËü: Ê§°Ü                                               */
/* DESC:   ¸ù¾ÝLOG_MODE, ½«¸Ã¼¶±ðÖ®ÏÂµÄÈÕÖ¾¼ÇÂ¼µ½ÈÕÖ¾ÎÄ¼þÖÐ,                 */
/*****************************************************************************/
int HitLog (char *sLogName, int nLogMode, char *sFileName, int nLine, char *sFmt, ...);
int HitLog1 (char *sLogName, char *sFmt, ...);

/*****************************************************************************/
/* FUNC:   int HtDebugString (char *sLogName, int nLogMode, char *sFileName, */
/*                            int nLine, char *psBuf, int nBufLen);          */
/* INPUT:  sLogName: ÈÕÖ¾Ãû, ²»´øÂ·¾¶                                        */
/*         nLogMode: ÈÕÖ¾¼¶±ð,                                               */
/*                   HT_LOG_MODE_ERROR,HT_LOG_MODE_NORMAL,HT_LOG_MODE_DEBUG  */
/*         sFileName: ±¨´íµÄÔ´³ÌÐòÃû                                         */
/*         nLine: ±¨´íµÄÔ´³ÌÐòµÄÐÐºÅ                                         */
/*         psBuf: ÐèÊä³öµÄbuffer                                             */
/*         nBufLen: bufferµÄ³¤¶È                                             */
/* OUTPUT: ÎÞ                                                                */
/* RETURN: 0: ³É¹¦, ÆäËü: Ê§°Ü                                               */
/* DESC:   ¸ù¾ÝLOG_MODE, ½«¸Ã¼¶±ðÖ®ÏÂµÄÈÕÖ¾¼ÇÂ¼µ½ÈÕÖ¾ÎÄ¼þÖÐ,                 */
/*         Êä³öÄÚÈÝÊÇbufferµÄ16½øÖÆÖµ                                        */
/*****************************************************************************/
int HitDebugString (char *sLogName, int nLogMode, char *sFileName, int nLine, char *psBuf, int nBufLen);

#endif
