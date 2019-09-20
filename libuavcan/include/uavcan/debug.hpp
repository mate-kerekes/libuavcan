/*
 * Debug stuff, should only be used for library development.
 * Copyright (C) 2014 Pavel Kirienko <pavel.kirienko@gmail.com>
 */

#ifndef UAVCAN_DEBUG_HPP_INCLUDED
#define UAVCAN_DEBUG_HPP_INCLUDED

#include <uavcan/build_config.hpp>

# include <cstdio>
# include <cstdarg>

# if __GNUC__
__attribute__ ((format(printf, 2, 3)))
# endif
void UAVCAN_ERROR(const char* src, const char* fmt, ...);

# if __GNUC__
__attribute__ ((format(printf, 2, 3)))
# endif
void UAVCAN_TRACE(const char* src, const char* fmt, ...);

#endif // UAVCAN_DEBUG_HPP_INCLUDED
