COMPONENT_ADD_INCLUDEDIRS := include
COMPONENT_PRIV_INCLUDEDIRS := . spiffs/src
COMPONENT_SRCDIRS := . spiffs/src

COMPONENT_SUBMODULES := spiffs

spiffs/src/spiffs_nucleus.o: CFLAGS += -Wno-tautological-compare
