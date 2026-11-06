
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021570e4(void)

{
  GX_VBlankIntr(0);
  GX_SetBankForBG(1);
  GX_SetBankForOBJ(2);
  GX_SetGraphicsMode(1,0,0);
  _DAT_04000000 = _DAT_04000000 & 0xffff00ff;
  FUN_02064e00(&DAT_0400006c,0);
  _DAT_04000000 = _DAT_04000000 & 0xffcfffef | 0x200010;
  _DAT_04000008 = _DAT_04000008 & 0xffbf;
  _DAT_0400000a = _DAT_0400000a & 0xffbf;
  _DAT_0400000c = _DAT_0400000c & 0xffbf;
  _DAT_0400000e = _DAT_0400000e & 0xffbf;
  _DAT_04000010 = 0;
  _DAT_04000014 = 0;
  _DAT_04000018 = 0;
  _DAT_0400001c = 0;
  FUN_0206602c(&DAT_04000050,0x3f,0x10);
  GX_SetBankForSubBG(0x80);
  GX_SetBankForSubOBJ(0x100);
  GXS_SetGraphicsMode(0);
  _DAT_04001000 = _DAT_04001000 & 0xffff00ff;
  FUN_02064e00(0x400106c,0);
  _DAT_04001000 = _DAT_04001000 & 0xffcfffef | 0x10;
  _DAT_04001008 = _DAT_04001008 & 0xffbf;
  _DAT_0400100a = _DAT_0400100a & 0xffbf;
  _DAT_0400100c = _DAT_0400100c & 0xffbf;
  _DAT_0400100e = _DAT_0400100e & 0xffbf;
  _DAT_04001010 = 0;
  _DAT_04001014 = 0;
  _DAT_04001018 = 0;
  _DAT_0400101c = 0;
  FUN_0206602c(&DAT_04001050,0x3f);
  _DAT_04000008 = _DAT_04000008 & 0x43 | 0xc00;
  _DAT_0400000a = _DAT_0400000a & 0x43 | 0xd08;
  _DAT_0400000c = _DAT_0400000c & 0x43 | 0xe10;
  _DAT_0400000e = _DAT_0400000e & 0x43 | 0xf10;
  _DAT_04001008 = _DAT_04001008 & 0x43 | 0xc00;
  _DAT_0400100a = _DAT_0400100a & 0x43 | 0xd00;
  _DAT_0400100c = _DAT_0400100c & 0x43 | 0xe00;
  _DAT_0400100e = _DAT_0400100e & 0x43 | 0xf00;
  _DAT_04000000 = _DAT_04000000 & 0xc0ffffff;
  _DAT_04000304 = _DAT_04000304 & 0x7fff;
  FUN_021667f0();
  FUN_021672d4();
  FUN_02167498();
  FUN_02165f20();
  GX_DispOn();
  _DAT_04001000 = _DAT_04001000 | 0x10000;
  GX_VBlankIntr(1);
  return;
}

