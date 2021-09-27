char data = 0;                //Variable for storing received data
void setup() 
{
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
pinMode(8, OUTPUT);//Sets digital pin 13 as output pin
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(7, OUTPUT);
}
void loop()
{
  digitalWrite(7, HIGH);
if(Serial.available() > 0)  // Send data only when you receive data:
{

data = Serial.read();      //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");        //New line 
if(data == 'a')            //Checks whether value of data is equal to 1 
digitalWrite(8, HIGH);  //If value is 1 then LED turns ON
else if(data == 'b')    //Checks whether value of data is equal to 0
digitalWrite(8, LOW);   //If value is 0 then LED turns OFF
else if(data == 'e')
digitalWrite(9, HIGH);  //If value is 1 then LED turns ON
else if(data == 'f')//Checks whether value of data is equal to 0
digitalWrite(9, LOW);   //If value is 0 then LED turns OFF
else if(data == 'c')
digitalWrite(10, HIGH);  //If value is 1 then LED turns ON
else if(data == 'd')       //Checks whether value of data is equal to 0
digitalWrite(10, LOW);   //If value is 0 then LED turns OFF
else if (data == 'g')
digitalWrite(11, HIGH);  //If value is 1 then LED turns ON
else if(data == 'h')       //Checks whether value of data is equal to 0
digitalWrite(11, LOW);   //If value is 0 then LED turns OFF
}                            

}
