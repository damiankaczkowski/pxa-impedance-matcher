#include "types.h"

inline void writeb(u8 val, u32 addr)
{
	*(volatile u32 *)addr = val;
}

inline u8 readb(u32 addr)
{
	return *(volatile u32 *)addr;
}

inline void writel(u32 val, u32 addr)
{
	*(volatile u32 *) addr = val;
}

inline u32 readl(u32 addr)
{
	return *(volatile u32 *) addr;
}
