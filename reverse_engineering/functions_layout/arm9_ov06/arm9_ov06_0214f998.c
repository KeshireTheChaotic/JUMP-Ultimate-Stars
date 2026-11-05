
undefined4 FUN_0214f998(int param_1)

{
  int iVar1;
  int extraout_r1;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0xcc) != '\0') && (*(int *)(param_1 + 0x10) == 0x5a0)) {
    FUN_0207342c(0x7a,3);
  }
  if ((*(int *)(param_1 + 0x10) < 0x2d1) &&
     (FUN_0200d12c(*(int *)(param_1 + 0x10),0x90), extraout_r1 == 0)) {
    FUN_0207342c(0x7a,4);
  }
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 0x90) {
    FUN_0207342c(0x7a,6);
    return 1;
  }
  return 0;
}

