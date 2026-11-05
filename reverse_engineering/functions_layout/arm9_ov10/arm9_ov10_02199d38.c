
undefined4 FUN_02199d38(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02199d60();
  uVar2 = 0;
  if (uVar1 < 0x1c) {
    if (uVar1 < 0x16) {
      if (0xf < uVar1) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

