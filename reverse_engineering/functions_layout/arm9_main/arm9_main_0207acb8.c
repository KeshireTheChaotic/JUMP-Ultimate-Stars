
int FUN_0207acb8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_02037c24(param_1,iVar1);
  FUN_02037b98(*(int *)(param_2 + 0x20) + 0x10,iVar1);
  *(int *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined1 *)(iVar1 + 0x13) = 1;
  return iVar1;
}

