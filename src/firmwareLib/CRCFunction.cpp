#include "CRCFunction.hpp"


uint16_t calcCRC(const uint8_t *Buffer, uint8_t u8length)
{
	uint16_t temp, temp2, flag;
	temp = 0xFFFFU;
	for (uint8_t i = 0U; i < u8length; i++)
	{
		temp = temp ^ Buffer[i];
		for (uint8_t j = 1U; j <= 8U; j++)
		{
			flag = temp & 0x0001U;
			temp >>= 1U;
			if (flag != ZERO)
			{
				temp ^= 0xA001U;
			}
		}
	}
	// Reverse byte order.
	temp2 = temp >> 8U;
	temp = (temp << 8U) | temp2;
	temp &= 0xFFFFU;
	// the returned value is already swapped
	// crcLo byte is first & crcHi byte is last
	return temp;
}