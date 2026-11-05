
undefined4 FUN_0205b40c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0205e0f0(&DAT_020ada94 + param_1 * 0x24,0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0205e108(&DAT_020ada94 + param_1 * 0x24,iVar1);
  *(int *)(iVar1 + 0xc) = param_2;
  *(int *)(param_2 + 8) = iVar1;
  FUN_0205ccac(*(undefined4 *)(iVar1 + 8));
  return *(undefined4 *)(iVar1 + 8);
}

