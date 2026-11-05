
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_020596e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar5;
  
  sVar4 = 1;
  iVar2 = FUN_02058060();
  iVar3 = *(int *)(iVar2 + 4);
  iVar2 = FUN_02057f40(2,9,10);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(iVar3 + 0x3c,2);
  uVar1 = *(ushort *)(iVar3 + 0x3c);
  DC_InvalidateRange(iVar3 + 0x188,2);
  bVar5 = *(short *)(iVar3 + 0x188) == 0;
  if (bVar5) {
    DC_InvalidateRange(iVar3 + 0x182,2);
    sVar4 = *(short *)(iVar3 + 0x182);
    DC_InvalidateRange(iVar3 + 0x86,2);
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02059798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)(6);
    return iVar2;
  }
  if (sVar4 == 0) {
    return 7;
  }
  DC_InvalidateRange(iVar3 + 0x7c,2);
  if (param_3 == *(int *)(iVar3 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x020597d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar2;
  }
  if (bVar5) {
    iVar2 = 4;
  }
  else {
    iVar2 = 2;
  }
  if ((int)(uint)uVar1 < param_4 + iVar2) {
    return 6;
  }
  if (param_4 == 0) {
    return 6;
  }
  DC_StoreRange(param_3,param_4);
  iVar2 = FUN_020580e8(0xf,7,param_3,param_4);
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}

