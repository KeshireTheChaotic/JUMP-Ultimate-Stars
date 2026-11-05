
byte FUN_021bfbf0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (*(short *)(DAT_021d5258 + 0x12) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 2;
  }
  if (*(short *)(DAT_021d5258 + 0x14) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 4;
  }
  if (*(short *)(DAT_021d5258 + 0x16) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = 8;
  }
  return bVar1 | bVar3 | *(short *)(DAT_021d5258 + 0xe) != 0 | bVar2;
}

