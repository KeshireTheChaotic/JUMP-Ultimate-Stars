
void FUN_020718fc(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1 >> 5) * 4;
  uVar1 = 1 << (param_1 & 0x1f);
  if ((*(uint *)(&DAT_020b0ca4 + iVar2) & uVar1) == 0) {
    *(uint *)(&DAT_020b0ca4 + iVar2) = *(uint *)(&DAT_020b0ca4 + iVar2) | uVar1;
    *(uint *)(&DAT_020b0cb0 + iVar2) = uVar1 | *(uint *)(&DAT_020b0cb0 + iVar2);
    DAT_020b02ac = 1;
    FUN_02073114(iVar2 + 0x9ec,4);
    FUN_02073114(iVar2 + 0x9f8,4);
  }
  return;
}

