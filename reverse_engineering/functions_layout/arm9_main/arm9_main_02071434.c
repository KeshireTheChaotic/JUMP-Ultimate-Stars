
void FUN_02071434(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_020714b4();
  if (iVar1 == 0) {
    uVar2 = 1 << (param_1 & 0x1f);
    iVar1 = (param_1 >> 5) * 4;
    *(uint *)(&DAT_020b0cdc + iVar1) = *(uint *)(&DAT_020b0cdc + iVar1) | uVar2;
    *(uint *)(&DAT_020b0ce4 + iVar1) = uVar2 | *(uint *)(&DAT_020b0ce4 + iVar1);
    DAT_020b02ac = 1;
    FUN_02073114(iVar1 + 0xa24,4);
    FUN_02073114(iVar1 + 0xa2c,4);
    if ((DAT_020b0b90 & 0x800) == 0) {
      FUN_0207120c(0x800,1);
    }
  }
  return;
}

