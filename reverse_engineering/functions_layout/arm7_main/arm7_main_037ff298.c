
void FUN_037ff298(uint param_1,undefined4 param_2,int param_3,int param_4,undefined2 param_5,
                 undefined4 param_6,uint param_7,int param_8,short param_9,int param_10)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SOUND":5}
                       io=["04000400","04000404","04000408","0400040a","0400040c"] */
  iVar1 = param_1 * 0x10;
  (&DAT_0380854c)[param_1] = (char)param_10;
  if (-1 < DAT_0380819c) {
    param_10 = DAT_0380819c;
  }
  (&DAT_0380855c)[param_1] = (char)param_7;
  if ((0 < DAT_03808548) && ((1 << (param_1 & 0xff) & 0xfff5U) != 0)) {
    param_7 = FUN_037fee8c(param_7,param_10);
  }
  *(uint *)(iVar1 + 0x4000400) =
       param_7 | param_3 << 0x1d | param_4 << 0x1b | param_10 << 0x10 | param_8 << 8;
  *(short *)(iVar1 + 0x4000408) = -param_9;
  *(undefined2 *)(iVar1 + 0x400040a) = param_5;
  *(undefined4 *)(iVar1 + 0x400040c) = param_6;
  *(undefined4 *)(iVar1 + 0x4000404) = param_2;
  return;
}

