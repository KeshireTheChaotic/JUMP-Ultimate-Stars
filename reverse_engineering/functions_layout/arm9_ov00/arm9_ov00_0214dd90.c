
void FUN_0214dd90(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x56) & 2) == 0) {
    FUN_02073ebc(3,1);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  *(byte *)(iVar1 + 0xe4) = *(byte *)(iVar1 + 0xe4) | 8;
  *(undefined1 *)(iVar1 + 0xe5) = 0;
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_0214db84);
  iVar1 = *(int *)(param_1 + 0x44);
  *(undefined1 **)(iVar1 + 0xd4) = &LAB_0214de00;
  *(int *)(iVar1 + 0xdc) = param_1;
  return;
}

