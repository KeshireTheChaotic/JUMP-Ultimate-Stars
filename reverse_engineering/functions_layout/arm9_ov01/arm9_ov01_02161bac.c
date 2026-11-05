
void FUN_02161bac(uint param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  bool bVar3;
  
  bVar3 = param_1 == 1;
  if (bVar3) {
    param_1 = (uint)*(byte *)(param_2 + 0x70);
  }
  if (bVar3 && param_1 == 0) {
    return;
  }
  uVar1 = *(undefined1 *)(unaff_r4 + 0xad);
  uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar2,uVar1);
  (**(code **)(**(int **)(*(int *)(unaff_r4 + 0x74) + 4) + 0x198))();
  func_0x021b6214(*(undefined4 *)(*(int *)(unaff_r4 + 0x74) + 4),1);
  func_0x021b65cc();
  return;
}

