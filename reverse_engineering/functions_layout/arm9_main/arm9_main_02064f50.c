
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02064f50(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"GX_2D_main":7,"GX_2D_sub":4,"POWCNT":1}
                       io=["04000000","04000004","04000020","04000026","04000030","04000036","0400006c","04000304","04001020","04001026","04001030","04001036"]
                        */
  _DAT_04000304 = _DAT_04000304 & 0xfdf1 | 0x820f;
  FUN_02065058();
  if (DAT_020afb98 == 0) {
    do {
      uVar1 = FUN_02051fa0();
      if (uVar1 == 0xfffffffd) {
        FUN_02055684();
      }
      DAT_020afb98 = (short)uVar1;
    } while ((uVar1 & 0xffff) == 0);
  }
  _DAT_04000004 = 0;
  _DAT_04000000 = 0;
  if (DAT_0209dd40 == -1) {
    MIi_CpuClear32(0,&DAT_04000008,0x60);
    _DAT_0400006c = 0;
    MIi_CpuClear32(0,&DAT_04001000,0x70);
  }
  else {
    FUN_02051688(DAT_0209dd40,&DAT_04000008,0,0x60);
    _DAT_0400006c = 0;
    FUN_02051688(DAT_0209dd40,&DAT_04001000,0,0x70);
  }
  _DAT_04000020 = 0x100;
  _DAT_04000026 = 0x100;
  _DAT_04000030 = 0x100;
  _DAT_04000036 = 0x100;
  _DAT_04001020 = 0x100;
  _DAT_04001026 = 0x100;
  _DAT_04001030 = 0x100;
  _DAT_04001036 = 0x100;
  return;
}

