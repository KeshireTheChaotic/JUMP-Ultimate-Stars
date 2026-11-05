
uint FUN_020584c8(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10 [4];
  int local_c;
  int local_8;
  
  if (DAT_0209dd28 == 0x10000) {
    FUN_02056298();
    iVar1 = FUN_0205611c(auStack_10);
    if (iVar1 == 0) {
      DAT_0209dd28 = local_8 + local_c * 0x100 & 0xffff;
    }
  }
  uVar2 = DAT_0209dd28 + 1;
  DAT_0209dd28 = uVar2 & 0xffff;
  return uVar2 & 0xffff;
}

