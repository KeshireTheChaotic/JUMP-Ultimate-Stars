
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161bbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  char unaff_r6;
  char *in_lr;
  char *pcVar1;
  undefined1 in_OV;
  
  if (!(bool)in_OV) {
    in_OV = SBORROW4(unaff_r4 >> 0x12,param_4);
    unaff_r6 = (char)(unaff_r4 >> 0x12) - (char)param_4;
  }
  if ((bool)in_OV) {
    pcVar1 = "font_q.aft";
    func_0x03e3c48c(param_1);
  }
  else {
    pcVar1 = in_lr + -0xf66;
    *in_lr = unaff_r6;
  }
  if (!(bool)in_OV) {
    *pcVar1 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

