
void FUN_02166f6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02070cdc(0);
  uVar2 = FUN_02071f08();
  FUN_0207265c(uVar2,*(uint *)(iVar3 + 0x3c) & 0xff,1);
  FUN_0207260c(uVar2,iVar1 + 0x14,1);
  FUN_02167264(iVar3);
  FUN_02167500(iVar3);
  FUN_021673bc(iVar3);
  FUN_02167204(iVar3);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = *(int *)(iVar3 + 0x34) << 0x10 | *(uint *)(iVar3 + 0x18) & 0xffff;
  (**(code **)(**(int **)(*(int *)(iVar3 + 0x1c) + 4) + 0xc))();
  (**(code **)(**(int **)(iVar3 + 0x20) + 8))();
  FUN_0201b244(iVar3);
  return;
}

