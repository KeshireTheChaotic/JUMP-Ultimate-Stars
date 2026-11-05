
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161628(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar5;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if (in_OV) {
    uVar5 = *(undefined4 *)(unaff_r4 + -8);
    uVar4 = *(undefined4 *)(unaff_r4 + -0x10);
    puVar3 = *(undefined4 **)(unaff_r4 + -0x14);
    uVar2 = *(undefined4 *)(unaff_r4 + -0x18);
    uVar1 = *(undefined4 *)(unaff_r4 + -0x1c);
    coprocessor_function(0xe,4,3,in_cr6,in_cr9,in_cr15);
    *puVar3 = *(undefined4 *)(unaff_r4 + -4);
    puVar3[-1] = uVar5;
    puVar3[-2] = unaff_r11;
    puVar3[-3] = unaff_r10;
    puVar3[-4] = unaff_r9;
    puVar3[-5] = unaff_r8;
    puVar3[-6] = uVar4;
    puVar3[-7] = unaff_r5;
    puVar3[-8] = uVar2;
    puVar3[-9] = uVar1;
  }
  if (!in_NG) {
    software_interrupt(0x617261);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

