
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205228c(void)

{
                    /* JUS-TAG hw={"EXMEMCNT":1,"SYSTEM_SHARED":4}
                       io=["027fffb0","027fffb4","027ffff0","027ffff6","04000204"] */
  if (DAT_020aab58 != 0) {
    return;
  }
  DAT_020aab58 = 1;
  _DAT_027ffff0 = 0;
  FUN_02052228(0x7e);
  while (_DAT_027ffff6 != 0) {
    SVC_WaitByLoop(0x400);
  }
  _DAT_027fffb0 = 0xffffffff;
  _DAT_027fffb4 = 0xffff0000;
  MIi_CpuClear32(0,0x27fffc0,0x28);
  _DAT_04000204 = _DAT_04000204 | 0x880;
  FUN_02052188(0x7e,&DAT_027ffff0,0);
  FUN_02052228(0x7f,&DAT_027ffff0,0);
  return;
}

