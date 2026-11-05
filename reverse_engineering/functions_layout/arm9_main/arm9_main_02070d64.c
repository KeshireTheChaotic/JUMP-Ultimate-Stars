
void FUN_02070d64(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_r3;
  int iVar3;
  
  FUN_020517fc(&DAT_020b02b8,0,0x7558,in_r3,in_r3);
  FUN_02073114(0,0x7558);
  iVar3 = 0;
  do {
    FUN_02078aa0(&DAT_020b0dbc + iVar3 * 0x5c);
    FUN_02078b08(&DAT_020b0dbc + iVar3 * 0x5c,&DAT_02092454);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  iVar3 = 0;
  do {
    uVar1 = FUN_02072070(iVar3);
    FUN_02078aa0();
    FUN_02078b08(uVar1,&DAT_02092454);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  FUN_0207265c(&DAT_020b0d70,0x2f,0);
  FUN_02071e24(0);
  FUN_02071ea8(0x7f);
  FUN_02071ed8(0x7f);
  FUN_02071240(0);
  FUN_020712c8(0xd);
  FUN_020718fc(0);
  DAT_020b02ac = 0;
  uVar2 = FUN_02051fa0();
  if (uVar2 != 0xfffffffd) {
    FUN_02061d9c(uVar2 & 0xffff);
    FUN_02062260(0x1001);
    FUN_02061d90(uVar2 & 0xffff);
    FUN_02051ff8(uVar2 & 0xffff);
  }
  return;
}

