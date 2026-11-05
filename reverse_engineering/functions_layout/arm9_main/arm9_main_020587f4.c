
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_020587f4(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_02058060();
  iVar3 = FUN_02058044();
  if (iVar3 != 0) {
    return 0;
  }
  DC_InvalidateRange(*(undefined4 *)(iVar2 + 4),2);
  psVar5 = *(short **)(iVar2 + 4);
  sVar1 = *psVar5;
  if (sVar1 == 9) {
    DC_InvalidateRange(psVar5 + 0xc1,2);
    psVar5 = *(short **)(iVar2 + 4);
    if (psVar5[0xc1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0205886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(0);
      return uVar4;
    }
  }
  else if ((sVar1 != 10) && (sVar1 != 0xb)) {
    return 0;
  }
  DC_InvalidateRange(psVar5 + 0x5e,2);
  return (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0xbc);
}

