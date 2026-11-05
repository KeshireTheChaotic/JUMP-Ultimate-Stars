
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215be6c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_r1;
  char *unaff_r6;
  char *in_lr;
  char *pcVar2;
  undefined1 in_OV;
  undefined4 in_cr4;
  
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar2 = "font.aft";
    func_0x03e36734();
    param_2 = extraout_r1;
  }
  else {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if ((bool)in_OV) {
    coprocessor_storelong(7,in_cr4,param_2);
  }
  else {
    *pcVar2 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

