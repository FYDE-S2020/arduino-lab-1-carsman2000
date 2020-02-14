Name: Robert Cameron Scott

EID: rcs3384

Team Number:

## Questions

1. Why does your program need a setup and a loop?

    Setup is needed to create variables and run functions that only happen once. The loop is for routines that continue to execute over and over while the device/program is running.

2. What is the downside to putting all your code in a loop?

    It repeats the initialization of variables, meaning you can't have any kind of running total or persistant variables.

3. Why does your code need to be compiled?

    The microprocessor can't interpret arduino code, so compiling needs to be done to change it into machine code.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    Lowering the frequency of the LED blink means it is easier for the human eye to see the on/off periods it goes through. Raising the frequency could be a solution to mask the flashing of the LED and pass for constant change in brightness.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    You need to connect the logic analyzer ground to the ESP32 ground so the analyzer has a reference point for the voltage level of the ESP32 ground.

6. What is the difference between synchronous and asynchronous communication?

    Synchronous communication involves the receiving unit knowing exactly when to expect data coming in, while asynchronous communication can entail data being sent out or received independent of the device's clock.

7. Profile of UART: Sent X bytes in Y time 

    Sent 6 bytes in .51225 ms

8. Profile of SPI: Sent X bytes in Y time

    Sent 4 bytes in 89.75 us

9. Why is SPI so much faster than UART?

    SPI is synchronous, while UART is asynchronous.

10. list one pro and one con of UART

    One pro is that UART only requires two wires, while a con is that it is comparatively slower than SPI.

11. list one pro and one con of SPI

    A pro of SPI is its speed, compared to UART, however it does require more individual wires to implement.

12. list one pro and one con of I2C

    An advantage of I2C is that it supports multiple devices being masters as well as switching devices between master and slave. On the other hand, it is comparatively slower than SPI.

13. Why does I2C need external resistors to work?

    Because I2C uses open drain circuitry, the external resistors are needed to provide current to the system and allow for communications to take place.

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/Lab1_Blink_Logic.bmp)

Procedure A, step 4:
![Put path to your image here ->](img/Dimmer_Logic.bmp)

Procedure B, UART:
![Put path to your image here ->](img/UART_Sample.bmp)

Procedure B, SPI:
![Put path to your image here ->](img/SPI_Sample.png)
