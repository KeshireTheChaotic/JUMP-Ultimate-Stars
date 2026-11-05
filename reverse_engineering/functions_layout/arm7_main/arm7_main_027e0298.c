
undefined4 FUN_027e0298(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    return 0;
  }
  if (param_1 < 0xe) {
    return 1;
  }
  if (param_1 < 0x14) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

