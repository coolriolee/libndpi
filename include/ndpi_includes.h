/*
 * ndpi_includes.h
 *
 * Copyright (C) 2011-16 - ntop.org
 *
 * This file is part of nDPI, an open source deep packet inspection
 * library based on the OpenDPI and PACE technology by ipoque GmbH
 *
 * nDPI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * nDPI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with nDPI.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __NDPI_INCLUDES_H__
#define __NDPI_INCLUDES_H__

#include <stdarg.h>
#ifdef __KERNEL__
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/types.h>
#include <linux/time.h>
#include <linux/limits.h>
#include <linux/ctype.h>
#include <linux/slab.h>
#include <asm-generic/div64.h>
#else
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include <assert.h>
#include <math.h>
#endif

#ifdef WIN32
#include "ndpi_win32.h"
#else
#ifdef __KERNEL__
#include <linux/types.h>
#include <linux/param.h>
#include <linux/time.h>
#include <linux/inet.h>
#include <linux/socket.h>
#include <linux/in.h>
#include <linux/in6.h>
#include <linux/ip.h>
#include <linux/tcp.h>
#include <linux/udp.h>

#define assert(expr) \
    do { \
    if (unlikely(!(expr))) { \
    printk(KERN_ERR "Assertion failed! %s,%s,%s,line=%d\n", \
#expr, __FILE__, __func__, __LINE__); \
    } \
    } while (0)

#else
#include <sys/types.h>
#include <sys/param.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#endif //__KERNEL__

#if !defined __APPLE__ && !defined __FreeBSD__ && !defined __NetBSD__ && !defined __OpenBSD__
#ifdef __KERNEL__
#else
#include <endian.h>
#include <byteswap.h>
#endif //__KERNEL__
#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
#include <netinet/in.h>
#if defined __NetBSD__ || defined __OpenBSD__
#include <netinet/in_systm.h>
#ifdef __OpenBSD__
#include <pthread.h>
#endif //__OpenBSD__
#endif //__NetBSD__
#endif //__FreeBSD__
#endif //__APPLE__
#endif	/* Win32 */

#endif /* __NDPI_INCLUDES_H__ */
