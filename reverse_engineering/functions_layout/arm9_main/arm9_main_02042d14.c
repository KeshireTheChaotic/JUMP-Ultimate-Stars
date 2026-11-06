
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_02042d14(void)

{
                    /* JUS-TAG hw={"GX_2D_sub":5,"GX_2D_main":8,"GX_3D":2}
                       io=["04000000","04000004","04000008","0400000a","0400000c","0400000e","04000050","04000060","04000340","04000540","04001000","04001008","0400100a","0400100c","0400100e"]
                        */
  GX_DispOff();
  _DAT_04001000 = _DAT_04001000 & 0xfffeffff;
  OS_SetIrqMask(5);
  FUN_02043090();
  _DAT_04000004 = 8;
  _DAT_04000060 = _DAT_04000060 & 0xcfff | 4;
  _DAT_04000340 = 1;
  GX_DisableBankForBG();
  GX_DisableBankForOBJ();
  GX_DisableBankForBGExtPltt();
  GX_DisableBankForOBJExtPltt();
  GX_DisableBankForTex();
  GX_DisableBankForTexPltt();
  GX_DisableBankForSubBG();
  GX_DisableBankForSubOBJ();
  GX_DisableBankForSubBGExtPltt();
  GX_DisableBankForSubOBJExtPltt();
  FUN_02065490(0x1ff);
  MIi_CpuClearFast(0,0x6800000,0xa4000);
  FUN_02065110();
  MIi_CpuClearFast(0xc0,0x7000000,0x400);
  MIi_CpuClearFast(0,0x5000000,0x400);
  MIi_CpuClearFast(0xc0,0x7000400,0x400);
  MIi_CpuClearFast(0,0x5000400,0x400);
  G3X_Init();
  G3X_InitMtxStack();
  GX_SetBankForTex(10);
  GX_SetBankForOBJ(0x10);
  GX_SetBankForBG(1);
  GX_SetBankForTexPltt(0x20);
  GX_SetBankForBGExtPltt(0x40);
  GX_SetGraphicsMode(1,4,1);
  _DAT_04000000 = _DAT_04000000 & 0xffcfffef | 0x100010;
  GX_SetBankForSubOBJ(0x100);
  GXS_SetGraphicsMode(0);
  _DAT_04001000 = _DAT_04001000 & 0xffcfe0ef | 0x101f10;
  GX_SetBankForSubBG(4);
  GX_SetBankForSubBGExtPltt(0x80);
  _DAT_04000000 = _DAT_04000000 & 0xffffe0ff | 0x1f00;
  _DAT_04000008 = _DAT_04000008 & 0xfffc | 1;
  _DAT_0400000a = _DAT_0400000a & 0xfffc;
  _DAT_0400000c = _DAT_0400000c & 0xfffc | 2;
  _DAT_0400000e = _DAT_0400000e & 0xfffc | 3;
  _DAT_04001008 = _DAT_04001008 & 0xfffc | 3;
  _DAT_0400100a = _DAT_0400100a & 0xfffc | 2;
  _DAT_0400100c = _DAT_0400100c & 0xfffc | 1;
  _DAT_0400100e = _DAT_0400100e & 0xfffc;
  _DAT_04000060 = _DAT_04000060 & 0xcffd | 0x10;
  _DAT_04000050 = 0;
  _DAT_04000540 = 0;
  FUN_0203e0d8(0,0,0,2,1);
  FUN_0203e10c(3,1,4,3);
  FUN_0203e138(2,1,0xc,4);
  FUN_0203ec50(0,0,0,1,0);
  FUN_0203ec84(0,1,1,3,0);
  FUN_0203ecb8(0,1,2,4);
  FUN_0203ece4(0,1,3,5);
  _DAT_04000060 = _DAT_04000060 & 0xcfff | 8;
  FUN_02042ca4();
  G3X_SetClearColor(0,0,0x7fff,0x3f,0);
  FUN_02064e00(&DAT_0400006c,DAT_020a1008);
  FUN_02064e00(0x400106c,DAT_020a0cd4);
  GX_DispOn();
  _DAT_04001000 = _DAT_04001000 | 0x10000;
  FUN_020430a8(1);
  FUN_02060efc();
  FUN_02056298();
  FUN_02061428();
  return;
}

