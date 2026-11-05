
void FUN_02154720(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar1 + 0x40) = 1;
  *(undefined1 *)(iVar1 + 0x41) = 1;
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4));
  FUN_02154ac4(iVar1);
  return;
}

