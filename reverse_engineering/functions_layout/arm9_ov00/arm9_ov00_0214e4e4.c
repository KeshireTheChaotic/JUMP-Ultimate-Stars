
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e4e4(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0214e2a4(*(undefined4 *)(param_1 + 8));
  if ((iVar1 == 0xc300) &&
     (uVar2 = FUN_0214db5c(*(undefined4 *)(param_1 + 8)), (uVar2 & 0xc300) != 0)) {
    FUN_0206dcec(0);
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x51);
  bVar3 = uVar2 == 0;
  if (bVar3) {
    uVar2 = (int)(_DAT_027fffa8 & 0x8000) >> 0xf;
  }
  if (bVar3 && uVar2 == 1) {
    FUN_0214da24(*(undefined4 *)(param_1 + 0x44));
    FUN_0214dd90(param_1);
    FUN_020616a8(0xc,0,0);
    return;
  }
  return;
}

