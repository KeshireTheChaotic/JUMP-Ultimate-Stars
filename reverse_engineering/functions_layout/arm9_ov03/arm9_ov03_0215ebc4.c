
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0215ebdc) */

void FUN_0215ebc4(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint unaff_r4;
  char *pcVar3;
  undefined1 *in_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  undefined1 auStack_10c [268];
  
  if (in_OV) {
    software_smc(6);
    software_interrupt(0x2f6c6c);
    in_NG = false;
    in_ZR = false;
    in_CY = true;
  }
  pcVar3 = (char *)(-param_2 + -0x7ffffff5);
  uVar1 = SUB41(pcVar3,0);
  *in_lr = uVar1;
  in_lr[-0xf66] = uVar1;
  cVar2 = (char)-param_2 + -0x23;
  *pcVar3 = cVar2;
  in_lr[-0x1ecc] = cVar2;
  if ((bool)in_NG) {
    unaff_r4 = (uint)*param_4;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  if ((bool)in_ZR && SBORROW4(param_2 >> 0xc | param_2 << 0x14,unaff_r4)) {
    coprocessor_storelong(0xf,in_cr6,auStack_10c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

