
undefined4 FUN_021571e0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  param_2 = param_2 * 4;
  iVar3 = *(int *)(*(int *)(param_1 + 0x2b8) + param_2);
  if (iVar3 == 1) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x2b4) + param_2);
    uVar1 = 1;
    if ((*(uint *)(&DAT_020b0cb0 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) == 0) {
      return 0;
    }
  }
  else if (iVar3 == 7) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x2b4) + param_2);
    uVar1 = 1;
    if ((*(uint *)(&DAT_020b0cc4 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) == 0) {
      return 0;
    }
  }
  else if (iVar3 == 8) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x2b4) + param_2);
    uVar1 = 1;
    if ((*(uint *)(&DAT_020b0cd0 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

