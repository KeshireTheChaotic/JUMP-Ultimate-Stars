
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_02058ab4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(2,7,8);
  if (iVar2 != 0) {
    return 0;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0xc,4);
  if (*(int *)(*(int *)(iVar1 + 4) + 0xc) == 1) {
                    /* WARNING: Could not recover jumptable at 0x02058b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar3;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0x3c,4);
  return *(ushort *)(*(int *)(iVar1 + 4) + 0x3c) + 0x1f & 0xffffffe0;
}

