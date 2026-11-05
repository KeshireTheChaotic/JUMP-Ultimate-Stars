
void FUN_0205c2c0(void)

{
  int iVar1;
  
  if (DAT_020adffc == 0) {
    return;
  }
  if (DAT_020ae000 != 0) {
    return;
  }
  FUN_0205e044(0x20ae038);
  if ((iRam020ae048 != 0) && (iVar1 = FUN_0205e02c(0x20ae038), iVar1 != 0)) {
    FUN_0205c1cc();
    return;
  }
  iVar1 = FUN_0205e05c(0x20ae038);
  iVar1 = iVar1 >> 8;
  if (iVar1 == iRam020ae04c) {
    return;
  }
  FUN_020567e8(DAT_020ae020,iVar1,0);
  iRam020ae04c = iVar1;
  return;
}

