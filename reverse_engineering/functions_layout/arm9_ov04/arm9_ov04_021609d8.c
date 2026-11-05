
/* WARNING: Control flow encountered bad instruction data */

void FUN_021609d8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  uint uVar1;
  uint unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r9;
  int in_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar2;
  bool bVar3;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined1 uStack00000000;
  
  if (in_OV) {
    in_lr = *(int *)(unaff_r5 - 4);
    unaff_r6 = *(uint *)(unaff_r5 - 0x10);
    param_4 = *(undefined4 **)(unaff_r5 - 0x14);
    unaff_r5 = unaff_r5 - 0x18;
    coprocessor_storelong(3,in_cr4,0x216085c);
  }
  if ((bool)in_CY) {
    coprocessor_function(0xf,6,3,in_cr6,in_cr14,in_cr13);
  }
  bVar2 = false;
  if (in_ZR) {
    uVar1 = (uint)(byte)in_CY << 0x1f | (uint)param_4 >> 1;
    in_CY = param_1 <= uVar1;
    in_OV = SBORROW4(uVar1,param_1);
    in_NG = (int)(uVar1 - param_1) < 0;
    bVar2 = uVar1 == param_1;
  }
  if (bVar2) {
    in_CY = false;
    in_NG = false;
  }
  bVar3 = (unaff_r6 & 0x4c000) != 0;
  if ((bool)in_CY && (!bVar2 || bVar3)) {
    unaff_r5 = (uint)param_4 | 0x20c0000;
  }
  if (!in_OV) {
    *param_4 = unaff_r9;
  }
  if ((!bVar2 || bVar3) && (bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    in_lr = *(int *)(unaff_r5 - 4);
    unaff_r6 = *(uint *)(unaff_r5 - 0x10);
    coprocessor_storelong(3,in_cr4,0x2160880);
  }
  if (!(bool)in_NG) {
    *(char *)(in_lr - ((uint)&param_5 >> 0x1e | (int)&param_5 << 2)) = (char)unaff_r6;
    software_interrupt(0x6b726f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

