#ifndef _LCOPENSDK_LOGINMANAGER_H_
#define _LCOPENSDK_LOGINMANAGER_H_

#include <string>
#include "lcopensdk_global.h"
#include "LCOpenSDK_LoginListener.h"
#include "lcopensdk_api/LCOpenSDK_Define.h"

class LCOPENSDK_EXPORT LCOpenSDK_LoginManager
{
private:
	LCOpenSDK_LoginManager();
	~LCOpenSDK_LoginManager();

public:
	static LCOpenSDK_LoginManager* getInstance();
	
	/*****************************************************************************
	* @��������: P2P����Ԥ�򶴲����������豸Ԥ��ͬ��������
	* @���� 1  : token(userToken��accessToken)
	* @���� 2  : ���Ԥ���豸deviceJsonString[in] json�����ʽ [{"PlayToken":string,  "Sn":string}]
	* @�� �� ֵ:  true/false
	*****************************************************************************/
	bool addDevices(const char* token,const char* deviceJsonString);

	/*****************************************************************************
	* @��������: P2P����Ԥ�򶴲���������Ԥ�򶴽ӿ��첽������
	* @���� 1  : token(userToken��accessToken)
	* @���� 2  : ���Ԥ���豸deviceJsonString[in] json�����ʽ [{"PlayToken":string,  "Sn":string}]
	* @�� �� ֵ:  true/false
	*****************************************************************************/
	bool addDevicesAsync(const char* token,const char* deviceJsonString);

	unsigned short getNetsdkP2pPort(const char* token, const char* deviceId);

	unsigned short getP2pPort(const char* token, const char* deviceId, unsigned short port, unsigned int timeout);

	/*****************************************************************************
	* @��������: ��ȡP2P�˿ںţ����Ƚ���addDevice������
	* @���� 1  : token(userToken��accessToken)
	* @���� 2  : playToken
	* @���� 3  : deviceId
	* @���� 4  : ��ʱʱ��
	* @�� �� ֵ:  true/false
	*****************************************************************************/
	unsigned short getP2pPort(const char* token, const char *playToken,const char* deviceId,unsigned int timeout);

	/*****************************************************************************
	* @��������: ��ȡP2P��͸����
	* @�� �� ֵ:  0:P2P_Local, 1:P2P_P2P 
	*****************************************************************************/
	LCOpenSDK_P2P_LINKTYPE getP2PLinkType(const char* deviceId,const char* devicePid);

	void setLoginListener(LCOpenSDK_LoginListener* loginListener);

private:
	void* m_hLCOpenSDK_LoginManager_Inside;
	static LCOpenSDK_LoginManager* sm_instance;
};

#endif /* _LCOPENSDK_LOGINMANAGER_H_ */
