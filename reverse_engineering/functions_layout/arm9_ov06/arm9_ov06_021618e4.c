
void FUN_021618e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  piVar8 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  uStack_18 = param_4;
  if (*piVar8 == 0) {
    iVar9 = 0;
    iVar2 = 0;
    goto LAB_02161b0c;
  }
  iVar9 = (int)*(short *)((int)piVar8 + 0x26);
  iVar7 = *(int *)(*(int *)(*piVar8 + 0x10) + 0x5c);
  iVar1 = FUN_021618c8();
  iVar2 = (int)(short)piVar8[9];
  if (iVar1 != 0) {
    iVar2 = -iVar2;
  }
  iVar5 = *(int *)(iVar7 + 0x10) + iVar9 * 0x100;
  iVar1 = *(int *)(iVar7 + 0xc) + iVar2 * 0x100;
  if ((char)piVar8[10] == '\0') {
    iVar7 = (iVar1 - piVar8[3]) + ((uint)(iVar1 - piVar8[3] >> 1) >> 0x1e);
    iVar2 = iVar7 >> 2;
    if (iVar2 < 0) {
      iVar7 = -iVar2;
    }
    if (iVar2 >= 0) {
      iVar7 = iVar2;
    }
    iVar9 = (int)((iVar5 - piVar8[4]) + ((uint)(iVar5 - piVar8[4] >> 1) >> 0x1e)) >> 2;
    if (iVar7 < 0x100) {
      if (iVar9 < 0) {
        iVar7 = -iVar9;
      }
      else {
        iVar7 = iVar9;
      }
      if (iVar7 < 0x100) {
        piVar8[3] = iVar1;
        piVar8[4] = iVar5;
        uVar3 = FUN_021618c8(*piVar8);
        piVar4 = *(int **)(*(int *)(piVar8[2] + 4) + 100);
        (**(code **)(*piVar4 + 0x5c))(piVar4,uVar3);
        goto LAB_02161ad0;
      }
    }
    if (iVar2 < 0x401) {
      if (iVar2 < -0x400) {
        iVar2 = -0x400;
      }
    }
    else {
      iVar2 = 0x400;
    }
    if (iVar9 < 0x401) {
      if (iVar9 < -0x400) {
        iVar9 = -0x400;
      }
    }
    else {
      iVar9 = 0x400;
    }
    bVar10 = iVar2 == 0;
    piVar8[3] = piVar8[3] + iVar2;
    iVar6 = piVar8[4] + iVar9;
    piVar8[4] = iVar6;
    iVar7 = iVar2;
    if (0 < iVar2) {
      iVar6 = piVar8[3];
      iVar7 = iVar6 - iVar1;
      bVar10 = iVar6 == iVar1;
    }
    if (!bVar10 && iVar7 < 0 == (0 < iVar2 && SBORROW4(iVar6,iVar1))) {
      piVar8[3] = iVar1;
    }
    if (iVar2 < 0) {
      iVar6 = piVar8[3];
    }
    if (iVar2 < 0 && iVar6 < iVar1) {
      piVar8[3] = iVar1;
    }
    bVar10 = iVar9 == 0;
    iVar7 = iVar9;
    if (0 < iVar9) {
      iVar1 = piVar8[4];
      iVar7 = iVar1 - iVar5;
      bVar10 = iVar1 == iVar5;
    }
    if (!bVar10 && iVar7 < 0 == (0 < iVar9 && SBORROW4(iVar1,iVar5))) {
      piVar8[4] = iVar5;
    }
    if (iVar9 < 0) {
      iVar1 = piVar8[4];
    }
    if (iVar9 < 0 && iVar1 < iVar5) {
      piVar8[4] = iVar5;
    }
    iVar7 = piVar8[3];
    iVar5 = piVar8[8];
    iVar1 = iVar5 - iVar7;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (0x100 < iVar1) {
      if (iVar7 < iVar5) {
        piVar4 = *(int **)(*(int *)(piVar8[2] + 4) + 100);
        (**(code **)(*piVar4 + 0x5c))(piVar4,1);
      }
      else if (iVar5 < iVar7) {
        piVar4 = *(int **)(*(int *)(piVar8[2] + 4) + 100);
        (**(code **)(*piVar4 + 0x5c))(piVar4,0);
      }
      piVar8[8] = piVar8[3];
    }
  }
  else {
    *(undefined1 *)(piVar8 + 10) = 0;
    piVar8[3] = iVar1;
    piVar8[4] = iVar5;
    piVar8[8] = piVar8[3];
  }
LAB_02161ad0:
  local_20 = (piVar8[4] >> 8) << 0xc;
  local_1c = (piVar8[3] >> 8) << 0xc;
  FUN_021519d0(piVar8[2],&local_1c,&local_20);
LAB_02161b0c:
  if (iVar2 == 0 && iVar9 == 0) {
    iVar2 = piVar8[5];
    uVar3 = FUN_021618c8(*piVar8);
    piVar4 = *(int **)(*(int *)(piVar8[2] + 4) + 100);
    (**(code **)(*piVar4 + 0x5c))(piVar4,uVar3);
  }
  else {
    iVar2 = piVar8[7];
  }
  if (piVar8[6] != iVar2) {
    piVar8[6] = iVar2;
    FUN_02023894(*(undefined4 *)(piVar8[2] + 4),iVar2,0);
    (**(code **)(**(int **)(*(int *)(piVar8[2] + 4) + 0x68) + 0x6c))();
    FUN_02028330(*(undefined4 *)(piVar8[2] + 4));
    (**(code **)(**(int **)(piVar8[2] + 4) + 0xd8))(*(int **)(piVar8[2] + 4),1);
  }
  return;
}

