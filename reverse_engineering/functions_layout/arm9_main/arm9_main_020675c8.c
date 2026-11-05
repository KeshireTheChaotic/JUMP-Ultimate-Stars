
undefined4 FUN_020675c8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02067394();
  if (uVar1 < 2) {
    return 0;
  }
  if (uVar1 < 7) {
    return 1;
  }
  if (uVar1 == 9) {
    return 4;
  }
  if (uVar1 < 10) {
    return 2;
  }
  if (uVar1 == 0xb) {
    return 4;
  }
  if (uVar1 < 0x10) {
    return 3;
  }
  if (uVar1 == 0x10) {
    return 5;
  }
  if (uVar1 == 0x11) {
    return 4;
  }
  uVar2 = FUN_020682fc();
  return uVar2;
}

