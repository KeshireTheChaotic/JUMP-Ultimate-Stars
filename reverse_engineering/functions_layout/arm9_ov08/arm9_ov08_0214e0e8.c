
int FUN_0214e0e8(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  iVar1 = FUN_0214dd70(param_4,param_2 + 0x1c);
  if (iVar1 < 0) {
    *param_3 = *param_3 + 1;
    return 0;
  }
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0x26));
  if (iVar1 == 0) {
    *param_3 = *param_3 + 1;
    return 0;
  }
  if (*(char *)(param_2 + 0x24) == '\a') {
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
  if (*(char *)(param_2 + 0x24) != '\x01') {
    *param_3 = *param_3 + 1;
    return 0;
  }
  iVar1 = FUN_0214dc98(param_2 + 0x28,&DAT_0216c26c);
  if (-1 < iVar1) {
    FUN_0214cdc4(*(undefined2 *)(param_2 + 0x18));
    DAT_0216c1c0 = FUN_0214d8c8();
    *param_3 = 0;
    return 1;
  }
  if (iVar1 == -2) {
    FUN_0214e638(0x16);
    return -1;
  }
  *param_3 = *param_3 + 1;
  return 0;
}

