
void FUN_02071514(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1 >> 5) * 4;
  uVar1 = 1 << (param_1 & 0x1f);
  if ((*(uint *)(&DAT_020b0cec + iVar2) & uVar1) == 0) {
    *(uint *)(&DAT_020b0cec + iVar2) = uVar1 | *(uint *)(&DAT_020b0cec + iVar2);
    DAT_020b02ac = 1;
    FUN_02073114(iVar2 + 0xa34,4);
  }
  return;
}

