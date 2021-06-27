# Mr-Big

## About this project

Back at my home during my summer vacations, everyone in the house asked me to bring their stuffs from the other rooms. It was ok if the stuff was small or limited in number but most of the time it wasn't. So I thought of designing a mobile unit that I could operate via my phone and let it do the heavy lifting.

I had my writing table at my home and also I arranged some plywood which used for the external framework. The whole structure itself weigh about 3-4kgs but you can use something lighter for the external structure if you want.

Both motors used have a torque of 3 kg-cm. You can use a more powerful motor if u want if you have a motor driver for it.

I have used a L298N motor driver for these project. I know it can operate only for 3Amps current and both the motor will use more than that limit, but the fact is it can whit stand up to 5Amps because manufacturers show less value than actual. And worst case scenario in these case would be thermal shutdown above 100 degree C.

I have used Blynk app for the purpose of controlling my robot. The sketch for the same is given below. The robot as you know is controlled via Bluetooth. You will get the necessary information on the official website of Blynk you need. I have decided to controlled both the motor speed separately but if you want you can control the speed through one controller only. I have also added a button for forced left in the virtual pins 3 and 4. In the case if robot got stuck somewhere and it is needed to change its direction immediately this commands can be used. But these command puts a lot of pressure on the motor drive so better to save it for emergency only. I have also used an LED button, it is a simple button to know whether your Bluetooth is connected to your mobile device or not. Just click that button, and if the light near 13th pin of Arduino Uno blinks accordingly, then voila your mobile is connected via HC-05.

## Schematics for this Project

![Screenshot 2021-06-27 at 03 23 04](https://user-images.githubusercontent.com/50763982/123530970-4868e700-d6f8-11eb-9ef5-18728c27e746.png)

## Controller for this project should look something like this

![Screenshot 2021-06-27 at 04 48 52](https://user-images.githubusercontent.com/50763982/123532186-0ee9a900-d703-11eb-9924-04abc827b828.png)
![Screenshot 2021-06-27 at 04 49 10](https://user-images.githubusercontent.com/50763982/123532188-0f823f80-d703-11eb-8aab-c6d35719a7a9.png)

## The final project looks like this

![IMG-20190104-WA0002](https://user-images.githubusercontent.com/50763982/123532155-b1555c80-d702-11eb-98da-7a1f925f72fd.jpeg)

https://user-images.githubusercontent.com/50763982/123532162-cdf19480-d702-11eb-9f3d-25734fa82c5a.mp4

