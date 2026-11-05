
void FUN_03805b50(int param_1)

{
  if (param_1 == 1) {
    FUN_038059e4(0x10);
  }
  else if (param_1 == 2) {
    FUN_038059e4(0x20);
    FUN_03805a10(0x10);
  }
  else if (param_1 == 3) {
    FUN_03805a10(0x30);
  }
  else {
    FUN_037fe538();
  }
  DAT_038081ac = param_1;
  return;
}

