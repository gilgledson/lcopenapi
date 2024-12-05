#ifndef _LCOPENSDK_DOWNLOADLISTENER_H_
#define _LCOPENSDK_DOWNLOADLISTENER_H_

class LCOpenSDK_DownloadListener
{
public:
    virtual ~LCOpenSDK_DownloadListener(){};

    /**
     * ���ݳ��Ȼص�
     *
     * @param index   [in] ����������
     * @param datalen [in] ���ݳ���
     *
     */
    virtual void onDownloadReceiveData(int index, int datalen) = 0;

    /**
     * ״̬�ص�
     *
     * @param index       [in] ����������
     * @param code        [in] ������
     * @param type        [in] ��������
     *
     */
    virtual void  onDownloadState(int index, const char* code, int type) = 0;

};

#endif /* _LCOPENSDK_DOWNLOADLISTENER_H_ */
