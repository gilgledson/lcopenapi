#ifndef _LCOPENSDK_DOWNLOAD_H_
#define _LCOPENSDK_DOWNLOAD_H_

#include "lcopensdk_global.h"
#include "LCOpenSDK_DownloadListener.h"

class LCOPENSDK_EXPORT LCOpenSDK_Download
{
private:
    LCOpenSDK_Download();
    ~LCOpenSDK_Download();

public:
    static LCOpenSDK_Download* getInstance();
	// ��¼��  ��ʼ
	int startDownload(int index, const char* token, const char* filepath, const char* deviceID, int channelID, const char* decryptKey, const char* recordRegionID, int cloudRecordType, int timeout);
    
	/**
	* ��ʼ����¼�����أ����ļ���
	* @param   [in] index                                   ����Ψһ��ʾ���ϲ㴫��
	* @param   [in] token                                   token
	* @param   [in] filePath                                ���������ļ�·��
	* @param   [in] deviceID                                �豸���к�
	* @param   [in] decryptkey                              ������Կ
	* @param   [in] fileId                                  �ļ�����
	* @param   [in] isTls                                   �Ƿ����TLS���ܴ��䣨����Ĭ����false��
    * @param   [in] speed                                   �������ʣ�1/2/4/8/16��1��ʾ��������Ƶ���ŵ��ٶ�����                              
	* @return  int                                          0/��0 �ɹ�/ʧ��
	*/
	int startDownload(
		int index,
		const char* token,
		const char* filepath,
		const char* deviceID, 
		const char* decryptKey,
		const char* fileID, 
		bool isTls,
		double speed = 1.0);
    
	/**
	* ��ʼ����¼�����أ���ʱ�䣩
	* @param   [in] index                                   ����Ψһ��ʾ���ϲ㴫��
	* @param   [in] token                                   token
	* @param   [in] filePath                                ���������ļ�·��
	* @param   [in] deviceID                                �豸���к�
	* @param   [in] decryptkey                              ������Կ
	* @param   [in] channelID                               ͨ����
	* @param   [in] beginTime                               ¼��ʼʱ�䣬Unixʱ���
	* @param   [in] endTime                                 ¼�����ʱ�䣬Unixʱ���
	* @param   [in] isTls                                   �Ƿ����TLS���ܴ���
    * @param   [in] speed                                   �������ʣ�1/2/4/8/16��1��ʾ��������Ƶ���ŵ��ٶ�����                             
	* @return  int                                          0/��0 �ɹ�/ʧ��
	*/
	int startDownload(
		int index, 
		const char* token,
		const char* filepath, 
		const char* deviceID,
		const char* decryptKey,
		int channelID,
		long beginTime,
		long endTime, 
		bool isTls,
		double speed = 1.0);
    
	// ֹͣ����
	int stopDownload(int index);

	// ���ü���
    void setDownloadListener(LCOpenSDK_DownloadListener* downloadListener);
    LCOpenSDK_DownloadListener* getDownloadListener();

private:
    void* m_hLCOpenSDK_Download_Inside;
    static LCOpenSDK_Download* sm_instance;
};

#endif /* _LCOPENSDK_DOWNLOAD_H_ */
