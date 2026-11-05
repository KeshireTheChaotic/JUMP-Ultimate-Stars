
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02059af8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(1,0xb);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0x10,4);
  if (*(int *)(*(int *)(iVar1 + 4) + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02059b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(3);
    return iVar1;
  }
  FUN_02058214(0x13,param_1);
  iVar1 = FUN_020580e8(0x13,0);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

