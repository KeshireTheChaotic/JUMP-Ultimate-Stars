
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216ac10(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r6;
  undefined1 *in_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar2;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  if (in_OV) {
    unaff_r6 = 0;
  }
  else {
    *in_lr = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  bVar2 = false;
  if (in_ZR) {
    uVar1 = param_2 >> 0xc | param_2 << 0x14;
    in_CY = unaff_r4 <= uVar1;
    in_OV = SBORROW4(uVar1,unaff_r4);
    unaff_r6 = uVar1 - unaff_r4;
    in_NG = (int)unaff_r6 < 0;
    bVar2 = unaff_r6 == 0;
  }
  if (bVar2) {
    in_CY = 0;
    in_NG = 0;
  }
  if (bVar2 && (unaff_r6 & 0x3800) == 0) {
    in_CY = false;
    in_NG = false;
  }
  if (!(bool)in_NG) {
    software_interrupt(0x73756a);
  }
  if (in_OV) {
    software_smc(7);
  }
  if ((bool)in_CY) {
    coprocessor_movefromRt(5,3,3,in_cr2,in_cr6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

