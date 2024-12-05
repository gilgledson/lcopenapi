#ifndef _LCOPENSDK_AUDIOTALK_H_
#define _LCOPENSDK_AUDIOTALK_H_

#include "lcopensdk_global.h"
#include "lcopensdk_videoplay/LCOpenSDK_Param.h"
#include "LCOpenSDK_TalkerListener.h"

class LCOPENSDK_EXPORT LCOpenSDK_AudioTalk
{
private:
    LCOpenSDK_AudioTalk();
    ~LCOpenSDK_AudioTalk();
public:
    static LCOpenSDK_AudioTalk* GetInstance();
    void setTalkerListener(LCOpenSDK_TalkerListener* talkerListener);
    LCOpenSDK_TalkerListener* getTalkerListener();

	/*****************************************************************************
	* @�������ܣ� playTalk ֧���豸���Խ�
	* @�� �� ֵ:  �ɹ���0��ʧ�ܣ�-1
	*****************************************************************************/
    int playTalk(const char* token, const char* deviceID, const char* decryptKey, bool isTls);

	/*****************************************************************************
	* @�������ܣ� playTalkEx ͨ�����Խ���Ҳ֧���豸���Խ����豸���Խ���Ҫ��ͨ������Ϊ-1
	* @�� �� ֵ: �ɹ���0��ʧ�ܣ�-1
	*****************************************************************************/
	int playTalkEx(LCOpenSDK_ParamTalk *paramTalk);

    int stopTalk();

	 /**
    * ���ò��ţ��Խ�����������·��
    * @param   [in] const char * saveStreamPath     Ĭ��Ϊ��
     * @return  int                                  0/��0 �ɹ�/ʧ��
    */
    int setSaveStreamPath(const char* saveStreamPath=NULL);

private:
    void* m_hLCOpenSDK_AudioTalk_Inside;
    static LCOpenSDK_AudioTalk* sm_instance;
};

#endif /* _LCOPENSDK_AUDIOTALK_H_ */
