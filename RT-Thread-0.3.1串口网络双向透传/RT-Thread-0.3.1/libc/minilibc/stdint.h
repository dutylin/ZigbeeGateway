#ifndef __STDINT_H__
#define __STDINT_H__

#include <rtthread.h>

typedef	rt_int8_t		int8_t;
typedef	rt_uint8_t		uint8_t;
typedef	rt_int16_t		int16_t;
typedef	rt_uint16_t		uint16_t;
typedef	rt_int32_t		int32_t;
typedef	rt_uint32_t		uint32_t;

/*
 * 7.18.2 Limits of specified-width integer types.
 *
 * The following object-like macros specify the minimum and maximum limits
 * of integer types corresponding to the typedef names defined above.
 */

/* 7.18.2.1 Limits of exact-width integer types */
#define	INT8_MIN		(-0x7f - 1)
#define	INT16_MIN		(-0x7fff - 1)
#define	INT32_MIN		(-0x7fffffff - 1)

#define	INT8_MAX		0x7f
#define	INT16_MAX		0x7fff
#define	INT32_MAX		0x7fffffff

#define	UINT8_MAX		0xff
#define	UINT16_MAX		0xffff
#define	UINT32_MAX		0xffffffffU

#endif
