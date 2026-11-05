
void FUN_02167b5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x02199fd8();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*(int *)(iVar2 + 0x40000) + 4) + 0xc))();
  (**(code **)(**(int **)(iVar2 + 0x40004) + 8))();
  func_0x021bab64(*(undefined4 *)(iVar2 + 0x40008));
  FUN_0201b244(iVar2);
  return;
}

