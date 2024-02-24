#include "I2C.h"

#define MASTER


#ifdef MASTER

void app_main() 
{
    i2c_init(SDA_PIN_NUM, SCL_PIN_NUM, I2C_FREQ, I2C_MASTER_MODE);

    i2c_send(50, I2C_MASTER_MODE);
    vTaskDelay(1000/portTICK_PERIOD_MS);

    i2c_send(50, I2C_MASTER_MODE);
    vTaskDelay(1000/portTICK_PERIOD_MS);
}

#endif 


#ifdef SLAVE

void app_main()
{
    uint8_t* BUFF_I2C = NULL;

    while(1)
    {
        i2c_read(BUFF_I2C);
    }
}

#endif