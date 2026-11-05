
undefined4 FUN_020773ac(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 * 0x14 + param_1 + param_3 * 4 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x40) == '\x02') {
    return 0;
  }
  if (param_2 == 0) {
    if (*(char *)(iVar1 + 0x40) != '\0') {
      return 0;
    }
  }
  else if (param_2 == 1) {
    if ((*(byte *)(iVar1 + 0xf) & 0x40) != 0) {
      FUN_020774c4(param_1,2);
    }
  }
  else if ((param_2 == 2) && ((*(byte *)(iVar1 + 0xf) & 0x20) != 0)) {
    FUN_020774c4(param_1,1);
  }
  FUN_020774c4(param_1,param_2);
  *(byte *)(iVar1 + 0xf) = *(byte *)(iVar1 + 0xf) | (&DAT_02092e28)[param_2];
  FUN_02077aa8(param_1);
  FUN_02077610(param_1);
  FUN_020772e4(param_1);
  FUN_02077768(param_1);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  return 1;
}

