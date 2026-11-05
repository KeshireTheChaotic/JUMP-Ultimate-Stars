
void FUN_02014dc4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  
  local_10 = param_4;
  FUN_02011990(&local_10,param_1);
  if (local_10 == *param_2) {
    return;
  }
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) && ((*(byte *)(param_1 + 0x11) & 1) != 0)) {
    FUN_0201cdb4(*(int *)(param_1 + 0x34) + 0x8c,param_1);
    *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
    FUN_0201cca0(*(int *)(param_1 + 0x34) + 0x8c,param_1);
    iVar3 = 1;
    bVar1 = false;
    if ((0xb8fff < *param_2) && (*param_2 < 0xbf001)) {
      bVar1 = true;
    }
    if ((!bVar1) && ((*(byte *)(param_1 + 0x11) & 0x1f) >> 4 == 0)) {
      iVar3 = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xff7fffff | iVar3 << 0x17;
  }
  else {
    *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
    iVar3 = 1;
    bVar1 = false;
    if ((0xb8fff < *param_2) && (*param_2 < 0xbf001)) {
      bVar1 = true;
    }
    if ((!bVar1) && ((*(byte *)(param_1 + 0x11) & 0x1f) >> 4 == 0)) {
      iVar3 = 0;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xff7fffff | iVar3 << 0x17;
  }
  piVar4 = *(int **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0 || piVar4 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)(**(code **)(*piVar4 + 0xec))();
  if (piVar2 == piVar4) {
    return;
  }
  piVar2 = (int *)(**(code **)(*piVar4 + 0xec))();
  (**(code **)(*piVar2 + 0xe0))(piVar2,piVar4);
  return;
}

