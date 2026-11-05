
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02162b08) */
/* WARNING: Removing unreachable block (ram,0x02162b00) */
/* WARNING: Removing unreachable block (ram,0x02162af8) */
/* WARNING: Removing unreachable block (ram,0x02162b04) */
/* WARNING: Removing unreachable block (ram,0x02162b0c) */

void FUN_02162ad4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  int unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  bool in_OV;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uStack00000000;
  
  if (in_OV) {
    *(BADSPACEBASE **)param_1 = register0x00000054;
    *(undefined4 *)(param_1 + -4) = in_r12;
    *(undefined4 *)(param_1 + -8) = unaff_r7;
    *(undefined4 *)(param_1 + -0xc) = param_3;
  }
  bVar1 = (unaff_r11 & (int)&param_5 << 0x12) == 0;
  bVar2 = (undefined1 *)(unaff_r6 & 0x8000000d) == (undefined1 *)0x0;
  bVar3 = (undefined1 *)(unaff_r6 & 0x4000000f) == (undefined1 *)0x0;
  if ((bVar1 && bVar2) && bVar3) {
    param_1 = unaff_r5 + param_2;
  }
                    /* WARNING: Jumptable at 0x02162af4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  if (((((bVar1 && bVar2) && bVar3) && (undefined1 *)(unaff_r6 & 0x20000000) == (undefined1 *)0x0)
      && (undefined1 *)(unaff_r6 & 0x70000000) == (undefined1 *)0x0) &&
      (undefined1 *)(unaff_r6 & 0xb0000000) == (undefined1 *)0x0) {
    (*(code *)(unaff_r10 & 0x900))(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

