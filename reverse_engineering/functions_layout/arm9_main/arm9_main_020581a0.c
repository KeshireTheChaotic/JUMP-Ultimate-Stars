
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_020581a0(void)

{
  int iVar1;
  undefined4 uVar2;
  code *in_lr;
  ushort *puStack_8;
  code *local_4;
  
  local_4 = in_lr;
  iVar1 = FUN_02053bd8(&DAT_020acaec,&puStack_8,0);
  if (iVar1 == 0) {
    return 0;
  }
  DC_InvalidateRange(puStack_8,2);
  if ((*puStack_8 & 0x8000) == 0) {
    FUN_02053b24(&DAT_020acaec,puStack_8,1);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x020581f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*local_4)(puStack_8);
  return uVar2;
}

