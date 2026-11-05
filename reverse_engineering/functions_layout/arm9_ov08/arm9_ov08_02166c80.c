
undefined4 FUN_02166c80(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0216e854;
  if ((*(byte *)(DAT_0216e854 + 0x38) & 1) == 0) {
    *param_1 = *(undefined2 *)(DAT_0216e854 + 0x2c);
    param_1[1] = *(undefined2 *)(iVar1 + 0x2e);
    return 0;
  }
  *param_1 = *(undefined2 *)(DAT_0216e854 + 0x28);
  param_1[1] = *(undefined2 *)(iVar1 + 0x2a);
  return 1;
}

