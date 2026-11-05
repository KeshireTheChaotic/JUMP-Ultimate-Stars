
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216b8f4(byte param_1,char param_2,char *param_3,int param_4)

{
  int iVar1;
  byte unaff_r6;
  char unaff_r7;
  byte *unaff_r9;
  byte unaff_r11;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr14;
  
  if (!in_OV) {
    unaff_r6 = -param_2;
  }
  if (in_NG) {
    software_interrupt(0x62792f);
  }
  iVar1 = param_4;
  if (in_OV) {
    iVar1 = param_4 + -0xb8;
    coprocessor_storelong(0xe,in_cr6,param_4);
    unaff_r6 = unaff_r11;
  }
  if (in_ZR) {
    unaff_r6 = param_1 & (byte)((uint)in_lr >> 0x18);
  }
  if (!in_OV) {
    unaff_r6 = -param_2;
  }
  if (in_NG) {
    unaff_r6 = -(char)param_3;
  }
  if (in_OV) {
    coprocessor_moveto(3,1,3,iVar1,in_cr14,in_cr0);
    coprocessor_store(7,in_cr6,in_lr);
    in_lr = in_lr + -0x18c;
  }
  else {
    unaff_r6 = -param_2;
  }
  if (in_NG) {
    unaff_r7 = -(char)param_3;
  }
  if (in_OV) {
    coprocessor_moveto(3,1,3,iVar1,in_cr14,in_cr0);
    coprocessor_store(0xc,in_cr6,in_lr);
  }
  else {
    unaff_r6 = -param_2;
  }
  if (!in_CY) {
    *param_3 = unaff_r7;
  }
  if (!in_OV) {
    *unaff_r9 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

