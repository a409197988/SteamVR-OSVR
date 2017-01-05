/** @file
    @brief Header

    @date 2015

    @author
    Sensics, Inc.
    <http://sensics.com/osvr>
*/

// Copyright 2015 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef INCLUDED_osvr_device_properties_h_GUID_5212DE9D_B211_4139_A140_45A578EFA47E
#define INCLUDED_osvr_device_properties_h_GUID_5212DE9D_B211_4139_A140_45A578EFA47E

// Internal Includes
// - none

// Library/third-party includes
#include <openvr_driver.h>

// Standard includes
// - none

// Whenever you upgrade OpenVR, make sure you update all the functions below if vr::ETrackedDeviceProperty has changed.

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, const bool&)
{
    switch (prop) {
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Float
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // Int32
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // Uint64
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // String
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
    // Matrix34
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
        return true;
    }

    return true;
}

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, const float&)
{
    switch (prop) {
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Bool
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // Int32
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // Uint64
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // String
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
    // Matrix34
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
        return true;
    }

    return true;
}

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, const int32_t&)
{
    switch (prop) {
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Bool
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // Float
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // Uint64
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // String
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
    // Matrix34
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
        return true;
    }

    return true;
}

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, const uint64_t&)
{
    switch (prop) {
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Bool
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // Float
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // Int32
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // String
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
    // Matrix34
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
        return true;
    }

    return true;
}

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, const char*)
{
    switch (prop) {
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Bool
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // Float
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // Int32
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // Uint64
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // Matrix34
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
        return true;
    }

    return true;
}

inline bool isWrongDataType(vr::ETrackedDeviceProperty prop, vr::HmdMatrix34_t)
{
    switch (prop) {
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_CameraToHeadTransform_Matrix34:
    // could be any type
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return false;
    // Invalid
    case vr::Prop_Invalid:
    // Bool
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
    // Float
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    // Int32
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
    case vr::Prop_CameraCompatibilityMode_Int32:
    // Uint64
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_SupportedButtons_Uint64:
    // String
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_ModeLabel_String:
    case vr::Prop_DriverVersion_String:
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
        return true;
    }

    return true;
}

inline bool isWrongDeviceClass(vr::ETrackedDeviceProperty prop, vr::ETrackedDeviceClass device_class)
{
    switch (prop) {
    // General properties that apply to all device classes
    case vr::Prop_TrackingSystemName_String:
    case vr::Prop_ModelNumber_String:
    case vr::Prop_SerialNumber_String:
    case vr::Prop_RenderModelName_String:
    case vr::Prop_WillDriftInYaw_Bool:
    case vr::Prop_ManufacturerName_String:
    case vr::Prop_TrackingFirmwareVersion_String:
    case vr::Prop_HardwareRevision_String:
    case vr::Prop_AllWirelessDongleDescriptions_String:
    case vr::Prop_ConnectedWirelessDongle_String:
    case vr::Prop_DeviceIsWireless_Bool:
    case vr::Prop_DeviceIsCharging_Bool:
    case vr::Prop_DeviceBatteryPercentage_Float:
    case vr::Prop_StatusDisplayTransform_Matrix34:
    case vr::Prop_Firmware_UpdateAvailable_Bool:
    case vr::Prop_Firmware_ManualUpdate_Bool:
    case vr::Prop_Firmware_ManualUpdateURL_String:
    case vr::Prop_HardwareRevision_Uint64:
    case vr::Prop_FirmwareVersion_Uint64:
    case vr::Prop_FPGAVersion_Uint64:
    case vr::Prop_VRCVersion_Uint64:
    case vr::Prop_RadioVersion_Uint64:
    case vr::Prop_DongleVersion_Uint64:
    case vr::Prop_BlockServerShutdown_Bool:
    case vr::Prop_CanUnifyCoordinateSystemWithHmd_Bool:
    case vr::Prop_ContainsProximitySensor_Bool:
    case vr::Prop_DeviceProvidesBatteryStatus_Bool:
    case vr::Prop_DeviceCanPowerOff_Bool:
    case vr::Prop_Firmware_ProgrammingTarget_String:
    case vr::Prop_DeviceClass_Int32:
    case vr::Prop_HasCamera_Bool:
    case vr::Prop_Firmware_ForceUpdateRequired_Bool:
    case vr::Prop_ViveSystemButtonFixRequired_Bool:
    case vr::Prop_DriverVersion_String:
        return false;

    // Properties that are unique to TrackedDeviceClass_HMD
    case vr::Prop_ReportsTimeSinceVSync_Bool:
    case vr::Prop_SecondsFromVsyncToPhotons_Float:
    case vr::Prop_DisplayFrequency_Float:
    case vr::Prop_UserIpdMeters_Float:
    case vr::Prop_CurrentUniverseId_Uint64:
    case vr::Prop_PreviousUniverseId_Uint64:
    case vr::Prop_DisplayFirmwareVersion_Uint64:
    case vr::Prop_IsOnDesktop_Bool:
    case vr::Prop_DisplayMCType_Int32:
    case vr::Prop_DisplayMCOffset_Float:
    case vr::Prop_DisplayMCScale_Float:
    case vr::Prop_EdidVendorID_Int32:
    case vr::Prop_DisplayMCImageLeft_String:
    case vr::Prop_DisplayMCImageRight_String:
    case vr::Prop_DisplayGCBlackClamp_Float:
    case vr::Prop_EdidProductID_Int32:
    case vr::Prop_CameraToHeadTransform_Matrix34:
    case vr::Prop_DisplayGCType_Int32:
    case vr::Prop_DisplayGCOffset_Float:
    case vr::Prop_DisplayGCScale_Float:
    case vr::Prop_DisplayGCPrescale_Float:
    case vr::Prop_DisplayGCImage_String:
    case vr::Prop_LensCenterLeftU_Float:
    case vr::Prop_LensCenterLeftV_Float:
    case vr::Prop_LensCenterRightU_Float:
    case vr::Prop_LensCenterRightV_Float:
    case vr::Prop_UserHeadToEyeDepthMeters_Float:
    case vr::Prop_CameraFirmwareVersion_Uint64:
    case vr::Prop_CameraFirmwareDescription_String:
    case vr::Prop_DisplayFPGAVersion_Uint64:
    case vr::Prop_DisplayBootloaderVersion_Uint64:
    case vr::Prop_DisplayHardwareVersion_Uint64:
    case vr::Prop_AudioFirmwareVersion_Uint64:
    case vr::Prop_CameraCompatibilityMode_Int32:
    case vr::Prop_ScreenshotHorizontalFieldOfViewDegrees_Float:
    case vr::Prop_ScreenshotVerticalFieldOfViewDegrees_Float:
    case vr::Prop_DisplaySuppressed_Bool:
    case vr::Prop_DisplayAllowNightMode_Bool:
        return (vr::TrackedDeviceClass_HMD != device_class);

    // Properties that are unique to TrackedDeviceClass_Controller
    case vr::Prop_AttachedDeviceId_String:
    case vr::Prop_SupportedButtons_Uint64:
    case vr::Prop_Axis0Type_Int32:
    case vr::Prop_Axis1Type_Int32:
    case vr::Prop_Axis2Type_Int32:
    case vr::Prop_Axis3Type_Int32:
    case vr::Prop_Axis4Type_Int32:
    case vr::Prop_ControllerRoleHint_Int32:
        return (vr::TrackedDeviceClass_Controller != device_class);

    // Properties that are unique to TrackedDeviceClass_TrackingReference
    case vr::Prop_FieldOfViewLeftDegrees_Float:
    case vr::Prop_FieldOfViewRightDegrees_Float:
    case vr::Prop_FieldOfViewTopDegrees_Float:
    case vr::Prop_FieldOfViewBottomDegrees_Float:
    case vr::Prop_TrackingRangeMinimumMeters_Float:
    case vr::Prop_TrackingRangeMaximumMeters_Float:
    case vr::Prop_ModeLabel_String:
        return (vr::TrackedDeviceClass_TrackingReference != device_class);

    // Properties that are used for user interface like icons names
    case vr::Prop_IconPathName_String:
    case vr::Prop_NamedIconPathDeviceOff_String:
    case vr::Prop_NamedIconPathDeviceSearching_String:
    case vr::Prop_NamedIconPathDeviceSearchingAlert_String:
    case vr::Prop_NamedIconPathDeviceReady_String:
    case vr::Prop_NamedIconPathDeviceReadyAlert_String:
    case vr::Prop_NamedIconPathDeviceNotReady_String:
    case vr::Prop_NamedIconPathDeviceStandby_String:
    case vr::Prop_NamedIconPathDeviceAlertLow_String:
        return true;

    // Invalid
    case vr::Prop_Invalid:
        return true;

    // Vendors are free to expose private debug data in this reserved region
    case vr::Prop_VendorSpecific_Reserved_Start:
    case vr::Prop_VendorSpecific_Reserved_End:
        return true;
    }

    return true;
}

#endif // INCLUDED_osvr_device_properties_h_GUID_5212DE9D_B211_4139_A140_45A578EFA47E

