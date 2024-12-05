#ifndef _LCOPENSDK_API_H_
#define _LCOPENSDK_API_H_

#include "lcopensdk_global.h"
#include <string.h>

class LCOPENSDK_EXPORT LCOpenSDK_Api
{
private:
	LCOpenSDK_Api();
	~LCOpenSDK_Api();

public:
	static LCOpenSDK_Api* GetInstance();

	/*****************************************************************************
	* @��������: ��ʼ��OpenSDK������������
	* @�� �� ֵ: ��
	*****************************************************************************/
	void initOpenApi(const char* host, int port, const char* caPath);

	/*****************************************************************************
	* @��������: ��ʼ��OpenSDK(����ʹ�ô˽ӿ�)
	* @�� �� ֵ: ��
	*****************************************************************************/
	void initOpenApiEx(const char* host, int port, const char* caPath, const char* token,const char *appId,const char *appSecret);
	/*****************************************************************************
	* @��������: �����Ż��ӿڣ����ٳ�����ʱ
	* @���� 1  : token(userToken��accessToken)
	* @���� 2  : ����豸��ϢdeviceJson[in] json�����ʽ [{"PlayToken":string,  "Sn":string}]
	* @�� �� ֵ: ��
	*****************************************************************************/
	void loginStreamServers(const char* token,const char* deviceJson);

	/*****************************************************************************
	* @��������: api������ʽ(�ṹ�巽ʽ,��������ά��)
	* @�� �� ֵ: true/false
	*****************************************************************************/
	int request(void* req, void* resp, int timeout, void* pOpenApiClient = 0);

	/*****************************************************************************
	* @��������: api������ʽ(URL��ʽ)
	* @�� �� ֵ: true/false
	*****************************************************************************/
	int requestWithURL(const char* url,const char* body,void* resp,int timeout,int isKeepAlive);

	/*****************************************************************************
	* @��������: ����ʼ��OpenSDK(����ʱʹ��)
	* @�� �� ֵ: ��
	*****************************************************************************/
	void uninitOpenApi();

	void resetToken(const char* token);
	
private:
	void* m_hLCOpenSDK_Api_Inside;
	static LCOpenSDK_Api* sm_instance;

};

#endif /* _LCOPENSDK_API_H_ */
