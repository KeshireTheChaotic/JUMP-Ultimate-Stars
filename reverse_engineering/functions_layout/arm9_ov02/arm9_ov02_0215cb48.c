
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215cb48(uint param_1,uint param_2)

{
  char cVar1;
  char *unaff_r6;
  char *in_lr;
  char *pcVar2;
  bool in_ZR;
  byte in_CY;
  undefined1 in_OV;
  
  if (in_ZR) {
    param_1 = param_1 & ((uint)in_CY << 0x1f | param_2 >> 1);
  }
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar2 = "font.aft";
    param_1 = func_0x03e37414(param_1);
  }
  else {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if ((bool)in_OV) {
    func_0x03a360f8(param_1);
  }
  else {
    *pcVar2 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

