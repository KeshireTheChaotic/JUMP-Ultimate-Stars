
void FUN_02156f48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x18) == '\x1b') {
    return;
  }
  FUN_0215a978(iVar1,1,param_3,param_4,param_4);
  return;
}

