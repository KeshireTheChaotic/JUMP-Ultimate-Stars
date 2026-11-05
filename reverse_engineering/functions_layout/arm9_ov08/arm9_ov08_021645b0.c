
undefined2 FUN_021645b0(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = FUN_0205889c();
  if (uVar2 == 0x8000) {
    FUN_02164ca4(3);
    FUN_02164cb8(9);
    return 3;
  }
  if (uVar2 == 0) {
    FUN_02164ca4(0x16);
    FUN_02164cb8(9);
    return 0x18;
  }
  do {
    if ((1 << (param_1 - 1 & 0xff) & uVar2) != 0) {
      uVar1 = FUN_021644fc(0x2164515,param_1);
      return uVar1;
    }
    param_1 = param_1 + 1 & 0xffff;
  } while (param_1 < 0x11);
  return 0x18;
}

