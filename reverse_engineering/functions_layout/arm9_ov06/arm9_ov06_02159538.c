
undefined4 FUN_02159538(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0215986c(param_1,param_2,0x1c,param_4,param_4);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    *(undefined1 *)(param_2 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return 1;
}

