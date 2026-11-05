
void FUN_02073c74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x8e8) = param_2;
  *(undefined4 *)(iVar1 + 0x8ec) = param_3;
  *(undefined4 *)(iVar1 + 0x8f0) = 1;
  *(undefined1 *)(iVar1 + 0x902) = 1;
  return;
}

