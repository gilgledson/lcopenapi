# Install script for directory: C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/lcopensdk")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/ConstString.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/FreeBuffer.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/AddGroup.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/AddGroupDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/AddRole.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/BeAuthDeviceList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/BindDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/BindDeviceInfo.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/BreathingLightStatus.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/CheckDeviceBindOrNot.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ChildGroupList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/CloudRecordPlan.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ControlDeviceWifi.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ControlPTZ.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/CurrentDeviceWifi.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteAlarmMessage.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteCloudPlanRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteCloudRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteGroup.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteGroupDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteRole.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeleteUserAuthTager.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceAlarmPlan.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceAuthInfo.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceBaseDetailList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceBaseList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceOnline.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceOpenDetailList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceOpenList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/DeviceVersionList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/FrameReverseStatus.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetAlarmMessage.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetAuthFunctions.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetCloudRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetRecordByLinkageId.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetStorageStrategy.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GetStrategies.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GroupDeviceList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/GroupList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyBreathingLight.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyCloudRecordPlan.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyDeviceAlarmPlan.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyDeviceAlarmStatus.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyDeviceName.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyDevicePwd.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ModifyFrameReverseStatus.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/OpenCloudRecord.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/PassengerFlow.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudPlanRecordBitmap.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudPlanRecordNum.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudPlanRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudRecordBitmap.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudRecordCallNum.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudRecordNum.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryCloudRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryLocalRecordBitmap.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryLocalRecordNum.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/QueryLocalRecords.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/RecoverSDCard.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/RoleList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/SetAllStorageStrategy.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/SetDeviceSnap.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/SetStorageStrategy.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/SetUserAuthTager.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/ShareDeviceList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UnBindDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UnBindDeviceInfo.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UnGroupDeviceList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UpgradeDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UpgradeProcessDevice.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UploadDeviceCoverPicture.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UserAuthList.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UserBindNoVerify.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/UserTokenByAccount.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApi/WifiAround.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenApiClientSdk.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenSDK_Api.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/LCOpenSDK_Define.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/OAuth2Client.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_api/basedef.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_audiotalk/LCOpenSDK_AudioTalk.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_audiotalk/LCOpenSDK_TalkerListener.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_deviceinit/LCOpenSDK_DeviceInit.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_download/LCOpenSDK_Download.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_download/LCOpenSDK_DownloadListener.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_loginmanager/LCOpenSDK_LoginListener.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_loginmanager/LCOpenSDK_LoginManager.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_netsdk/LCOpenSDK_NetSDKLogin.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_netsdk/dhnetsdk.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_utils/LCOpenSdk_Utils.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_videoplay/LCOpenSDK_Param.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_videoplay/LCOpenSDK_PlayerListener.h"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/include/lcopensdk_videoplay/LCOpenSDK_VideoPlay.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lib/LCOpenApiClientmd.lib"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lib/LCOpenSDKmd.lib"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lib/libcurlmd.lib"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lib/libeay32md.lib"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lib/ssleay32md.lib"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/HWDec.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/Infra.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/IvsDrawer.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/LCOpenApiClientmd.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/LCOpenSDKmd.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/RenderEngine.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/avnetsdk.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/dhconfigsdk.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/dhnetsdk.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/dllmavp264enc.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/fisheye.dll"
    "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/bin/play.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lcopensdk" TYPE FILE FILES "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/lcopensdk-config.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/Gilgl/OneDrive/Documentos/vcpkg-docs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
