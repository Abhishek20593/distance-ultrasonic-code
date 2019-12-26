# Distance_Measurement_Using_Ultrasonic_Sensor
* For this 1. Arduino Uno R3 2. HC-SR04 Ultrasonic Sensor 3. A Breadboard 4. Some Female to Male Connecting Wire and 
           5. A USB A-to-B cable ― are needed
* Step 1: The four female to male connectors are connected with the ultrasonic sensor 
* Step 2: Then the ultrasonic sensor is connected to the Arduino Uno:
---> Connect the +Vs to +5v on the Arduino board.
---> Connect Trig pin to Digital pin 7 on the Arduino board.
---> Connect Echo pin to Digital pin 7 on the Arduino board.
---> Connect GND with GND on the Arduino
* Step 3: After that the Sketch of Ultrasonic sensor will uploaded to the Arduino Board. 
The distance will be measured by the principle of Time-of-Flight. For this we use:
Ultrasonic_distance= duration/29/2;
We know that sound travels at 343 meters per second, which means it needs 29.155 microseconds per centimetre. 
So, we have to divide the duration by 29 and then by 2, because the sound has to travel the distance twice. 
It travels to the object and then back to the sensor. For velocity measurement we calculate time from the ‘duration’ and
calculate distance from the ‘Ultrasonic_distance’. 
* Step 4: After everything is done, compile the code and upload it to the board. 
Then start the Serial monitor to view the output values.
* In this way a ultrasonic sensor is interfaced with the controller board for distance measurement.

# ---------------Thank You------------------------------
