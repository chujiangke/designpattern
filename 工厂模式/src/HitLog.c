/*****************************************************************************/
/*                NCUP -- Shanghai Huateng Software System Inc.              */
/*****************************************************************************/
/* PROGRAM NAME: HtLog.c                                                     */
/* DESCRIPTIONS:                                                             */
/*****************************************************************************/
/*                             MODIFICATION LOG                              */
/* DATE        PROGRAMMER     DESCRIPTION                                    */
/* 2005-03-31  YU TONG        Initialize                                     */
/*****************************************************************************/
static char *Id = "@(#)$Header: /home/cvsroot/nscups/ncup/src/Common/HtLog.c,v 1.1.1.1 2010/10/14 06:39:31 cvsroot Exp $";

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/times.h>
#include <sys/stat.h>
#include <string.h>
#include <memory.h>

#include "HitLog.h"




FILE	*fp;

int	 ConvertEnv(char *str);
int ReplaceEnvVar(char *str);
void MakeDir( char * sfile );

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
int HitLog (char *sLogName, int nLogMode, char *sFileName, int nLine, char *sFmt, ...)
{
	char	sLogTime[128];
	char	sDateTime[16];
	char	sParamLogFilePath[LOG_PATH_LEN_MAX];
	int	nParamLogMode;
	int	nParamLogSwitchMode;
	int	nParamLogSize; /* in megabytes */
	int	nReturnCode;
	long	lTimeTick;
	va_list	ap;
	time_t	lTime;
	struct tm	*tTmLocal;
	struct tms	tTMS;
	char sDateBox[10+1];

	/* get current time */
	memset (sLogTime, 0x00, sizeof(sLogTime));
	memset (sDateTime, 0x00, sizeof(sDateTime));
	lTime = time (NULL);
	tTmLocal = localtime (&lTime);
	strftime (sLogTime, sizeof(sLogTime), "%Y-%m-%d %H:%M:%S", tTmLocal);
	strftime (sDateTime, sizeof(sDateTime), "%Y%m%d%H%M%S", tTmLocal);

	
	memset( sDateBox , 0x00 , sizeof(sDateBox));
	strftime( sDateBox , sizeof(sDateBox), "/%Y%m%d", tTmLocal );
	strcat( sParamLogFilePath , sDateBox );
	//printf("line -> %d , sParamLogFilePath -> %s \n", __LINE__, sParamLogFilePath );		
	
	/* get current time in tick */
	lTimeTick = times( &tTMS);
	
	fp = fopen (sLogName, "a+");
		
	/* save log msg in file */
	fprintf(fp, "[%s][%ld][%s][%d]", sLogTime,lTimeTick,sFileName,nLine); 

	va_start(ap, sFmt);
	vfprintf(fp, sFmt, ap);
	va_end(ap);

	fprintf(fp, "\n");
	fflush(fp);

	/* close file */
	fclose (fp);

	return (0);	
}

