//
// Created by kosaka reiya on 19/4/25.
//

#include <stdint.h>

#include "FreeRTOS.h"
#include "task.h"

#include "printf.h"
#include "intr_conf.h"

void radio_irq_handler(void);
void radio_task(void);

void main_radio()
{
	printf("[radio] create radio task\n");

	request_irq(MBOX_INT_C906_2ND, radio_irq_handler, 0, "radio_demo", (void *)0);

	xTaskCreate(radio_task, "radio_task", 1024, NULL, 1, NULL);

	vTaskStartScheduler();

	for (;;)
		;
}

void radio_task(void)
{
	while (1) {
		printf("[radio] demo demo demo");
		vTaskDelay(1000);
	}
}

void radio_irq_handler(void)
{

}
