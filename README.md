# Azure IoT Device SDK port for Mbed OS

## Summary

This repository updates the Azure IoT Device SDK's [existing](https://github.com/Azure/azure-c-shared-utility/tree/LTS_02_2020_Ref01/adapters) Mbed OS support to work on Mbed OS 6. It can be used to connect devices running Mbed OS to the Azure IoT Hub service.

To use this library, an Mbed OS application needs to
* connect to the Internet, and declare and store the network interface to the _global pointer_ (i.e. not local or static)
    ```
    NetworkInterface *_defaultSystemNetwork;
    ```
    because the port looks for this via `extern`

* ensure the clock is set to the actual date and time as credentials require that.

Then it will be able to use [APIs](https://docs.microsoft.com/en-us/azure/iot-hub/iot-c-sdk-ref/) from the Azure IoT Device SDK.

An example demonstrating the use of this library has been provided as part of the official Mbed OS examples [here](https://github.com/ARMmbed/mbed-os-example-azure).

## Related links
* [Mbed boards](https://os.mbed.com/platforms/)
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Azure IoT Hub](https://azure.microsoft.com/en-gb/services/iot-hub/)
* [Microsoft Azure IoT Device SDK for C](https://github.com/Azure/azure-iot-sdk-c/tree/master/iothub_client)

## License and contributions

The software is provided under Apache-2.0 license. Contributions to this project are accepted under the same license.

This project contains code from other projects. The original license text is included in those source files. They must comply with our license guide. Specifically:
* Provided by Microsoft under the MIT license, externally fetched by the build tool:
  * [azure-iot-sdk-c](https://github.com/Azure/azure-iot-sdk-c)
  * [dependencies/azure-macro-utils-c](https://github.com/Azure/azure-macro-utils-c)
  * [dependencies/azure-umqtt-c](https://github.com/Azure/azure-umqtt-c)
  * [dependencies/c-utility](https://github.com/Azure/azure-c-shared-utility)
  * [dependencies/umock-c](https://github.com/Azure/umock-c)
* Provided by Microsoft under the MIT license, copied into this repository:
  * [copied/c-utility](https://github.com/Azure/azure-c-shared-utility/tree/LTS_02_2020_Ref01/inc/azure_c_shared_utility)
* Provided by Microsoft under the MIT license, updated by Arm Limited in this repository:
  * [mbed/adapters](https://github.com/Azure/azure-c-shared-utility/tree/LTS_02_2020_Ref01/adapters)
