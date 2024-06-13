
//size of keypad
const byte ROWS = 4;
const byte COLS = 4;

//Array to represent keys on keypad
char hexaKeys[ROWS][COLS] = 
{
  { '1', '2', '3', 'A'},
  { '4', '5', '6', 'B'},
  { '7', '8', '9', 'C'},
  {'*', '0', '#', 'D' }
};

// connection to esp32
byte rowPins[ROWS] = {23, 22, 21, 19};
byte colPins[COLS] = {5, 4, 12, 15};

// Create keypad boject 
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
