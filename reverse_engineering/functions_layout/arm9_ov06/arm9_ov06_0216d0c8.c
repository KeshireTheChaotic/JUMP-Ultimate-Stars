
undefined4 FUN_0216d0c8(int param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = FUN_0216d1cc();
  iVar8 = *(int *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar8 < 0) {
    iVar3 = -iVar8;
  }
  else {
    iVar3 = iVar8;
  }
  iVar4 = iVar7 + -(iVar3 + iVar7) / 2;
  iVar9 = iVar8 + -(iVar7 + iVar8) / 2;
  FUN_0200b850(iVar9 * iVar9 + iVar4 * iVar4);
  uVar10 = FUN_0200bb00();
  uVar11 = FUN_0200b890(*(undefined2 *)(param_1 + 0x20));
  uVar10 = FUN_0200b8cc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_0200d534((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x40700000);
  uVar5 = FUN_0200b6c4();
  uVar6 = FUN_0200c954((int)*(short *)(param_1 + 0x58) << 8);
  uVar5 = FUN_0200c5ac(uVar6,uVar5);
  FUN_0200bfb4(0x3f800000,uVar5);
  uVar1 = FUN_0200c914();
  *(undefined2 *)(param_1 + 0x62) = uVar1;
  uVar1 = FUN_0200d12c(-(iVar7 + iVar8),*(undefined2 *)(param_1 + 0x62));
  *(undefined2 *)(param_1 + 0x5a) = uVar1;
  uVar1 = FUN_0200d12c(-(iVar3 + iVar7),*(undefined2 *)(param_1 + 0x62));
  *(undefined2 *)(param_1 + 0x5c) = uVar1;
  *(undefined2 *)(param_1 + 0x48) = 0xb5;
  *(undefined2 *)(param_1 + 0x4a) = 0xff4b;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    *(short *)(param_1 + 0x48) = -*(short *)(param_1 + 0x48);
  }
  return uVar2;
}

