#include "contiki.h"
#include "coap-engine.h"

#include "sys/log.h"

#define LOG_MODULE "Coap Server"
#define LOG_LEVEL LOG_LEVEL_INFO

extern coap_resource_t res_battery, res_temperature, res_humidity;

PROCESS(coap_server, "Coap Server");
AUTOSTART_PROCESSES(&coap_server);

PROCESS_THREAD(coap_server, ev, data)
{

    PROCESS_BEGIN();

    PROCESS_PAUSE();

    LOG_INFO("Starting the Coap Server\n");
    coap_activate_resource(&res_battery, "system/battery");
    coap_activate_resource(&res_temperature, "sensor/temperature");
    coap_activate_resource(&res_humidity, "sensor/humidity");

    while (1) {

        PROCESS_WAIT_EVENT();

    }

    PROCESS_END();
    
}