#ifndef _LCOPENSDK_DEFINE_H_
#define _LCOPENSDK_DEFINE_H_

#define CToS(str)	((NULL == str.cstr) ? "" : str.cstr)

/* �������� */
typedef enum
{
	STREAM_MODE_UNCERTAINTY = -1,    //������ʽδȷ��(ָ��ǰû��������or������׼����or���漰������������)
	STREAM_MODE_P2P,                 //ʹ��P2P����
	STREAM_MODE_MTS,                 //ʹ��MTS����
}LCOpenSDK_STREAM_MODE;


typedef enum
{
	STREAM_MODE_P2P_Local,           //ʹ��P2P������ʽ-P2P_Local
	STREAM_MODE_P2P_P2P,             //ʹ��P2P������ʽ-P2P_P2P
	STREAM_MODE_P2P_Relay,           //ʹ��realy������ʽ
	STREAM_MODE_P2P_Unknow,           //ʹ��P2P������ʽ���޷�ȷ��P2P��ģʽP2P_Unknow
}LCOpenSDK_P2P_LINKTYPE;

/* onPlayerResult�ص�type�������� */
typedef enum
{
	RESULT_PROTO_TYPE_RTSP,      //RTSPҵ��(����ʵʱԤ��������¼��طš��Խ�)
	RESULT_PROTO_TYPE_HLS,       //HLSҵ��(������¼�񲥷š���¼������)
	RESULT_PROTO_TYPE_FILE,      //FILEҵ��(���������ļ�����)
	RESULT_PROTO_TYPE_NETSDK,    //NETSDKҵ��(������P2P�豸ʵʱԤ����¼��ط�)
	RESULT_PROTO_TYPE_SIP,       //SIPҵ��(������Meeting)
	RESULT_PROTO_TYPE_DHHTTP,    //˽��Э��ҵ�� 
	RESULT_PROTO_TYPE_MULTI,     //��������
	RESULT_PROTO_TYPE_COMMON,    //ͨ��Э��ҵ��
	RESULT_PROTO_TYPE_REST = 99,      //RESTҵ��(�漰����RTSP��HLS��SIPҵ��)
}LCOpenSDK_PROTO_TYPE;

typedef enum
{
	StreamSourceSwitchToP2P = 101,   /* ������·�л���p2p */
}LCOpenSDK_COMMON_MSG;


/* when type == RESULT_PROTO_TYPE_RTSP, code enum */
typedef enum
{
	STATE_PACKET_COMPONENT_ERROR = -1,      //����ڲ�������ý��ӿ�ʧ��
	STATE_PACKET_FRAME_ERROR = 0,        //��֡ʧ��
	STATE_RTSP_TEARDOWN_ERROR,       //�ڲ�Ҫ��ر�,�����ӶϿ���
	STATE_RTSP_DESCRIBE_READY,       //�Ự�Ѿ��յ�Describe��Ӧ
	STATE_RTSP_AUTHORIZATION_FAIL,   //RTSP��Ȩʧ��
	STATE_RTSP_PLAY_READY,           //�յ�PLAY��Ӧ
	STATE_RTSP_FILE_PLAY_OVER,       //¼���ļ��ط���������
	STATE_RTSP_PAUSE_READY,          //�յ�PAUSE��Ӧ
	STATE_RTSP_KEY_MISMATCH,         //��Կ����ȷ
	STATE_RTSP_LIVE_PAUSE_ENABLE,     //�����ֱ��֧��PAUSE , ����stream_inquirePause�ӿں���յ�����Ϣ����STATE_RTSP_LIVE_PAUSE_DISABLE ��Ϣ
	STATE_RTSP_LIVE_PAUSE_DISABLE,    //�����ֱ����֧��PAUSE
	STATE_RTSP_TALK_BUSY_LINE,        //�Խ�æ��
	STATE_RTSP_TALK_CHECK_FAILED,     //�Խ��������������
	STATE_RTSP_LIVE_PLAY_OVER,        //ֱ����������(��������豸���Ӵ�����)
	STATE_RTSP_SERVICE_UNAVAILABLE =  99,  // ����503 ��������������������
	STATE_RTSP_USER_INFO_BASE_START = 100, // �û���Ϣ��ʼ��, ������ϲ㴫��������Ϣ����ڸ���ʼ��������ۼ�
	STSTE_RTSP_STREAM_LIMIT_NOTIFY = 101,        //����֪ͨ
	STSTE_RTSP_CONCURRENT_LIMIT_NOTIFY = 102,    //����֪ͨ

	STATE_RTSP_KEEP_ALIVE_TIMEOUT       =    408001,
	STATE_RTSP_WAIT_MESSAGE_TIMEOUT     =    408002,
	STATE_RTST_SOCK_TIMEOUT             =    504008,
	STATE_RTST_AH_DECRYPT_FAIL          =    120000,   //�������ʧ��
	STATE_RTSP_STREAM_MODIFY_ERROR      =    602019,   //�����ӽ���ʧ��
}LCOpenSDK_RTSP_STATE;

typedef enum
{
	STATE_DHHTTP_COMPONENT_ERROR = -1,    //����ڲ�������ý��ӿ�ʧ�� 
	STATE_DHHTTP_OK              = 1000,  //�������ųɹ� 
	STATE_DHHTTP_PLAY_FILE_OVER  = 2000,  //�ط�ʱ����ʾ�ļ����Ž��� 
	STATE_DHHTTP_PAUSE_OK = 4000,       //����·�����ر�
	STATE_DHHTTP_PLAY_STOP = 6000,      // ˽��Э��ֹͣ(���� �� �طš� ʵʱ)
	STATE_DHHTTP_BAD_REQUEST     = 400000, //�Ƿ����󣬹رտͻ��� 
	STATE_DHHTTP_UNAUTHORIZED    = 401000, //δ��Ȩ���û���������� 
	STATE_DHHTTP_FORBIDDEN       = 403000, //��ֹ���ʣ��رտͻ��� 
	STATE_DHHTTP_NOTFOUND        = 404000, //��Դ�����ڣ��رտͻ��� 
	STATE_DHHTTP_REQ_TIMEOUT     = 408000, //����ʱ��ָ�����ɹ������������쳣�����������Ͽ� 
	STATE_DHHTTP_SERVER_ERROR    = 500000,  //�������ڲ����󣬹رտͻ��� 
	STATE_DHHTTP_SERVER_UNVAILABLE = 503000, //���񲻿��� 
	STATE_DHHTTP_SERVER_DISCONNECT = 503001, //Զ�˶Ͽ�������
	STATE_DHHTTP_FLOWLIMIT         = 503006, //mts����
	STATE_DHHTTP_P2P_MAXCONNECT    = 503007, //P2P�ﵽ��������� 
	STATE_DHHTTP_CHECK_FAILED      = 503008,      //�Խ�����
	STATE_DHHTTP_BUSY_LINE         = 503009,      //�Խ�æ��
	STATE_DHHTTP_HUNG_UP           = 503034,      //���ζԽ��ѱ��������ѹҶ�
	STATE_DHHTTP_GATEWAY_TIMEOUT   = 504000, //���粻ͨ 
	STATE_DHHTTP_CLIENT_ERROR      = 1000000, //�ͻ����ڲ����󣬴����߼����� 
	STATE_DHHTTP_KEY_ERROR         = 1000005, //��Կ����

	STATE_DHHTTP_REQ_TIMEOUT_RETRY     =    408100,
	STATE_DHHTTP_SOCK_TIMEOUT        =    504015,
	STATE_DHHTTP_AH_DECRYPT_FAIL          =    130000,  //�������ʧ��
	STATE_DHHTTP_STREAM_MODIFY_ERROR      =    602017,   //�����ӽ���ʧ��
	STATE_DHHTTP_LIVE_FINISH       = 16390,   //live������Ϣ(������)
	STATE_DHHTTP_LIVE_COUNT_DOWN   = 16392,   //���ߵ���ʱ֪ͨ��Ϣcode����������
}LCOpenSDK_DHHTTP_STATE;

typedef enum
{
	STATE_HLS_DOWNLOAD_FAILD,        //����ʧ��
	STATE_HLS_DOWNLOAD_BEGIN,        //��ʼ����
	STATE_HLS_DOWNLOAD_END,          //���ؽ���
	STATE_HLS_SEEK_SUCCESS,          //��λ�ɹ�
	STATE_HLS_SEEK_FAILD,            //��λʧ��
	STATE_HLS_ABORT_DONE,
	STATE_HLS_RESUME_DONE,
	STATE_HLS_KEY_MISMATCH = 11,     //��TCM���Զ�����Կ����Ĭ����Կ����ȷ
	STATE_HLS_DEVICE_KEY_ERROR = 14, //TCM����������ʱ���豸���벻��ȷ
}LCOpenSDK_HLS_STATE;



#endif //_LCOPENSDK_DEFINE_H_
