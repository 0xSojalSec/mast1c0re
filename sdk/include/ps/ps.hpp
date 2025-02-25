#pragma once

#if (defined(PS4) && PS4) || (defined(PS5) && PS5)
#include <cstdint>
#include <offsets/ps/libkernel.hpp>
#include <ps/tcp/tcp-client.hpp>

namespace PS
{
    #if defined(NETWORK_SUPPORT) && (LIB_KERNEL_SYS_RET)
    extern PS::TcpClient Debug;
    #endif

    uint64_t memcpy(uint64_t dest, uint64_t src, uint64_t n);
    uint64_t strncpy(uint64_t dest, uint64_t src, uint64_t n);
    uint32_t getpid();
    int32_t PadSetLightBar(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
    void MountDisc(uint64_t mountDiscOptions);
    void SetMountOptionFilepath(const char* filepath);
    void MountDiscWithFilepath(const char* filepath);
    char* GetMountedGameCode();
    #ifdef LIB_KERNEL_SCE_KERNEL_SEND_NOTIFICATION_REQUEST
    void notificationWithIcon(const char* icon, const char* format, ...);
    void notification(const char* format, ...);
    #endif
}
#endif