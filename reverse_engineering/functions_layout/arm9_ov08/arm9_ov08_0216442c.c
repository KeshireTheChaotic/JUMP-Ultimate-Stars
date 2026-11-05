
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216442c(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int unaff_r5;
  uint *puVar3;
  int unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  uint in_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 in_CY;
  char in_OV;
  bool bVar5;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined8 uVar6;
  
  if (!(bool)in_ZR) {
    coprocessor_movefromRt(0xc,1,in_cr2);
    param_1 = (uint *)coprocessor_movefromRt2(0xc,1,in_cr2);
    unaff_r11 = (int)param_1 + -0x41b;
    param_1 = (uint *)*param_1;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    in_lr = 0x2164438;
    uVar6 = func_0x01cef07c();
    param_2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    param_1 = (uint *)uVar6;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(BADSPACEBASE **)(unaff_r7 + -4) = register0x00000054;
    *(int *)(unaff_r7 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r7 + -0xc) = unaff_r9;
    *(uint **)(unaff_r7 + -0x10) = param_1;
  }
  if ((bool)in_OV) {
    param_5 = in_lr;
  }
  if ((bool)in_NG) {
    puVar3 = *(uint **)(unaff_r5 + -0x18);
    param_4 = *(uint *)(unaff_r5 + -0x1c);
    in_lr = *puVar3;
    unaff_r8 = puVar3[-2];
    param_2 = (undefined4 *)puVar3[-4];
    param_1 = (uint *)puVar3[-5];
  }
  if ((bool)in_OV) {
    *(undefined4 **)(unaff_r8 + 0x818) = param_2;
    coprocessor_store(8,in_cr6,param_2 + 8);
  }
  puVar2 = param_2;
  if ((bool)in_NG) {
    puVar2 = param_2 + -0x859116;
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  if ((bool)in_ZR) {
    in_CY = false;
    in_NG = '\0';
  }
  bVar5 = ((uint)param_1 & 0x28000001) == 0;
  uVar4 = (bool)in_ZR && bVar5;
  if ((bool)in_CY) {
    param_1 = (uint *)((uint)param_1 & 0x300);
  }
  puVar3 = param_1;
  if (!(bool)in_ZR || !bVar5) {
    puVar3 = param_1 + -1;
    coprocessor_store(1,in_cr2,param_1);
  }
  if ((bool)in_CY) {
    *puVar3 = in_lr;
    puVar3[-1] = param_4;
    puVar3 = (uint *)func_0x02198494(puVar3,puVar2);
  }
  if (!(bool)uVar4) {
    coprocessor_movefromRt(1,0,in_cr5);
    puVar1 = (uint *)coprocessor_movefromRt2(1,0,in_cr5);
    puVar3 = puVar1 + -0x100;
    *puVar1 = (uint)puVar3;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0,in_cr11,puVar3);
  }
  if (!(bool)uVar4) {
    coprocessor_movefromRt(7,2,3,in_cr8,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

