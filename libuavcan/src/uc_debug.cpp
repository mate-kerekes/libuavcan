#include <uavcan/debug.hpp>

__attribute__((weak)) void UAVCAN_ERROR(const char* src, const char* fmt, ...)
{
    va_list args;
    (void)std::printf("UAVCAN_ERROR: %s: ", src);
    va_start(args, fmt);
    (void)std::vprintf(fmt, args);
    va_end(args);
    (void)std::puts("");
}

__attribute__((weak)) void UAVCAN_TRACE(const char* src, const char* fmt, ...) {
#if UAVCAN_DEBUG
    va_list args;
    (void)std::printf("UAVCAN: %s: ", src);
    va_start(args, fmt);
    (void)std::vprintf(fmt, args);
    va_end(args);
    (void)std::puts("");
#else
    (void)src;
    (void)fmt;
#endif
}
