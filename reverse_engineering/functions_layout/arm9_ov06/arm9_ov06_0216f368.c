
void FUN_0216f368(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x100;
  return;
}

