
undefined4 FUN_02181f14(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x108) == 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x430);
    return 0;
  }
  *param_2 = 0;
  return 0;
}

