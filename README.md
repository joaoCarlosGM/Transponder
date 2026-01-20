| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C5 | ESP32-C6 | ESP32-H2 | ESP32-P4 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |

# _Sample project_

(See the README.md file in the upper level 'examples' directory for more information about examples.)

This is the simplest buildable example. The example is used by command `idf.py create-project`
that copies the project to user specified path and set it's name. For more information follow the [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project)



## How to use example
We encourage the users to use the example as a template for the new projects.
A recommended way is to follow the instructions on a [docs page](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#start-a-new-project).

## Example folder contents

The project **sample_project** contains one source file in C language [main.c](main/main.c). The file is located in folder [main](main).

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
transponder/
├── CMakeLists.txt
├── sdkconfig
├── sdkconfig.defaults
│
├── main/
│   ├── CMakeLists.txt
│   └── app_main.c
│
├── components/
│   ├── system/
│   │   ├── CMakeLists.txt
│   │   ├── system_init.c
│   │   ├── system_init.h
│   │   ├── system_events.c
│   │   └── system_events.h
│   │
│   ├── lora/
│   │   ├── CMakeLists.txt
│   │   ├── lora_fsm.c
│   │   ├── lora_fsm.h
│   │   ├── lora_driver.c
│   │   ├── lora_driver.h
│   │   ├── lora_packets.h
│   │   └── lora_events.h
│   │
│   ├── tdma/
│   │   ├── CMakeLists.txt
│   │   ├── tdma_scheduler.c
│   │   ├── tdma_scheduler.h
│   │   └── tdma_config.h
│   │
│   ├── gps/
│   │   ├── CMakeLists.txt
│   │   ├── gps_driver.c
│   │   ├── gps_driver.h
│   │   ├── gps_time.c
│   │   └── gps_time.h
│   │
│   ├── navigation/
│   │   ├── CMakeLists.txt
│   │   ├── navigation.c
│   │   └── navigation.h
│   │
│   ├── led_ring/
│   │   ├── CMakeLists.txt
│   │   ├── led_ring_driver.c
│   │   ├── led_ring_driver.h
│   │   └── led_ring_types.h
│   │
│   ├── display/
│   │   ├── CMakeLists.txt
│   │   ├── display_task.c
│   │   └── display_task.h
│   │
│   ├── manager/
│   │   ├── CMakeLists.txt
│   │   ├── manager_fsm.c
│   │   ├── manager_fsm.h
│   │   └── manager_web.c
│   │
│   └── common/
│       ├── CMakeLists.txt
│       ├── app_types.h
│       ├── app_config.h
│       └── app_utils.c
│
└── tools/
    ├── scripts/
    └── docs/
```
Additionally, the sample project contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.
