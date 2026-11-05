
void FUN_02164e74(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = DAT_020afe9c;
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  piVar4 = *(int **)(*(int *)(iVar6 + 0x54) + 4);
  (**(code **)(*(int *)piVar4[0x19] + 0x70))();
  (**(code **)(*piVar4 + 0xc4))();
  uVar2 = FUN_02075190(*(undefined4 *)(iVar6 + 0x60),uVar1);
  piVar4 = *(int **)(*(int *)(*(int *)(iVar6 + 0x54) + 4) + 100);
  (**(code **)(*piVar4 + 0x68))(piVar4,uVar2);
  iVar5 = *(int *)(iVar6 + 0x14);
  iVar3 = FUN_020751a4(*(undefined4 *)(iVar6 + 0x60),uVar1);
  if (iVar3 == -1) {
    iVar3 = 0x2f;
  }
  else if (iVar3 == -2) {
    if (uVar1 < 0x13) {
      iVar3 = uVar1 + 0x1d;
    }
    else {
      iVar3 = uVar1 + 0xe;
    }
  }
  FUN_02023894(*(undefined4 *)(iVar5 + 4),iVar3 + 0xa01000,0);
  (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
  iVar3 = *(int *)(iVar6 + 0x18);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),DAT_020afea0 + 0x885000,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  iVar3 = *(int *)(iVar6 + 0x1c);
  if (DAT_020afeac < 0x332f) {
    if (DAT_020afeac < 0x224f) {
      uVar2 = 0x885003;
    }
    else {
      uVar2 = 0x885004;
    }
  }
  else {
    uVar2 = 0x885005;
  }
  FUN_02023894(*(undefined4 *)(iVar3 + 4),uVar2,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  iVar3 = *(int *)(iVar6 + 0x20);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),(DAT_020afebb == '\0') + 0x885006,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  iVar3 = *(int *)(iVar6 + 0x24);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),(DAT_020afebc == '\0') + 0x885006,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  if (*(char *)(iVar6 + 0x68) != '\0') {
    return;
  }
  iVar3 = 0;
  do {
    iVar5 = iVar6 + iVar3 * 4;
    iVar7 = *(int *)(iVar5 + 0x28);
    iVar5 = *(int *)(iVar5 + 0x38);
    if (iVar3 < DAT_020afe90) {
      if (iVar3 < DAT_020afe94) {
        FUN_02023894(*(undefined4 *)(iVar7 + 4),iVar3 + 0x885010,0);
        (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      }
      else {
        FUN_02023894(*(undefined4 *)(iVar7 + 4),iVar3 + 0x885013,0);
        (**(code **)(**(int **)(*(int *)(iVar7 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      }
      piVar4 = *(int **)(iVar5 + 4);
      if (DAT_020afebd == '\0') {
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
        uVar2 = extraout_r1_01;
      }
      else {
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
        FUN_02023894(*(undefined4 *)(iVar5 + 4),(char)(&DAT_020afebe)[iVar3] + 0x885019,0);
        (**(code **)(**(int **)(*(int *)(iVar5 + 4) + 0x68) + 0x6c))();
        uVar2 = extraout_r1_00;
      }
    }
    else {
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
      uVar2 = extraout_r1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if (DAT_020afebd == '\0') {
    uVar2 = 1;
  }
  piVar4 = *(int **)(*(int *)(iVar6 + 0x48) + 4);
  if (DAT_020afebd != '\0') {
    uVar2 = 0;
  }
  (**(code **)(*piVar4 + 0xd8))(piVar4,uVar2);
  return;
}

