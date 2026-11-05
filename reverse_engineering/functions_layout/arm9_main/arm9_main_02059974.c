
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02059974(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                ushort param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 auStack_50 [2];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 auStack_3c [32];
  
  iVar1 = FUN_02058060();
  iVar2 = *(int *)(iVar1 + 4);
  iVar1 = FUN_02057f40(2,7,8);
  if (iVar1 != 0) {
    return iVar1;
  }
  DC_InvalidateRange(iVar2 + 0x188,2);
  DC_InvalidateRange(iVar2 + 0xc6,2);
  if ((*(short *)(iVar2 + 0x188) != 0) && (*(short *)(iVar2 + 0xc6) != 1)) {
                    /* WARNING: Could not recover jumptable at 0x020599f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE_00)(3);
    return iVar1;
  }
  DC_InvalidateRange(iVar2 + 0xc,4);
  if (*(int *)(iVar2 + 0xc) == 1) {
                    /* WARNING: Could not recover jumptable at 0x02059a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE_00)(3);
    return iVar1;
  }
  if ((param_3 & 0x3f) != 0) {
    return 6;
  }
  if ((param_5 & 0x1f) != 0) {
    return 6;
  }
  DC_InvalidateRange(iVar2 + 0x9c,2);
  if (*(short *)(iVar2 + 0x9c) == 0) {
    iVar1 = FUN_020589cc();
    if ((int)param_3 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x02059a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE_00)();
      return iVar1;
    }
    iVar1 = FUN_02058ab4(iVar1);
    if ((int)(uint)param_5 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x02059a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE_00)(6);
      return iVar1;
    }
  }
  FUN_02058214(0xe,param_1);
  MIi_CpuClear32(0,auStack_50,0x30);
  uStack_40 = (uint)param_5;
  uStack_48 = param_3 >> 1;
  auStack_50[0] = 0xe;
  uStack_4c = param_2;
  uStack_44 = param_4;
  MIi_CpuCopy32(param_6,auStack_3c,0x1c);
  iVar1 = FUN_02058070(auStack_50,0x30);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

