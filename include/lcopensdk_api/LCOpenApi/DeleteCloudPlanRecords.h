/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_DeleteCloudPlanRecords_H_
#define _LC_OPENAPI_CLIENT_DeleteCloudPlanRecords_H_

#include "LCOpenApiClientSdk.h"

/** DESCRIPTION: 
删除计划云录像片段
 */

typedef struct DeleteCloudPlanRecordsRequest 
{
	LCOpenApiRequest base;

	struct DeleteCloudPlanRecordsRequestData
	{
		
		/** 云录像Id */
		CSTR recordId;
		/** 授权token(userToken或accessToken) */
		CSTR token;
		/** [cstr]deleteCloudPlanRecords */
		#define _STATIC_DeleteCloudPlanRecordsRequestData_method "deleteCloudPlanRecords"
		CSTR method;

	} data;

} DeleteCloudPlanRecordsRequest;

C_API DeleteCloudPlanRecordsRequest *LCOPENAPI_INIT(DeleteCloudPlanRecordsRequest);

typedef struct DeleteCloudPlanRecordsResponse 
{
	LCOpenApiResponse base;

	struct DeleteCloudPlanRecordsResponseData
	{
		
		/** [int][O]保留 */
		int _nouse;
 
	} data;

} DeleteCloudPlanRecordsResponse;

C_API DeleteCloudPlanRecordsResponse *LCOPENAPI_INIT(DeleteCloudPlanRecordsResponse);

#endif
