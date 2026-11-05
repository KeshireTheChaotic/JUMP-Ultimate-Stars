
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dc54(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  int in_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  
  if ((bool)in_ZR) {
    in_lr = param_1 + unaff_r6 + (uint)in_CY;
  }
  if (!in_CY) {
    uVar1 = (int)unaff_r8 * 0x10000;
    in_CY = uVar1 < in_r12;
    in_OV = SBORROW4(in_r12,uVar1) != SBORROW4(in_r12 + (int)unaff_r8 * -0x10000,1);
    param_2 = in_r12 - (uVar1 + 1);
    in_NG = param_2 < 0;
    in_ZR = param_2 == 0;
  }
  if (!(bool)in_ZR) {
    coprocessor_load(8,in_cr6,unaff_r9);
  }
  *(int *)(unaff_r4 + 4) = param_1;
  *(undefined4 *)(unaff_r4 + 8) = param_4;
  *(uint *)(unaff_r4 + 0xc) = in_r12;
  *(BADSPACEBASE **)(unaff_r4 + 0x10) = register0x00000054;
  *(int *)(unaff_r4 + 0x14) = in_lr;
  *(undefined4 *)(unaff_r4 + 0x18) = 0x214dc68;
                    /* WARNING: Read-only address (ram,0x0214dc5c) is written */
                    /* WARNING: Read-only address (ram,0x0214dc60) is written */
                    /* WARNING: Read-only address (ram,0x0214dc64) is written */
                    /* WARNING: Read-only address (ram,0x0214dc68) is written */
                    /* WARNING: Read-only address (ram,0x0214dc6c) is written */
  if ((bool)in_NG) {
    FUN_0214dc54 = param_3;
    uRam0214dc5c = unaff_r5;
    iRam0214dc60 = unaff_r6;
    uRam0214dc64 = unaff_r10;
    uRam0214dc68 = unaff_r11;
    uRam0214dc6c = in_r12;
  }
  if (in_CY) {
    in_OV = SBORROW4(unaff_r6,param_2 * 0x10000);
    in_NG = unaff_r6 + param_2 * -0x10000 < 0;
    in_ZR = unaff_r6 == param_2 * 0x10000;
  }
  if (!(bool)in_NG) {
    *unaff_r8 = unaff_r7;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0181e688();
  }
  if (!(bool)in_ZR) {
    coprocessor_store(8,in_cr5,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

