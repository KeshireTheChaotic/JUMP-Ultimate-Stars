
undefined4 FUN_0214d9fc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_1 + 8));
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 6) == 'p') {
    FUN_0214cf10(param_2,param_1 + 0xc);
    return 0;
  }
  return 0xffffffff;
}

