/*************************************************************/
/* Shared base class implementation for both SPI and I2C     */
/* modes of the ADE7880 IC.                                  */
/*************************************************************/

#include "ADE7880.h"

int ADE7880::init()
{
    int cal_result = writeCalConstants();
    int config_result = writeMultipleRegisters();

    return (cal_result + config_result);
}

int ADE7880::writeCalConstants()
{
    // TODO: Hardcode and batch write calibration constants
    return 0;
}

int ADE7880::writeMultipleRegisters()
{
    // TODO: Hardcode and batch write config writeMultipleRegisters
    return 0;
}