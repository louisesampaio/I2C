#include "I2C.h"

#define SLAVE


#ifdef MASTER

const uint8_t command[] = "hello";

void app_main() 
{
    i2c_init(SDA_PIN_NUM, SCL_PIN_NUM, I2C_FREQ, I2C_MASTER_MODE);

    i2c_send(command, I2C_MASTER_MODE);
    vTaskDelay(1000/portTICK_PERIOD_MS);

    i2c_send(command, I2C_MASTER_MODE);
    vTaskDelay(1000/portTICK_PERIOD_MS);
}

#endif 


#ifdef SLAVE

void app_main()
{
    uint8_t BUFF_I2C[6];
    i2c_init(SDA_PIN_NUM, SCL_PIN_NUM, I2C_FREQ, I2C_SLAVE_MODE);

    while(1)
    {
       i2c_read(BUFF_I2C);
    }
}

#endif