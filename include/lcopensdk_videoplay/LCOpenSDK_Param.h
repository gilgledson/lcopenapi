
#ifndef _LCOPENSDK_PARAM_H_
#define _LCOPENSDK_PARAM_H_
#include <string>
#include "lcopensdk_global.h"

/**
* ��ý��ģʽ
*/
typedef enum
{
	STREAM_MAIN = 0,        //������
	STREAM_MINOR_1,     //������1
	STREAM_MINOR_2,     //������2
	STREAM_MINOR_3,     //������3
}DEFINITION_MODE;

/**
* ��¼������
*/
typedef enum
{
	RECORD_TYPE_ALL = 0,      /* ȫ�� */
	RECORD_TYPE_ALARM = 1000, /* ���� */
	RECORD_TYPE_TIMING = 2000  /* ��ʱ */ 
}RECORD_TYPE;

/**
* ����ģ�ͻ���
*/
class LCOPENSDK_EXPORT LCOpenSDK_Param {
public:
	LCOpenSDK_Param();
	~LCOpenSDK_Param();
public:	
	const char* accessToken; /* ����ԱToken���û�Token */ 
    const char* deviceID;    /* �豸���к� */
	const char* pid;     /* �豸pid */
	int         channel;     /* ͨ���� */
	const char* psk;         /* ��Կ(��������û��Զ�����Կ����Ϊ�豸���к�) */
	const char* playToken;   /* ����token(��ֵ��Ϊ�գ����Ǵ��ջ�����������ʱ) */
};

/**
* Ԥ������ģ��
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamReal:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamReal();
	~LCOpenSDK_ParamReal();
public:	
	DEFINITION_MODE defiMode;          /* ��ý��ģʽHD/SD */ 
	bool            assistStreamEnable;/* �Ƿ�������֡(���豸֧��ʱ����Ч) */ 
	bool            isTls;             /* �Ƿ�TLS����ʹ�� */   
	int             imageSize;         /* �൵�ֱ����л����� */   
};

/**
* ����¼���ļ����ļ�������
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamDeviceRecordFileName:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamDeviceRecordFileName();
	~LCOpenSDK_ParamDeviceRecordFileName();
public:	
	const char* fileName;   /* �豸����¼���ļ��� */ 
	double      offsetTime; /* ƫ��ʱ�� */ 
	bool        isTls;      /* �Ƿ�TLS����ʹ�� */
};

/**
* ����¼���ļ���ʱ�䲥��
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamDeviceRecordUTCTime:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamDeviceRecordUTCTime();
	~LCOpenSDK_ParamDeviceRecordUTCTime();
public:	
	DEFINITION_MODE defiMode;   /* ��ý��ģʽHD/SD */ 
	long            beginTime;  /* ��ʼʱ�� */ 
	long            endTime;    /* ����ʱ�� */ 
	bool            isTls;      /* �Ƿ�TLS����ʹ�� */  
	double			offsetTime; /* ƫ��ʱ�� */ 
};

/**
* ��¼�񲥷�
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamCloudRecord:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamCloudRecord();
	~LCOpenSDK_ParamCloudRecord();
public:	
	const char* recordRegionID; /* ¼��ID */ 
	double      offsetTime;     /* ƫ��ʱ�� */ 
	RECORD_TYPE recordType;     /* ¼������ */
	int         timeout;        /* ��ʱʱ�� */    
};

/**
* �����Խ�
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamTalk:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamTalk();
	~LCOpenSDK_ParamTalk();
public:	
	bool            isTls;      /* �Ƿ�ʹ��TLS���ܴ��� */
};

/**
* ��������̨����
*/
class LCOPENSDK_EXPORT LCOpenSDK_ParamControlPTZ:public LCOpenSDK_Param {
public:
	LCOpenSDK_ParamControlPTZ();
	~LCOpenSDK_ParamControlPTZ();
public:	
	const char*           operation;      /*������Ϊ  0-�ϣ�1-�£�2-��3-�ң�4-���ϣ�5-���£�6-���ϣ�7-���£�8-�Ŵ�9-��С��10-ֹͣ*/ 
	long                  duration;      /* �ƶ�����ʱ�䣬��λ���� */
};



#endif