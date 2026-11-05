
undefined4 FUN_02077508(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 * 0x14 + param_1 + param_2 * 4 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x40) != '\x02') {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  *(byte *)(iVar1 + 0xf) = *(byte *)(iVar1 + 0xf) & 0xf0 | *(byte *)(iRam02077580 + param_4);
  FUN_02077610(param_1);
  FUN_020772e4(param_1);
  FUN_02077768(param_1);
  return 1;
}

