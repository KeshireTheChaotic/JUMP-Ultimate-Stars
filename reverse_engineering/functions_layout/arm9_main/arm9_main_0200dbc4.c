
byte FUN_0200dbc4(int param_1)

{
  byte bVar1;
  
  if (*(byte **)(param_1 + 8) == (byte *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = **(byte **)(param_1 + 8) & 0x1f;
  }
  return bVar1;
}

