
uint FUN_0215e6a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0205889c();
  if (uVar1 == 0) {
    FUN_02055684();
  }
  else if (uVar1 == 0x8000) {
    FUN_02055684();
  }
  else {
    uVar3 = param_1 + 1;
    uVar2 = param_1;
    while (param_1 = uVar3, (1 << (uVar2 & 0xff) & uVar1) == 0) {
      uVar3 = param_1 + 1;
      if (0x10 < (int)uVar3) {
        uVar3 = 1;
      }
      uVar2 = uVar3 - 1;
    }
  }
  return param_1 & 0xffff;
}

