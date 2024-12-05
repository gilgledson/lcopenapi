#ifndef _LCOPENSDK_UTILS_H_
#define _LCOPENSDK_UTILS_H_

#include "lcopensdk_global.h"

class LCOPENSDK_EXPORT LCOpenSdk_Utils
{
public:

    enum OpenSDK_LogLevel
    {
        Fatal,                  /* �������� */
        Err,                    /* ���� */
        Warning,                /* ���ܵ��³��� */
        Info,                   /* ��֪�û���ǰ����״̬ */
        Debug,                  /* ��ϸ������Ϣ */
        All,                    /* ������־ */
    };

    enum OpenSdk_LogFileMode
    {
        NewFile,                /* ���ļ�׷��ģʽ */
        RollFile,               /* ˫�ļ�����ģʽ */
        Unvalid,                /* �Ƿ�д��־�ļ� */
    };

    LCOpenSdk_Utils();
    ~LCOpenSdk_Utils();
    static int DecryptPic(const char *pSrcBufIn,int srcBufLenIn,const char *encryptKey,char *pDestBufOut,int& destBufLenOut);
	static int DecryptPicEx(const char *pSrcBufIn, int srcBufLenIn, const char *encryptKey, const char* accessToken, const char* deviceId, char *pDestBufOut, int& destBufLenOut);

	/*****************************************************************************
	* @��������: �豸�������
	* @���� 1  : devicePwd����Ҫ���ܵ����ģ�
	* @���� 2  : deviceID
	* @���� 3  : appSecret
	* @���� 4  : encryptDevPwd�����ܵ����룩
	* @�� �� ֵ:  true/false
	*****************************************************************************/
	static bool EncryptDevPwd(const char* devicePwd,const char* deviceID,const char* appSecret,char* encryptDevPwd);

    static void SetLogInfo(OpenSDK_LogLevel level = All, 
                           const char* fileName = "LCOpenSDK", 
                           int maxSize = 10*1024*1024, 
                           OpenSdk_LogFileMode fileMode = NewFile);
 
};

#endif /* _LCOPENSDK_UTILS_H_ */
