
void FUN_01fffa9c(void)

{
  int extraout_r1;
  int iVar1;
  int extraout_r1_00;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined8 uVar3;
  
  FUN_01fff978();
  iVar2 = extraout_r1 + 0x4c0;
  FUN_01fff1e0();
  uVar3 = FUN_01fffa24();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  FUN_01fff424((int)uVar3,iVar1,iVar1 + 0x14d0);
  *(undefined4 *)(extraout_r1_00 + 0x48) = unaff_r5;
  *(undefined4 *)(extraout_r1_00 + 0x4c) = unaff_r6;
  *(undefined4 *)(extraout_r1_00 + 0x50) = unaff_r7;
  *(undefined4 *)(extraout_r1_00 + 0x54) = unaff_r8;
  *(undefined4 *)(extraout_r1_00 + 0x58) = unaff_r9;
  *(undefined4 *)(extraout_r1_00 + 0x5c) = unaff_r10;
  *(undefined4 *)(extraout_r1_00 + 0x60) = unaff_r11;
  *(undefined4 *)(extraout_r1_00 + 100) = in_r12;
  *(int *)(extraout_r1_00 + 0x74) = extraout_r1 + 0xc0;
  FUN_01fff5d8(iVar2 + 0x200,extraout_r1_00,0x80);
  return;
}

