
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0205965c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(2,9,10);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0xc,4);
  if (*(int *)(*(int *)(iVar1 + 4) + 0xc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x020596b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(3);
    return iVar1;
  }
  FUN_02058214(0x10,param_1);
  iVar1 = FUN_020580e8(0x10,0);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

