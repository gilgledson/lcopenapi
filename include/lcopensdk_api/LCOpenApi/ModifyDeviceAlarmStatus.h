/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_ModifyDeviceAlarmStatus_H_
#define _LC_OPENAPI_CLIENT_ModifyDeviceAlarmStatus_H_

#include "LCOpenApiClientSdk.h"

/** DESCRIPTION: 
修改失败报警状态，开/关

 */

typedef struct ModifyDeviceAlarmStatusRequest 
{
	LCOpenApiRequest base;

	struct ModifyDeviceAlarmStatusRequestData
	{
		
		/** [cstr]modifyDeviceAlarmStatus */
		#define _STATIC_ModifyDeviceAlarmStatusRequestData_method "modifyDeviceAlarmStatus"
		CSTR method;
		/** [bool]true:开;false:关 */
		BOOL enable;
		/** 通道ID */
		CSTR channelId;
		/** 授权token(userToken或accessToken) */
		CSTR token;
		/** 设备ID */
		CSTR deviceId;

	} data;

} ModifyDeviceAlarmStatusRequest;

C_API ModifyDeviceAlarmStatusRequest *LCOPENAPI_INIT(ModifyDeviceAlarmStatusRequest);

typedef struct ModifyDeviceAlarmStatusResponse 
{
	LCOpenApiResponse base;

	struct ModifyDeviceAlarmStatusResponseData
	{
		
		/** [int][O]保留 */
		int _nouse;
 
	} data;

} ModifyDeviceAlarmStatusResponse;

C_API ModifyDeviceAlarmStatusResponse *LCOPENAPI_INIT(ModifyDeviceAlarmStatusResponse);

#endif
