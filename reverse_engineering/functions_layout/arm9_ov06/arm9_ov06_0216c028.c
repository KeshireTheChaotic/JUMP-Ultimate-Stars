
void FUN_0216c028(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  piVar14 = &local_38;
  piVar13 = *(int **)(param_2 + 4);
  iVar11 = *(int *)(param_2 + 0x38);
  uVar12 = 1;
  piVar4 = piVar13;
  do {
    piVar10 = piVar4 + 2;
    if (((*(byte *)((int)piVar4 + 0xe) & 1) != 0) && ((*(byte *)((int)piVar4 + 0xe) & 8) == 0)) {
      iVar5 = *(int *)(*(int *)(*piVar10 + 0x10) + 0x5c);
      iVar9 = (short)piVar4[3] * 0xc;
      iVar8 = iVar11 + iVar9;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar11 + iVar9);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar8 + 4);
      FUN_02023738(*(undefined4 *)(*(int *)(*piVar10 + 8) + 4),*(undefined4 *)(iVar8 + 8));
      *(short *)(piVar4 + 3) = (short)piVar4[3] + 1;
      if (0x7f < (short)piVar4[3]) {
        *(undefined2 *)(piVar4 + 3) = 0;
      }
    }
    uVar12 = uVar12 + 1;
    piVar4 = piVar10;
  } while (uVar12 < 0x20);
  iVar11 = (uint)*(byte *)(param_2 + 0x3c) * 0xc + iVar11;
  uVar6 = FUN_0216b740(*piVar13);
  FUN_02166a1c(iVar11,uVar6);
  uVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(*piVar13 + 8) + 4) + 0x50) + 0x60))();
  *(undefined4 *)(iVar11 + 8) = uVar6;
  cVar1 = *(char *)(param_2 + 0x3c);
  *(char *)(param_2 + 0x3c) = cVar1 + '\x01';
  if (0x7f < (byte)(cVar1 + 1U)) {
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  sVar3 = *(short *)(param_2 + 0x1e);
  uVar6 = FUN_0200c954((int)*(short *)(param_2 + 0x1c) * (int)*(short *)(param_2 + 0x1c));
  uVar7 = FUN_0200c954((int)sVar3 * (int)sVar3);
  FUN_0200bfb4(uVar6,uVar7);
  uVar6 = FUN_0200cb80();
  FUN_0200c9e4(0x45800000,uVar6);
  local_28 = FUN_0200c8e0();
  FUN_0216c2fc(&local_2c,(int)*(short *)(param_2 + 0x1c),&local_28);
  *(short *)(param_2 + 0x1c) =
       (short)((int)(local_2c * 0x100 + ((uint)(local_2c * 0x100 >> 0xb) >> 0x14)) >> 0xc);
  FUN_0216c2fc(&local_30,(int)*(short *)(param_2 + 0x1e),&local_28);
  *(short *)(param_2 + 0x1e) =
       (short)((int)(local_30 * 0x100 + ((uint)(local_30 * 0x100 >> 0xb) >> 0x14)) >> 0xc);
  uVar6 = FUN_0200c954((int)*(short *)(param_2 + 0x1c) << 0xc);
  uVar6 = FUN_0200c5ac(uVar6,0x45800000);
  uVar7 = FUN_0200c954((int)*(short *)(param_2 + 0x1e) << 0xc);
  FUN_0200c5ac(uVar7,0x45800000);
  uVar15 = FUN_0200c85c();
  uVar16 = FUN_0200c85c(uVar6);
  FUN_02009d2c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
               (int)((ulonglong)uVar16 >> 0x20));
  uVar6 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar6);
  iVar11 = FUN_0200c8e0();
  uVar6 = FUN_0200c954((iVar11 * 0x10000) / 2);
  FUN_0200c5ac(uVar6,0x40490fdb);
  iVar11 = FUN_0200c8e0();
  if (iVar11 < 0) {
    local_38 = iVar11 + -0x7ff;
  }
  else {
    piVar14 = &local_34;
    local_34 = iVar11 + 0x7ff;
  }
  uVar2 = *(ushort *)(param_1 + 0x20);
  sVar3 = *(short *)(param_2 + 0x1e);
  iVar9 = *piVar14;
  iVar11 = *(int *)(*(int *)(*piVar13 + 0x10) + 0x5c);
  *(short *)(iVar11 + 0x24) = (short)((uint)uVar2 * (int)*(short *)(param_2 + 0x1c) >> 8);
  *(short *)(iVar11 + 0x26) = (short)((uint)uVar2 * (int)sVar3 >> 8);
  uVar12 = (iVar9 + ((uint)(iVar9 >> 0xb) >> 0x14) & 0xfffffff) >> 0xc;
  if (*(char *)(param_2 + 0x35) == -1) {
    FUN_02023738(*(undefined4 *)(*(int *)(*piVar13 + 8) + 4),uVar12 - 0x8000);
  }
  else {
    FUN_02023738(*(undefined4 *)(*(int *)(*piVar13 + 8) + 4),uVar12);
  }
  return;
}

