# Flipper Blackhat App
This is the repository for the Flipper blackhat app

## Building
``` bash
make # Build the app
make deploy # Deploy the app to your flipper
```

## TODO
- [ ] UART passthough: after opening the app the flipper should enumerate as a USB virtual serial port.
- [ ] UART Function hooks: should be able to call function to send UART data, and get data in the queue. 
	- uart_send(char* data, size_t len )
	- uint_16 uart_get(char* data)
- [ ] Should have options to interact with the flipper blackhat script on SoC, connect to AP, starting portal, etc...

## Notes
- [My progress here](https://old.reddit.com/r/flipperzero/comments/1b755hh/need_help_with_firmware_development/)
