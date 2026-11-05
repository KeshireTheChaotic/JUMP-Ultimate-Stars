
void FUN_02152d9c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (param_2 != 1 && param_2 != 2) {
    return;
  }
  if (*(char *)(iVar1 + 0x439) == '\x04') {
    FUN_02152de8(iVar1,0x31,param_1,param_4,param_4);
    return;
  }
  FUN_02152de8(iVar1,0x30,param_1,param_4,param_4);
  return;
}

