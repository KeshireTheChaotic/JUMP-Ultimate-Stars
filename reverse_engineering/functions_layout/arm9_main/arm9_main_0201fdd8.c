
undefined1 FUN_0201fdd8(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  uVar2 = (**(code **)(*param_1 + 0xd0))();
  iVar3 = FUN_02020590(uVar2,*(undefined2 *)((int)param_1 + 0x2a));
  if (*(byte *)(iVar1 + 4) < 2) {
    return *(undefined1 *)(iVar3 + (uint)*(ushort *)(iVar3 + param_2 * 2 + 0x28));
  }
  iVar1 = 0;
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    iVar1 = iVar1 + (uint)*(ushort *)(iVar3 + uVar4 * 2 + 0x28);
  }
  return *(undefined1 *)(iVar3 + iVar1 + (uint)*(ushort *)(iVar3 + param_2 * 2 + 0x28));
}

