
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02058cc0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(2,7,9);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0x182,2);
  if ((*(ushort *)(*(int *)(iVar1 + 4) + 0x182) & param_2 & 0xfffe) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02058d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(7);
    return iVar1;
  }
  FUN_02058214(0xd,param_1);
  iVar1 = FUN_020580e8(0xd,1,param_2);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

