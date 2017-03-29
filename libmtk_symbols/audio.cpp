#include <utils/Errors.h>
#include <system/audio.h>
#include <binder/IPCThreadState.h>
#include <AudioGain.h>
#include <HwModule.h>
#include <IOProfile.h>
#include <AudioOutputDescriptor.h>

extern "C" {

android::status_t _ZN7android18AudioPolicyManager16createAudioPatchEPK11audio_patchP20audio_patch_handle_tj(
                            void *athis, const struct audio_patch *patch, audio_patch_handle_t *handle, uid_t uid);

android::status_t _ZN7android18AudioPolicyManager16createAudioPatchEPK11audio_patchPij(
                            void *athis, const struct audio_patch *patch, int *handle, uid_t uid) {
    return _ZN7android18AudioPolicyManager16createAudioPatchEPK11audio_patchP20audio_patch_handle_tj(
                athis, patch, (audio_patch_handle_t *)handle, uid);
}

android::status_t _ZN7android18AudioPolicyManager17releaseAudioPatchE20audio_patch_handle_tj(
                            void *athis, audio_patch_handle_t handle, uid_t uid);

android::status_t _ZN7android18AudioPolicyManager17releaseAudioPatchEij(void *athis, int handle, uid_t uid) {
    return _ZN7android18AudioPolicyManager17releaseAudioPatchE20audio_patch_handle_tj(athis, (audio_patch_handle_t)handle, uid);
}

android::status_t _ZN7android18AudioPolicyManager16startAudioSourceEPK17audio_port_configPK18audio_attributes_tPij(
                            void *athis,
                            const struct audio_port_config *source,
                            const audio_attributes_t *attributes,
                            audio_io_handle_t *handle,
                            uid_t uid);

android::status_t _ZN7android18AudioPolicyManager16startAudioSourceEPK17audio_port_configPK18audio_attributes_tPi(
                            void *athis,
                            const struct audio_port_config *source,
                            const audio_attributes_t *attributes,
                            audio_io_handle_t *handle) {
    return _ZN7android18AudioPolicyManager16startAudioSourceEPK17audio_port_configPK18audio_attributes_tPij(
        athis, source, attributes, handle, android::IPCThreadState::self()->getCallingUid());
}

android::status_t _ZN7android18AudioPolicyManager11startSourceENS_2spINS_21AudioOutputDescriptorEEE19audio_stream_type_tjPKcPj(
                            void *athis,
                            android::sp<android::AudioOutputDescriptor> outputDesc,
                            audio_stream_type_t stream,
                            audio_devices_t device,
                            const char *address,
                            uint32_t *delayMs);

android::status_t _ZN7android18AudioPolicyManager11startSourceENS_2spINS_21AudioOutputDescriptorEEE19audio_stream_type_tjPj(
                            void *athis,
                            android::sp<android::AudioOutputDescriptor> outputDesc,
                            audio_stream_type_t stream,
                            audio_devices_t device,
                            uint32_t *delayMs) {
    return _ZN7android18AudioPolicyManager11startSourceENS_2spINS_21AudioOutputDescriptorEEE19audio_stream_type_tjPKcPj(
        athis, outputDesc, stream, device, NULL, delayMs);
}

android::status_t _ZN7android20AudioPatchCollection13addAudioPatchE20audio_patch_handle_tRKNS_2spINS_10AudioPatchEEE(
                            void *athis, audio_patch_handle_t handle, const android::sp<android::AudioPatch>& patch);

android::status_t _ZN7android20AudioPatchCollection13addAudioPatchEiRKNS_2spINS_10AudioPatchEEE(void *athis, int handle, const android::sp<android::AudioPatch>& patch) {
    return _ZN7android20AudioPatchCollection13addAudioPatchE20audio_patch_handle_tRKNS_2spINS_10AudioPatchEEE(athis, (audio_patch_handle_t)handle, patch);
}

android::status_t _ZN7android20AudioPatchCollection16removeAudioPatchE20audio_patch_handle_t(void *athis, audio_patch_handle_t handle);

android::status_t _ZN7android20AudioPatchCollection16removeAudioPatchEi(void *athis, int handle) {
    return _ZN7android20AudioPatchCollection16removeAudioPatchE20audio_patch_handle_t(athis, (audio_patch_handle_t)handle);
}

android::status_t _ZN7android18AudioPolicyManager17resetOutputDeviceERKNS_2spINS_21AudioOutputDescriptorEEEiP20audio_patch_handle_t(
                            void *athis,
                            const android::sp<android::AudioOutputDescriptor>& outputDesc,
                            int delayMs,
                            audio_patch_handle_t *patchHandle);

android::status_t _ZN7android18AudioPolicyManager17resetOutputDeviceERKNS_2spINS_21AudioOutputDescriptorEEEiPi(
                            void *athis,
                            const android::sp<android::AudioOutputDescriptor>& outputDesc,
                            int delayMs,
                            int *patchHandle) {
    return _ZN7android18AudioPolicyManager17resetOutputDeviceERKNS_2spINS_21AudioOutputDescriptorEEEiP20audio_patch_handle_t(
                athis, outputDesc, delayMs, (audio_patch_handle_t *)patchHandle);
}

}
