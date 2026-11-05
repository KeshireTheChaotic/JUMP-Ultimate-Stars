
undefined4 FUN_0201b564(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar1 = iVar1 + -4;
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

