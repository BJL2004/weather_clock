#include "key.h"
#include "stm32f1xx_hal.h"

int key_scan(void)
{
    int key_value = 0;
    if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET)
    {
        key_value = 1;
    }
    else if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == GPIO_PIN_RESET)
    {
         key_value = 2;
    }
		else
		{
			key_value = 0;
		}

    return key_value;

}


