A very simple Design to build a osu! DIY Keypad using Arduino Leonardo/Uno etc.

Requirements:
- Breadboard
- Keyboard Switches (I use the Gateron Mountain-Top Linear Switches)
- Jumper Wires
- Arduino with HID Device support (I use Arduino Leonardo and it works fine for me)

(I connected jumper wires to the Keyboard switches because the Switches are not gonna suit to the Breadboard. I glued it afterwards with hot glue, if you got a 3D Printer you can print your own case)

Building:

<img width="1260" height="718" alt="grafik" src="https://github.com/user-attachments/assets/ae85736d-d605-4e58-a254-95c3bd877b52" /># simple-osu-keypad


Wire the cables just like on the Picture
Paste the Code in Arduino IDE, and Upload it to your Arduino and the magic happened.

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
