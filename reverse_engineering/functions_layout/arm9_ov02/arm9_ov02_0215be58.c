
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215be58(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  char *unaff_r6;
  char *in_lr;
  char *pcVar4;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  iVar2 = param_2;
  if ((bool)in_OV) {
    iVar2 = param_2 + -0x1a8;
    coprocessor_storelong(7,in_cr6,param_2);
  }
  if (in_CY) {
    software_interrupt(0x797861);
  }
  iVar3 = iVar2;
  if ((bool)in_OV) {
    iVar3 = iVar2 + -0x1a8;
    coprocessor_storelong(7,in_cr6,iVar2);
  }
  if (in_CY) {
    coprocessor_function(8,7,3,in_cr7,in_cr9,in_cr1);
  }
  if (in_ZR) {
    unaff_r6 = (char *)((param_3 >> 0x12 | param_3 << 0xe) - (int)in_lr);
  }
  cVar1 = (char)unaff_r6;
  if ((bool)in_OV) {
    pcVar4 = "font.aft";
    func_0x03e36734(param_1,iVar3);
    iVar3 = extraout_r1;
  }
  else {
    pcVar4 = in_lr + -0xf66;
    *in_lr = cVar1;
  }
  if ((bool)in_OV) {
    coprocessor_storelong(7,in_cr4,iVar3);
  }
  else {
    *pcVar4 = cVar1;
    *unaff_r6 = cVar1 + -0x2e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

