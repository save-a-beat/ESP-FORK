# NOTE: This kind of mocking currently works on Linux targets only.
#       On Espressif chips, too many dependencies are missing at the moment.
#       Furthermore, this component can only mock the interfaces of
#       spi_master.h and gpio.h.
message(STATUS "building DRIVER MOCKS (only SPI, I2C and GPIO driver)")

idf_component_get_property(original_driver_dir driver COMPONENT_OVERRIDEN_DIR)

set(include_dirs
    "${original_driver_dir}/include"
    "${original_driver_dir}/include/driver"
    "${CMAKE_CURRENT_SOURCE_DIR}/../hal/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/../esp_hw_support/include")

idf_component_mock(INCLUDE_DIRS ${include_dirs}
    REQUIRES freertos
    MOCK_HEADER_FILES
    ${original_driver_dir}/include/driver/spi_master.h
    ${original_driver_dir}/include/driver/spi_common.h
    ${original_driver_dir}/include/driver/i2c.h
    ${original_driver_dir}/include/driver/gpio.h)

target_compile_definitions(${COMPONENT_LIB} PUBLIC SOC_I2C_NUM=2)
