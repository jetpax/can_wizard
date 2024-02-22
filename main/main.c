#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "can.h"
// #include "fs.h"
// #include "console.h"
// #include "xvprintf.h"


void app_main(void) {
    printf("Hello world!\n");

    // init_tx_ringbuf();
    // xTaskCreate(can_task, "can task", 4800, NULL, CONFIG_CAN_TASK_PRIORITY, NULL);
    // initialize_filesystem();
    // initialize_console();
    // xTaskCreate(console_task_interactive, "console tsk int", 8000, NULL, CONFIG_CONSOLE_INT_PRIORITY, NULL);
    for (int i = 10; i >= 0; i--) {
        printf("Restarting in %d seconds...\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    printf("Restarting now.\n");
    fflush(stdout);
    esp_restart();
}
