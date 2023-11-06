# ENGR-125-Week-10
A small circuit to teach middle schoolers how to use an Arduino. 

# Instructions:
1. First, we have to understand the code. The analogInputPin refers to the photoresistor. It is an input which means that it is taking in data. We set that to A0, which refers to the pin in the Arduino. thresholdVoltage refers to the light sensitivity of the photoresistor. In the loop, we are first making the regular LED blink then we are setting up a conditional where when the photoresistor senses darkness, it will tell the second LED that it needs to start blinking. 
2. Next, we will set up the circuit. (I will explain more when with the student.) On one row of the breadboard, connect a wire from 5V on the Arduino to the top of the photoresistor. Skip a few rows, connect the bottom of the photoresistor, a wire to A0 and the resistor (orange stripe up). Skip a couple of rows again, connect the bottom of the resistor, a wire to GND, and the short end of the green LED. Skip a few rows again and connect the long leg of the green LED with a wire to digital pin 13. Skip over to the other side of the breadboard and again connect a blue LED with a short leg connected to GND and a long leg to digital pin 12. 
3. Go to Arduino IDE, connect the Arduino to the computer and upload the code. Touch the photoresistor and see the green LED blick. You are done!
