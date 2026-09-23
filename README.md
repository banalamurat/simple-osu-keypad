A very simple beginner-friendly Design to build a osu! DIY Keypad using Arduino Leonardo

Requirements:
- Breadboard
- Keyboard Switches (I use the Gateron Mountain-Top Linear Switches)
- Keycaps (obviously)
- Jumper Wires
- Arduino Leonardo

(I connected jumper wires to the Keyboard switches because the Switches are not gonna suit to the Breadboard. I glued it afterwards with hot glue to stabilize them. I dont own a 3D Printer and didnt do a special case. It works very well for me, if you got a 3D Printer you can print your own case)

Building:

<img width="1260" height="717" alt="grafik" src="https://github.com/user-attachments/assets/571063f4-ecaf-4cc9-8d74-b6ffc94ca8b9" />



Wire the cables just like on the Picture,
paste the Code in Arduino IDE, and upload it to your Arduino and the magic happened.

I use the keys A and S to play the game, you can change it 


Example: changing keybinds
from the key "a" to "z"

change the code from
```cpp
Keyboard.press('a');
      } else {
        Keyboard.release('a');
      }
```
to 

```cpp
Keyboard.press('z');
      } else {
        Keyboard.release('z');
      }
```
