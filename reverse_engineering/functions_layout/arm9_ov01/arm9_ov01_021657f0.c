
void FUN_021657f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar8 = DAT_020afe98;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = DAT_020afe94;
  if (DAT_020afe94 < 2) {
    iVar5 = 2;
  }
  FUN_02023894(*(undefined4 *)(iVar4 + 4),iVar5 + 0x885ffe,0,param_4,param_4);
  (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
  iVar4 = 0;
  do {
    if ((iVar4 < iVar5) && (iVar8 != iVar4)) {
      piVar1 = *(int **)(*(int *)(param_1 + iVar4 * 4 + 0x10) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      iVar9 = iVar4 + 0x886017;
      iVar10 = *(int *)(param_1 + iVar4 * 4 + 0x10);
      iVar2 = FUN_02088310(iVar4);
      if (iVar2 != 0) {
        iVar9 = iVar4 + 0x88601b;
      }
      iVar2 = FUN_020872b0(iVar4);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          iVar9 = iVar9 + 8;
        }
        else if (iVar2 == 2) {
          iVar9 = iVar9 + 0x10;
        }
      }
      if (iVar9 != *(int *)(param_1 + iVar4 * 4 + 0x74)) {
        FUN_02023894(*(undefined4 *)(iVar10 + 4),iVar9,0);
        (**(code **)(**(int **)(*(int *)(iVar10 + 4) + 0x68) + 0x6c))();
        *(int *)(param_1 + iVar4 * 4 + 0x74) = iVar9;
      }
    }
    else {
      piVar1 = *(int **)(*(int *)(param_1 + iVar4 * 4 + 0x10) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x71) != '\0') {
    return;
  }
  uVar11 = FUN_02054b44();
  uVar3 = (uint)uVar11 - *(uint *)(param_1 + 0x5c);
  uVar11 = FUN_0200d0c4(uVar3 * 0x40,
                        ((int)((ulonglong)uVar11 >> 0x20) -
                        (*(int *)(param_1 + 0x60) + (uint)((uint)uVar11 < *(uint *)(param_1 + 0x5c))
                        )) * 0x40 | uVar3 >> 0x1a,0x82ea,0);
  uVar3 = (short)(ushort)*(byte *)(param_1 + 0x84) * 1000;
  uVar7 = uVar3 - (uint)uVar11;
  iVar8 = -((int)((ulonglong)uVar11 >> 0x20) + (uint)(uVar3 < (uint)uVar11));
  iVar5 = FUN_0200cf14(uVar7,iVar8,1000,0);
  uVar11 = FUN_0200cf14(uVar7 + iVar5 * -1000,
                        iVar8 - ((iVar5 * 1000 >> 0x1f) + (uint)(uVar7 < (uint)(iVar5 * 1000))),10,0
                       );
  iVar4 = (int)((ulonglong)uVar11 >> 0x20);
  iVar8 = (int)uVar11;
  if (((int)-(iVar4 + (uint)(iVar8 != 0)) < 0 ==
       (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar8 != 0)))) && (iVar5 < 1)) {
    iVar8 = 0;
    iVar5 = 0;
    uVar6 = 0x88600d;
  }
  else if (iVar5 < 10) {
    uVar6 = 0x88600d;
  }
  else {
    uVar6 = 0x886003;
  }
  FUN_02165ba4(iVar5,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),0,uVar6);
  FUN_02165ba4(iVar8,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1,uVar6);
  return;
}

