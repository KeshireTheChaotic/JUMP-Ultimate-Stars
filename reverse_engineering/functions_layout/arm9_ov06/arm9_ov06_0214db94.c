
void FUN_0214db94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [128];
  
  iVar2 = FUN_0207382c();
  uVar5 = iVar2 < 0;
  uVar4 = 0;
  if (iVar2 != 0) {
    FUN_0214d9c8();
    uVar3 = 0x214dba9;
    FUN_0214da44();
    puVar1 = DAT_02172960;
    if ((bool)uVar4) {
      *DAT_02172960 = auStack_88 + 0x80;
      puVar1[-1] = in_r12;
      puVar1[-2] = unaff_r7;
      puVar1[-3] = unaff_r6;
      puVar1[-4] = param_1;
      puVar1[-5] = param_3;
    }
    software_interrupt(0x6f000);
    if ((bool)uVar5) {
      *(undefined4 *)(param_1 + -4) = uVar3;
      *(undefined1 **)(param_1 + -8) = auStack_88 + 0x80;
      *(undefined4 *)(param_1 + -0xc) = unaff_r11;
      *(undefined4 *)(param_1 + -0x10) = unaff_r6;
      *(undefined4 *)(param_1 + -0x14) = unaff_r5;
    }
    func_0x01a8b728();
  }
  FUN_0214dbcc(param_1);
  return;
}

