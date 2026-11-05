
void FUN_02071360(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02070fb4();
  if (iVar1 == 0) {
    uVar2 = 1 << (param_1 & 0x1f);
    iVar1 = (param_1 >> 5) * 4;
    *(uint *)(&DAT_020b0bac + iVar1) = *(uint *)(&DAT_020b0bac + iVar1) | uVar2;
    *(uint *)(&DAT_020b0c20 + iVar1) = uVar2 | *(uint *)(&DAT_020b0c20 + iVar1);
    DAT_020b02ac = 1;
    FUN_02073114(iVar1 + 0x8f4,4);
    FUN_02073114(iVar1 + 0x968,4);
  }
  return;
}

