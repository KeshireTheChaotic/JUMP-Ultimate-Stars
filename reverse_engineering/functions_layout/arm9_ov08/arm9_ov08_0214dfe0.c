
int FUN_0214dfe0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 1) {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  iVar1 = FUN_0214dd70(param_4 + 8,param_2 + 0x1c);
  if (iVar1 < 0) {
    *param_3 = *param_3 + 1;
    return 1;
  }
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0x26));
  if (iVar1 == 0) {
    *param_3 = *param_3 + 1;
    return 1;
  }
  if (*(char *)(param_2 + 0x24) != '\a') {
    FUN_0214cf04(&DAT_0216c8ec,0,0x6a0);
    uVar2 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0x16));
    iVar1 = FUN_0214d8d8(0,(char *)(param_2 + 0x24),uVar2,&DAT_0216c8ec,&DAT_0216c26c);
    if (iVar1 < 0) {
      *param_3 = *param_3 + 1;
      return 1;
    }
    if ((DAT_0216c1f8 & DAT_0216c1f4) == 0) {
      return 1;
    }
    *param_3 = 0;
    return 2;
  }
  iVar1 = FUN_0214cddc(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == -2) {
    FUN_0214e638(0x14);
  }
  else {
    iVar1 = FUN_0214cddc(*(undefined4 *)(param_2 + 0x28));
    if (iVar1 == -3) {
      FUN_0214e638(0x15);
    }
    else {
      FUN_0214e638(0x18);
    }
  }
  return -1;
}

