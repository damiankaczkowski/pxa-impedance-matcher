#ifndef _ENDIAN_H
#define _ENDIAN_H

#include "types.h"

#define be_to_cpu(x) \
	( ((0xFF000000UL & ((__u32)x)) >> 24) | \
	  ((0x00FF0000UL & ((__u32)x)) >> 8)  | \
	  ((0x0000FF00UL & ((__u32)x)) << 8)  | \
	  ((0x000000FFUL & ((__u32)x)) << 24)    )

#endif
