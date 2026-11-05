
void FUN_0201dfbc(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = *(short *)(param_1 + 0x14) == 0;
  uVar1 = param_2;
  if (bVar2) {
    uVar1 = (uint)*(ushort *)(param_2 + 0x14);
  }
  if (bVar2 && uVar1 == 1) {
    FUN_0201d544(param_1,*(undefined4 *)(param_2 + 0xc));
    return;
  }
  for (uVar1 = 0; uVar1 < *(ushort *)(param_2 + 0x14); uVar1 = uVar1 + 1) {
    FUN_0201d1a0(param_1,uVar1 * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc));
  }
  return;
}

