
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215e6f0(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  uint uVar1;
  char cVar2;
  uint unaff_r4;
  char *unaff_r6;
  char *in_lr;
  char *pcVar3;
  char *pcVar4;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  pcVar3 = in_lr;
  if (!(bool)in_OV) {
    pcVar3 = in_lr + -0xf66;
    *in_lr = (char)unaff_r6;
  }
  if (in_NG) {
    unaff_r4 = (uint)*param_4;
  }
  if (in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  if (in_ZR) {
    uVar1 = param_2 >> 0xc | param_2 << 0x14;
    in_OV = SBORROW4(uVar1,unaff_r4);
    unaff_r6 = (char *)(uVar1 - unaff_r4);
    in_NG = (int)unaff_r6 < 0;
  }
  cVar2 = (char)unaff_r6;
  pcVar4 = pcVar3;
  if (!(bool)in_OV) {
    pcVar4 = pcVar3 + -0xf66;
    *pcVar3 = cVar2;
  }
  if (in_NG) {
    pcVar4 = s_font_JSKFont_aft_0215e700 + 8;
    func_0x03630fc8();
  }
  if (!(bool)in_OV) {
    *pcVar4 = cVar2;
    *unaff_r6 = cVar2 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

