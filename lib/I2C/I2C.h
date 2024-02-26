#ifndef I2C_H
#define I2C_H

#include "driver/i2c.h"

#define I2C_PORT    (0)
#define SDA_PIN_NUM (21)
#define SCL_PIN_NUM (22)
#define I2C_FREQ    (100000)

typedef enum
{
    I2C_MASTER_MODE,
    I2C_SLAVE_MODE
}i2c_mode;

int i2c_init(int SDA_PIN, int SCL_PIN, int FREQ, i2c_mode MODE);

int i2c_send(const uint8_t *data, i2c_mode MODE);

int i2c_read(uint8_t *buffer);





#endif