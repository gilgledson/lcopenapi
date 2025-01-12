/**
 *  Auto created by ApiCreator Tool.
 *  SVN Rev: unknown, Author: unknown, Date: unknown
 *  SHOULD NOT MODIFY!
 */
 
#ifndef _LC_OPENAPI_CLIENT_QueryCloudRecords_H_
#define _LC_OPENAPI_CLIENT_QueryCloudRecords_H_

#include "LCOpenApiClientSdk.h"

/** DESCRIPTION: 
按照开始和结束时间查询报警云录像

 */

typedef struct QueryCloudRecordsRequest 
{
	LCOpenApiRequest base;

	struct QueryCloudRecordsRequestData
	{
		
		/** 从第几条到第几条,单次查询上限100,1-100表示第1条到第100条,包含100,云录像查询相同 */
		CSTR queryRange;
		/** [cstr]queryCloudRecords */
		#define _STATIC_QueryCloudRecordsRequestData_method "queryCloudRecords"
		CSTR method;
		/** 授权token(userToken或accessToken) */
		CSTR token;
		/** 结束时间，如2010-05-25 23:59:59 */
		CSTR endTime;
		/** 通道ID */
		CSTR channelId;
		/** 开始时间，如2010-05-25 00:00:00 */
		CSTR beginTime;
		/** 设备ID */
		CSTR deviceId;

	} data;

} QueryCloudRecordsRequest;

C_API QueryCloudRecordsRequest *LCOPENAPI_INIT(QueryCloudRecordsRequest);

typedef struct QueryCloudRecordsResponse 
{
	LCOpenApiResponse base;

	struct QueryCloudRecordsResponseData
	{
		
		/** define a list with struct of QueryCloudRecordsResponseData_RecordsElement */
		DECLARE_LIST(struct QueryCloudRecordsResponseData_RecordsElement
		{
			/** 录像ID */
			CSTR recordId;
			/** 设备ID */
			CSTR deviceId;
			/** 录像RegionId */
			CSTR recordRegionId;
			/** [int]加密模式（0：默认加密模式；1：用户加密模式） */
			int encryptMode;
			/** 加密图片下载地址 */
			CSTR thumbUrl;
			/** 结束时间，如2010-05-25 23:59:59 */
			CSTR endTime;
			/** 通道ID */
			CSTR channelId;
			/** 开始时间，如2010-05-25 00:00:00 */
			CSTR beginTime;
			/** 云录像的大小，单位byte */
			CSTR size;
		}) records;
 
	} data;

} QueryCloudRecordsResponse;

C_API QueryCloudRecordsResponse *LCOPENAPI_INIT(QueryCloudRecordsResponse);

#endif
