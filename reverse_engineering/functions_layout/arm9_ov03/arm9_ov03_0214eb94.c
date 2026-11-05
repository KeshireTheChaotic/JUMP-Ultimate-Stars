
void FUN_0214eb94(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  *puVar1 = 0x20;
  func_0x021b6214(*(undefined4 *)(*(int *)(puVar1 + 0x20) + 4),0);
  func_0x021b6214(*(undefined4 *)(*(int *)(puVar1 + 0x24) + 4),0);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(puVar1 + 4) + 4),FUN_0214e6ec);
  return;
}

