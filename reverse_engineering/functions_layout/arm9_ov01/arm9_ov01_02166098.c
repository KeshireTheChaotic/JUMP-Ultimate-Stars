
void FUN_02166098(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21660fd);
    iVar1 = FUN_0203b3e4();
    iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
    *(undefined4 *)(iVar1 + 0x8e8) = 2;
    *(undefined4 *)(iVar1 + 0x8ec) = 0x10;
    *(undefined4 *)(iVar1 + 0x8f0) = 1;
    *(undefined1 *)(iVar1 + 0x902) = 1;
    iVar1 = FUN_0203b3e4();
    iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
    *(undefined4 *)(iVar1 + 0x8c0) = 8;
    *(undefined4 *)(iVar1 + 0x8c4) = 8;
    *(undefined4 *)(iVar1 + 0x8f0) = 1;
    *(undefined1 *)(iVar1 + 0x902) = 1;
  }
  return;
}

