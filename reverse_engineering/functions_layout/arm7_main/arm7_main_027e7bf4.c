
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_027e7bf4(void)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort auStack_218 [4];
  uint uStack_210;
  undefined1 auStack_20c [516];
  
  iVar1 = DAT_027f97f0;
  if (*(short *)(DAT_027f97f0 + 0x182) == 0) {
    return;
  }
  *(undefined2 *)(DAT_027f97f0 + 0x8a) = 1;
  auStack_218[0] = 0;
  iVar2 = FUN_027e73b4(1,1,1,auStack_218);
  if (iVar2 == 1) {
    *(undefined2 *)(iVar1 + 0x8a) = 0;
                    /* WARNING: Could not recover jumptable at 0x027e7c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(iVar1 + 0x1c) == 1) {
    auStack_218[0] = auStack_218[0] | 0x8000;
  }
  iVar2 = FUN_027e27d0(auStack_20c,uStack_210 & 0xffff,auStack_218[0],*(undefined4 *)(iVar1 + 0x7c))
  ;
  if (*(short *)(iVar2 + 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x027e7ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(short *)(iVar2 + 4) != 8) {
    *(undefined2 *)(iVar1 + 0x8a) = 0;
  }
  return;
}

