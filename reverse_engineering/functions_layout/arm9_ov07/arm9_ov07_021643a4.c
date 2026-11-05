
/* WARNING: Control flow encountered bad instruction data */

void FUN_021643a4(int param_1)

{
  undefined4 unaff_r8;
  undefined4 in_pc;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr8;
  
  if (in_OV) {
    *(BADSPACEBASE **)param_1 = register0x00000054;
    *(undefined4 *)(param_1 + -4) = unaff_r8;
  }
  coprocessor_moveto(6,4,6,in_pc,in_cr4,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

