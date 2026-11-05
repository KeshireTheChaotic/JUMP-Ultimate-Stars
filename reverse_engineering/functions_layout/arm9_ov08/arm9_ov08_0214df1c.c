
int FUN_0214df1c(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 2) {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  iVar1 = FUN_0214dd70(param_4 + 0x10,param_2 + 0x1c);
  if (iVar1 < 0) {
    *param_3 = *param_3 + 1;
    return 2;
  }
  if (*(char *)(param_2 + 0x24) != '\a') {
    *param_3 = *param_3 + 1;
    return 2;
  }
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0x26));
  if (iVar1 == 0) {
    *param_3 = *param_3 + 1;
    return 2;
  }
  iVar1 = FUN_0214cddc(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == 0) {
    return 100;
  }
  iVar1 = FUN_0214cddc(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == -2) {
    FUN_0214e638(0x14);
    return -1;
  }
  iVar1 = FUN_0214cddc(*(undefined4 *)(param_2 + 0x28));
  if (iVar1 == -3) {
    FUN_0214e638(0x15);
    return -1;
  }
  FUN_0214e638(0x18);
  return -1;
}

