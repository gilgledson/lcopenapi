#ifndef _LCOPENSDK_VIDEOPLAY_H_
#define _LCOPENSDK_VIDEOPLAY_H_

#include "lcopensdk_global.h"
#include "LCOpenSDK_PlayerListener.h"
#include "LCOpenSDK_Param.h"
#include "lcopensdk_api/LCOpenSDK_Define.h"

class LCOPENSDK_EXPORT LCOpenSDK_VideoPlay
{
public:

/* ����ı�׼����ʽ */
typedef enum
{
    OUTPUT_STREAM_FORMAT_NULL = 0,
    OUTPUT_STREAM_FORMAT_PS,
    OUTPUT_STREAM_FORMAT_TS,
    OUTPUT_STREAM_FORMAT_LCAV,
}OUTPUT_STREAM_FORMAT;


/* �������� */
typedef enum
{
	DECORD_TYPE_NOTSET = 0, /* δ����,Ĭ��Ӳ�� */
	DECORD_TYPE_SW,/* ��� */
	DECORD_TYPE_HW,/* Ӳ���뿽��ģʽ(��ʹ��windowsƽ̨��ʹ��d3d9�ӿ�) */
	DECORD_TYPE_FAST,/* Ӳ����ֱ����ʾģʽ(��ʹ��windowsƽ̨��ʹ��d3d9�ӿ�) */
}DECORD_TYPE;

/* �ֲ��Ŵ����� */
typedef struct RECT
{
	long left;								
	long top;								
	long right;								
	long bottom;							
}DISPLAY_RECT;

public:
    LCOpenSDK_VideoPlay();
    ~LCOpenSDK_VideoPlay();

    int initVideoPlay(int index, void* hWnd);
	int updatePlayhWnd(int index, void* hWnd);

    void uninitVideoPlay();
    /**
	 * ���ý�������
	 */
	void setEngine(DECORD_TYPE decordType);
    void setPlayerListener(LCOpenSDK_PlayerListener* playerListener);
    LCOpenSDK_PlayerListener* getPlayerListener();

    /**
     * ���ñ�׼���ص�
     *
     * @param streamFormat [IN] ����ı�׼����ʽ��OUTPUT_STREAM_FORMAT_NULL��ʾ�رձ�׼���ص�
     *
     */
    void setStreamCallback(OUTPUT_STREAM_FORMAT streamFormat);

    int playRtspReal(const char* token, const char* deviceID, const char* decryptKey, int channelID, int definitionMode, bool isOpt);
    int playRtspRealEx1(const char* token, const char* deviceID, const char* decryptKey, int channelID, int definitionMode, bool assistStream, bool isOpt);
    int stopRtspReal();
    int playDeviceRecord(const char* token, const char* deviceID, const char* decryptKey, int channelID, const char* fileID, int beginTime, int endTime, int offsetTime, bool isOpt);
    int playDeviceRecordByFileName(const char* token, const char* deviceID, const char* decryptKey, const char* fileID, double offsetTime, bool isOpt);
    int playDeviceRecordByUtcTime(const char* token, const char* deviceID, const char* decryptKey, int channelID, int beginTime, int endTime, int definitionMode, bool isOpt, double offsetTime);
    int stopDeviceRecord();
    int playCloud(const char* token, const char* deviceID, int channelID, const char* decryptKey, const char* recordRegionID, int offsetTime, int cloudRecordType, int timeout);
    int stopCloud();
	int playFile(const char *filePath);
	int stopFile();
	int setPlaySpeed(float speed);
    int playAudio();
    int stopAudio();
    int seek(long seconds);
    int pause();
    int resume();
    int snapShot(const char* filePath);
    int startRecord(const char* filePath);
    int stopRecord();

	/**
	 * �½ӿ�(����ʹ���½ӿڣ��Ͻӿڲ���ά��);
	 */
	int playRtspRealEx(LCOpenSDK_ParamReal *paramReal);  
	int playDeviceRecordByFileNameEx(LCOpenSDK_ParamDeviceRecordFileName *paramDevRecord);
    int playDeviceRecordByUtcTimeEx(LCOpenSDK_ParamDeviceRecordUTCTime *paramDevRecord);
	int playCloudEx(LCOpenSDK_ParamCloudRecord *paramCloud);
	//��̨�ٿ��Ż��ӿ�
	int controlMovePTZ(LCOpenSDK_ParamControlPTZ *paramControlPTZ);

	/**
	 * ���û�������ʾ���򣬿������ֲ��Ŵ���ʾ��
	 *
	 * @param[in] srcRect �ֲ���ʾ����
	 * @param[in] enable ��(����)��ر���ʾ����
	 * @return BOOL���ɹ�����TRUE��ʧ�ܷ���FALSE
	*/
	bool setDisplayRegion(DISPLAY_RECT *srcRect, bool enable);
	 /**
    * ���ò��ţ��Խ�����������·��
    * @param   [in] const char * saveStreamPath     Ĭ��Ϊ��
     * @return  int                                  0/��0 �ɹ�/ʧ��
    */
    int setSaveStreamPath(const char* saveStreamPath=NULL);

	/**
    * ��ȡ��ǰ��������
    * @return  LCOpenSDK_STREAM_MODE        ��ǰ��������(�ο�LCOpenSDK_STREAM_MODE����)
    * @note  ����ýӿ����յ�OnPlayerBegan�ص������(�����ȡ��״̬δȷ��)
    */
	LCOpenSDK_STREAM_MODE getCurrentStreamMode();

	/**
    * ��ȡ�������
    */
	const char* getAnalysisData(int *len);
	
	/**
	* ����ͬ��������
	*/
	static void* createPlayGroup();

	/**
	* ͬ����������Ӳ���Դ
	* groupid ͬ�����������
	* isGroupBase �Ƿ��ǻ�׼
	*/
	bool addToPlayGroup(void* groupid, bool isGroupBase);
	
	/**
     * �Թ���ʽ������
     * @param bOpen [in] �Ƿ��� true:����  false:�ر�
     */
	bool controlSoundShare(bool bOpen);

private:
    void* m_interfaceLock;
    void* m_hLCOpenSDK_VideoPlay_Inside;
};

#endif /* _LCOPENSDK_VIDEOPLAY_H_ */
