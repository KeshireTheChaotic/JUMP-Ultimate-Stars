
void FUN_02150e70(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + param_3 * 8;
  if (*(uint *)(param_1 + 0x10) < param_3 * 8) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = -uVar1 + 0x40;
  if (param_3 < uVar2) {
    uVar3 = 0;
  }
  else {
    FUN_0215053c(param_1 + 0x18 + uVar1,param_2,uVar2);
    FUN_021505b8(param_1,param_1 + 0x18);
    uVar1 = -uVar1;
    while (uVar3 = uVar2, uVar1 + 0x7f < param_3) {
      FUN_021505b8(param_1,param_2 + uVar3);
      uVar2 = uVar3 + 0x40;
      uVar1 = uVar3;
    }
    uVar1 = 0;
  }
  FUN_0215053c(param_1 + 0x18 + uVar1,param_2 + uVar3,param_3 - uVar3);
  return;
}

