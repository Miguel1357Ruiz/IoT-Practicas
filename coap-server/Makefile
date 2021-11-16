CONTIKI_PROJECT = coap-server
LL: $(CONTIKI_PROJECT)

MODULES_REL += ./resources
PROJECT_SOURCEFILES += virtual-sensor.c

CONTIKI = ../..

# include the Coap implementation
include $(CONTIKI)/Makefile.dir-variables
MODULES += $(CONTIKI_NG_APP_LAYER_DIR)/coap

include $(CONTIKI)/Makefile.include