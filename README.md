OVERVIEW :
-
A compact 9-key macropad with a rotary encoder, built using a custom PCB and QMK firmware. It features three modes—Study, Creative, and Focus—each mapped to practical shortcuts for productivity, media control, and navigation, enabling efficient workflow switching.

How to use :
-
- Plug the macropad into your computer or a power source
- Select a mode using the top row keys  
- Use the remaining keys for the shortcuts
- Rotate the encoder to control volume level

 Why I made this :
 -
 - The functions of this macropad can help me in my daily life.
 - To reduce repetitive keyboard shortcuts
 - To reduce repetitive keyboard shortcuts

FEATURES :
-
- EC11 Rotary encoder for controlling volume
- 9 Keys

CAD DESIGN :
-
- The case uses 2 parts the bottom and upper half
- The 2 parts can be joined by using 4 M3 screws
- The PCB sits on the bottom half and is coverd by the upperhalf
  
 <img width="1918" height="910" alt="image" src="https://github.com/user-attachments/assets/f94bf489-b1a4-4b08-86fa-542f5fb2919d" />
fully assembled

<img width="1918" height="934" alt="image" src="https://github.com/user-attachments/assets/38dfe17f-bdb8-4fae-9712-1c3d0d70340b" />
Part Stuidio

 - The Design was made in OnShape
 - Design Link :
   https://cad.onshape.com/documents/a280f0894019be8d3362bd64/w/67d5e1344d4c93c18eda979f/e/d96660c4f28b5cc322d90e8b?renderMode=0&uiState=69c8c5cffc6171d5b9f8606e

PCB :
-
- The PCB was made in KiCad


<img width="1075" height="577" alt="image" src="https://github.com/user-attachments/assets/ee0b444f-508b-4023-864a-94cc0b47255a" />
Schematic

<img width="1919" height="1018" alt="image" src="https://github.com/user-attachments/assets/77675109-3248-4306-8045-3bb60a268f4c" />
PCB

<img width="1301" height="726" alt="image" src="https://github.com/user-attachments/assets/f474c10d-ddd0-4c1d-980d-f8cdd443c951" />
3D View OF PCB

FIRMWARE OVERVIEW :
-
This macropad uses QMK firmware for everything.

The 9 keys are split into 3 modes: Study, Creative, and Focus.
The top row is used to switch between modes.

Each mode changes what the remaining 6 keys do:
- Study mode is for basic shortcuts like copy, paste, undo, redo, and save
- Creative mode is for zoom, media control, brightness, and mute
- Focus mode is for volume control and simple navigation

The rotary encoder is used for volume control.


BOM :
-
EVERYTHING required to make this Hackpad:

- 1x XIAO RP2040
- 9x Cherry MX Switches
- 9x DSA Keycaps
- 4x M3x16mm SHCS Bolts
- 9x 1N4148 DO-35 Diodes.
- 1x Case (2 printed parts)
- 1x EC11 Rotary Encoder with switch







 
