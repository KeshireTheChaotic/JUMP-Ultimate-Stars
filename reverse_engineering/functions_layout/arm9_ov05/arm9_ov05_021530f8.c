
void FUN_021530f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x439) == '\0') {
    FUN_02153af8(iVar1,0xffffffff,param_3,param_4,param_4);
    return;
  }
  return;
}

