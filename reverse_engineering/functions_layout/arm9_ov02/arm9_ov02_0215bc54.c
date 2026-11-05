
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215bc54(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar3;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr15;
  
  if (!in_OV) {
    *unaff_r5 = unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  uVar1 = param_2;
  if (in_OV) {
    uVar1 = param_2 - 0x1a8;
    coprocessor_storelong(7,in_cr6,param_2);
  }
  if (in_CY) {
    software_interrupt(0x797861);
  }
  uVar2 = uVar1;
  if (in_OV) {
    uVar2 = uVar1 - 0x1a8;
    coprocessor_storelong(7,in_cr6,uVar1);
  }
  if (in_CY) {
    coprocessor_function(8,7,3,in_cr7,in_cr9,in_cr1);
  }
  bVar3 = false;
  if (in_ZR) {
    uVar1 = uVar2 >> 2 | uVar2 << 0x1e;
    in_CY = param_3 <= uVar1;
    in_OV = SBORROW4(uVar1,param_3);
    in_NG = (int)(uVar1 - param_3) < 0;
    bVar3 = uVar1 == param_3;
  }
  uVar1 = uVar2;
  if (in_OV) {
    uVar1 = uVar2 - 0x1a8;
    coprocessor_storelong(7,in_cr6,uVar2);
  }
  if (in_CY) {
    software_interrupt(0x797861);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x70616d);
  }
  if (in_CY) {
    coprocessor_function(2,6,3,in_cr6,in_cr10,in_cr15);
  }
  if (bVar3) {
    uVar2 = uVar1 >> 2 | uVar1 << 0x1e;
    in_CY = param_3 <= uVar2;
    in_OV = SBORROW4(uVar2,param_3);
  }
  if (in_OV) {
    coprocessor_storelong(7,in_cr6,uVar1);
  }
  if (in_CY) {
    software_interrupt(0x797861);
  }
  if (in_OV) {
    coprocessor_loadlong(1,in_cr6,0x215bb04);
    software_interrupt(0x5f7061);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

