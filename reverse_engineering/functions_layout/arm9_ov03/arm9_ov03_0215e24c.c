
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215e24c(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int unaff_r4;
  undefined1 unaff_r5;
  undefined4 unaff_r7;
  bool in_NG;
  undefined1 in_OV;
  bool bVar1;
  undefined4 in_cr3;
  undefined4 in_cr6;
  
  bVar1 = false;
  if (in_NG) {
    in_OV = SBORROW4(param_3,-0x7fffffee);
    unaff_r4 = param_3 + 0x7fffffee;
    bVar1 = unaff_r4 < 0;
  }
  if (bVar1) {
    coprocessor_loadlong(6,in_cr6,unaff_r4);
  }
  if ((bool)in_OV) {
    coprocessor_moveto2(4,7,unaff_r7,param_2,in_cr3);
    *param_2 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

