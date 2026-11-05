
void FUN_0204fdf0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar2 & 0x3f;
  *(uint *)(param_1 + 0x10) = uVar2 + param_3;
  uVar3 = 0x40 - uVar1;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar2,param_3);
  if (param_3 < uVar3) {
    if (param_3 == 0) {
      return;
    }
    FUN_02051890(param_2,param_1 + 0x18 + uVar1);
    return;
  }
  FUN_02051890(param_2,param_1 + 0x18 + uVar1,uVar3);
  FUN_0204f944(param_1);
  uVar1 = param_3 - uVar3 >> 6;
  param_2 = param_2 + uVar3;
  if (uVar1 != 0) {
    do {
      FUN_02051890(param_2,param_1 + 0x18,0x40);
      param_2 = param_2 + 0x40;
      FUN_0204f944(param_1);
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
  }
  if ((param_3 - uVar3 & 0x3f) == 0) {
    return;
  }
  FUN_02051890(param_2,param_1 + 0x18);
  return;
}

