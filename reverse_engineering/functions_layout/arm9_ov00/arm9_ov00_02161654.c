
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161654(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  char *unaff_r6;
  undefined4 in_r12;
  char *in_lr;
  char *pcVar2;
  char in_NG;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    unaff_r6 = *(char **)(param_4 + -0x1c);
    coprocessor_moveto(9,3,3,unaff_r6,in_cr15,in_cr4);
    cVar1 = (char)unaff_r6;
    pcVar2 = "font.aft";
    func_0x03e3bf28(param_1,param_2,param_3,param_4 + -0x20);
  }
  else {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if (!(bool)in_OV) {
    *pcVar2 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
  if (in_NG != in_OV) {
    *param_3 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

