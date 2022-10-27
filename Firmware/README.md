## Install ESP IDF Tool 

*Ensure you have Python installed

To be able to build/flash/monitor any of firmware onto the development board or the smartwatch, you need to install the ESP IDF tool onto your machine

On Mac/Linux, follow the installation and environment seyup instructions here: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html#get-started-prerequisites 

If you are Windows, download the tool here: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/windows-setup.html

If you want, you can create an alias/doskey for the export command.

To see all the commands of the tool type: `idf.py --help`

## Create a New Project

In the Firmware directory run the following commands:  
```
idf.py create-project <PROJECT NAME> 
idf.py set-target esp32c3
idf.py menuconfig <- if you want to modify the menuconfig
```

## Build Project

In the project file, run:
```
idf.py build
```

## Flash Project on Board

Plug in the development board and run:

```
idf.py flash <- This will automatically build and flash
``` 

you can also specify the exact port to use via:

```
idf.py -p PORT flash
```

## Monitor the Board 

To monitor the board, run the idf command:

```
idf.py monitor
```

again you can specify the exact port to use 

```
idf.py -p PORT monitor
```

## Additional Notes 

If you are running Windows, I highly recommend just using WSL and either running in on WSL or use WSL as the commandline for performing idf.py. This is because idf.py officially does not support the use of GitBash. While most commands work, I realized that idf.py menuconfig does not work. 