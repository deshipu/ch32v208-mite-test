#define CH32V20x_D8W             /* CH32V208 */

#include "debug.h"

int main(void) {
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
    Delay_Init();
    USART_Printf_Init(115200);
    printf("SystemClk:%d\r\n", SystemCoreClock);
    while(1) {
    }
}
