
void FUN_0208b568(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  
  uVar2 = 1;
  do {
    iVar1 = FUN_0208c14c(uVar2);
    if (iVar1 != -1) {
      iVar1 = FUN_02070cdc(uVar2);
      FUN_0208a1e0(uVar2 << 8 | 0xf,iVar1,0xc,0xffff,in_r3);
      FUN_0208a1e0(uVar2 << 8 | 0x10,iVar1 + 0xc,8,0xffff);
    }
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

