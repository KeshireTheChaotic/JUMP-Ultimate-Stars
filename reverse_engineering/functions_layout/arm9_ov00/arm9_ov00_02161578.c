
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161578(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int unaff_r4;
  undefined1 *unaff_r6;
  int unaff_r7;
  int unaff_r9;
  char *in_lr;
  char *pcVar2;
  bool in_ZR;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  if ((bool)in_OV) {
    software_interrupt(0x666e69);
  }
  if (in_ZR) {
    unaff_r6 = (undefined1 *)(0x216158 - unaff_r7);
  }
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    unaff_r9 = *(int *)(param_4 + -0x14);
    unaff_r6 = *(undefined1 **)(param_4 + -0x1c);
    unaff_r4 = *(int *)(param_4 + -0x20);
    coprocessor_moveto(9,3,3,unaff_r6,in_cr15,in_cr4);
    cVar1 = (char)unaff_r6;
    pcVar2 = s_font_jskfont_aft_0216158c + 8;
    func_0x03e3be54(param_1,param_2,param_3,param_4 + -0x20);
  }
  else {
    pcVar2 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr6,unaff_r4 + -0xb8);
    *(char *)(unaff_r9 - ((uint)pcVar2 >> 8)) = (char)unaff_r6;
  }
  else {
    *pcVar2 = cVar1;
    *unaff_r6 = (char)(unaff_r6 + -0x12e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

