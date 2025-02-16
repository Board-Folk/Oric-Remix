
typedef struct {
  uint16_t noshift_1[Oric_KEYMAP_SIZE];
  uint16_t shift_1[Oric_KEYMAP_SIZE];
  uint16_t noshift_2[Oric_KEYMAP_SIZE];
  uint16_t shift_2[Oric_KEYMAP_SIZE];
} OricKeymap_t;

/* Maps are positional in relation to keyboard ASCII codes.

Each map has a normal (without shift) and shifted (with shift) array.

In situations where there is a shift difference, add 160 to the Oric key byte. 
This is when a key is shifted on keyboard, but not shifted on the Oric or vise-versa.

Unused ASCII codes need to have the IGNORE_KEYCODE value in place.(Default 340)

*/

const PROGMEM OricKeymap_t OricKeymap_main = {
  // map 1 without shift
   {340,340,340,340,340,340, 73, 79,// ASCII Codes 0x00 - 0x07
     74, 74,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,105, 33,113,// ASCII Codes 0x10 - 0x17
      1,340,340,108,109, 77,111, 65,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     87,104,  2, 32,114, 80, 98, 64,// ASCII Codes 0x30 - 0x37
     71,102, 38, 97,118, 81,340,340,// ASCII Codes 0x38 - 0x3F
    340,107, 82, 34, 36,115,116, 83,// ASCII Codes 0x40 - 0x47
     99,101, 68, 70,103, 66, 96, 85,// ASCII Codes 0x48 - 0x4F
    117,  4, 84,  3,100, 69,112, 35,// ASCII Codes 0x50 - 0x57
      0, 67,106, 86,340, 37,  5, 39,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  6,340,340,340,340},// ASCII Codes 0x88 - 0x8F
    
  // map 1 with shift
   {340,340,340,340,340,340, 73, 79,// ASCII Codes 0x00 - 0x07
     74, 74,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,105, 33,113,// ASCII Codes 0x10 - 0x17
      1,340,340,108,109, 77,111, 65,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     87,104,  2, 32,114, 80, 98, 64,// ASCII Codes 0x30 - 0x37
     71,102, 38, 97,118, 81,340,340,// ASCII Codes 0x38 - 0x3F
    340,107, 82, 34, 36,115,116, 83,// ASCII Codes 0x40 - 0x47
     99,101, 68, 70,103, 66, 96, 85,// ASCII Codes 0x48 - 0x4F
    117,  4, 84,  3,100, 69,112, 35,// ASCII Codes 0x50 - 0x57
      0, 67,106, 86,340, 37,  5, 39,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  6,340,340,340,340},// ASCII Codes 0x88 - 0x8F
 
  // map 2 without shift
   {340,340,340,340,340,340, 73, 79,// ASCII Codes 0x00 - 0x07
     74, 74,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,105, 33,113,// ASCII Codes 0x10 - 0x17
      1,340,340,108,109, 77,111, 65,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     87,104,  2, 32,114, 80, 98, 64,// ASCII Codes 0x30 - 0x37
     71,102, 38, 97,118, 81,340,340,// ASCII Codes 0x38 - 0x3F
    340,107, 82, 34, 36,115,116, 83,// ASCII Codes 0x40 - 0x47
     99,101, 68, 70,103, 66, 96, 85,// ASCII Codes 0x48 - 0x4F
    117,  4, 84,  3,100, 69,112, 35,// ASCII Codes 0x50 - 0x57
      0, 67,106, 86,340, 37,  5, 39,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  6,340,340,340,340},// ASCII Codes 0x88 - 0x8F
    
  // map 2 with shift
   {340,340,340,340,340,340, 73, 79,// ASCII Codes 0x00 - 0x07
     74, 74,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,105, 33,113,// ASCII Codes 0x10 - 0x17
      1,340,340,108,109, 77,111, 65,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
     87,104,  2, 32,114, 80, 98, 64,// ASCII Codes 0x30 - 0x37
     71,102, 38, 97,118, 81,340,340,// ASCII Codes 0x38 - 0x3F
    340,107, 82, 34, 36,115,116, 83,// ASCII Codes 0x40 - 0x47
     99,101, 68, 70,103, 66, 96, 85,// ASCII Codes 0x48 - 0x4F
    117,  4, 84,  3,100, 69,112, 35,// ASCII Codes 0x50 - 0x57
      0, 67,106, 86,340, 37,  5, 39,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,  6,340,340,340,340},// ASCII Codes 0x88 - 0x8F

};
