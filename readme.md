### 1, Product picture

![1.54_inch_hmi_e-paper_display](F:\wiki\lorawan\Lora RA-08H Node Board\crt01158h-crowtail6.jpg)

### 2, Product version number

|      | Hardware | Software | Remark |
| ---- | -------- | -------- | ------ |
| 1    | V1.0     | V1.0     | latest |

### 3, product information

#### Display Module Specifications

- Voltage: 3.3~5V
- Theoretical maximum transmission power+22dBm
- Supported frequency band: 803~930MHZ
- High sensitivity: -138dBm@125KzSF12
- Support spread spectrum factor: SF5/SF6/SF7/SF8/SF9/SF10/SF11/SF12
- Embedded memory: 128KB FLASH, 16KB SRAM
- Support LoRa/(G) FSK/BPSK/(G) MSK modulation
- Maximum transmission distance 1KM (ideal value for open space)
- With download and communication switching functions, users can customize programming
- Configure the first-generation IPEX seat
- Dimension (mm): 40 (L) * 20 (W) * 7.5 (H)

### 

### 4,Quick Start

##### Arduino IDE starts

STEP1 Configure controller board&communication port
On top of the Arduino IDE, click “Tools>Board>” and select “Arduino Uno” from the available options
![SELECT BOARD.png](https://www.elecrow.com/wiki/image/thumb/c/c5/SELECT_BOARD.png/700px-SELECT_BOARD.png)
STEP2 Select the COM port that indicates Arduino Uno. Please note that the actual numbers after the “COM” word will vary from computer to computer, so they could be different from the ones shown in the figure.
![S 2 2.png](https://www.elecrow.com/wiki/image/thumb/d/d5/S_2_2.png/600px-S_2_2.png)

### 6,Folder structure.

|--Datasheet: Includes datasheets for components used in the project, providing detailed specifications, electrical characteristics, and pin configurations.

|--Eagle_SCH&PCB: Contains **Eagle CAD** schematic (`.sch`) and PCB layout (`.brd`) files. These are used for circuit design and PCB manufacturing.

|--example: Provides example code and projects to demonstrate how to use the hardware and libraries. These examples help users get started quickly.

|--factory_firmware: Stores pre-compiled factory firmware that can be directly flashed onto the device. This ensures the device runs the default functionality.

### 7,Pin definition

// Pin2——>LORA-TXD

// Pin3——>LORA-RXD