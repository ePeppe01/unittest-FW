/******************************************************************************
 *                                                                            *
 * Copyright (C) 2023 Luca Tricerri                                           *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

/**
 * @triccyx@gmail.com
 */

#include <tuple>

#include "CRCFunction.hpp"
#include "gtest/gtest.h"
// Simple UT

void setup(void)
{

}

TEST(CRCCalculator, TestCRCOutput)
{
	//Setup
	setup();

    uint8_t buff[] = {0x45, 0x42, 0x47, 0x46, 0x41, 0x44, 0x72, 0x34, 0x24, 0x24};
    uint16_t CRC;
	
	//Execute
	CRC = calcCRC(buff, sizeof(buff));

	//Check
	EXPECT_EQ(0x96C1, CRC);
    EXPECT_EQ(0xC196, CRC);

}