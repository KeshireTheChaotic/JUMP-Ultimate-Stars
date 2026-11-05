
void FUN_02152d60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = param_2[1];
  iVar6 = param_2[2];
  iVar5 = (int)*(short *)(iVar3 + 0x16);
  if (65000 < *(short *)(iVar3 + 0x16)) {
    iVar5 = 65000;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar4 = (int)*(short *)(iVar3 + 0x18);
  if (iVar5 < *(short *)(iVar3 + 0x18)) {
    iVar4 = iVar5;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar6 != 0) {
    if ((*(uint *)(iVar3 + 0x3c) & 0x1000) == 0) {
      uVar1 = 100;
      if (iVar4 <= iVar5 >> 1) {
        uVar1 = FUN_0200d12c(iVar4 * 100,iVar5 >> 1,iVar3,param_4,param_4);
      }
      *(undefined4 *)(iVar6 + 0x4c) = 100;
      *(undefined4 *)(param_2[2] + 0x50) = uVar1;
      FUN_0206d484(param_2[2],*param_2);
    }
    else {
      *(undefined4 *)(iVar6 + 0x4c) = 0x32;
      *(undefined4 *)(param_2[2] + 0x50) = 0;
      FUN_0206d484(param_2[2],*param_2);
    }
  }
  iVar3 = (int)*(short *)(param_2 + 4);
  bVar7 = iVar3 == iVar5;
  if (bVar7) {
    iVar3 = (int)*(short *)((int)param_2 + 0x12);
  }
  if (bVar7 && iVar3 == iVar4) {
    return;
  }
  *(short *)(param_2 + 4) = (short)iVar5;
  *(short *)((int)param_2 + 0x12) = (short)iVar4;
  if (iVar4 != iVar5) {
    piVar2 = *(int **)(*(int *)(param_1 + (short)*(char *)(param_2 + 6) * 0x14) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    iVar5 = FUN_0200d12c(iVar4 << 5,iVar5);
    iVar3 = 1;
    do {
      iVar6 = 1;
      if ((iVar5 < 9) && (iVar6 = 9, 0 < iVar5)) {
        FUN_0200d12c(iVar5,9);
        iVar6 = 9 - extraout_r1;
      }
      piVar2 = *(int **)(*(int *)(*(char *)(param_2 + 6) * 0x14 + param_1 + iVar3 * 4) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      FUN_02023894(*(undefined4 *)
                    (*(int *)(*(char *)(param_2 + 6) * 0x14 + param_1 + iVar3 * 4) + 4),
                   iVar6 + 0x680000,0);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar3 < 5);
    *(undefined1 *)((int)param_2 + 0x19) = 1;
    return;
  }
  iVar5 = 0;
  do {
    piVar2 = *(int **)(*(int *)(*(char *)(param_2 + 6) * 0x14 + param_1 + iVar5 * 4) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if ((*(uint *)(param_2[1] + 0x3c) & 1) != 0) {
    return;
  }
  if (*(char *)((int)param_2 + 0x19) == '\0') {
    return;
  }
  *(undefined1 *)((int)param_2 + 0x19) = 0;
  FUN_0207342c(0x7a,8);
  return;
}

