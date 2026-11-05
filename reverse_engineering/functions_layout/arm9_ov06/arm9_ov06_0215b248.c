
void FUN_0215b248(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x1e9);
  *(byte *)(param_1 + 0x1e9) = bVar1 + 1;
  if (bVar1 < 5) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
    *(undefined1 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0xffffffff;
    return;
  }
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_0215b348(param_1,0x23000c);
  FUN_0215b2b0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x11);
  return;
}

