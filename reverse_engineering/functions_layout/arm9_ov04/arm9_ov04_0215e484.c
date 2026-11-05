
void FUN_0215e484(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0215e290(0x14);
  iVar1 = FUN_0214f624();
  uVar2 = 0;
  do {
    FUN_02087214(uVar2 & 0xff | 0x1e00,iVar1,0xc);
    iVar1 = iVar1 + 0xc;
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  (*DAT_020a0e18)();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215e500);
  return;
}

