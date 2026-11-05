
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215e3a8(void)

{
  char cVar1;
  char *unaff_r6;
  char *in_lr;
  char *pcVar2;
  bool in_NG;
  undefined1 in_OV;
  
  cVar1 = (char)unaff_r6;
  pcVar2 = in_lr;
  if (!(bool)in_OV) {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if (in_NG) {
    pcVar2 = "Font.aft";
    func_0x03630c70();
  }
  if (!(bool)in_OV) {
    *pcVar2 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

