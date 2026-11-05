
void FUN_02159aec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int local_1c;
  
  local_1c = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x19c))();
  iVar1 = FUN_0215716c(param_1);
  iVar5 = 5;
  iVar7 = *(int *)(param_1 + 0x24);
  do {
    if (local_1c < iVar1) {
      uVar2 = FUN_021571a8(param_1,local_1c);
      FUN_020769cc(*(undefined4 *)(param_1 + 0x2d0),uVar2);
    }
    if ((local_1c < iVar1) && (iVar3 = FUN_0207879c(*(undefined4 *)(param_1 + 0x2d0)), iVar3 == 0))
    {
      iVar3 = 0;
      do {
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        pcVar6 = *(code **)(*piVar4 + 0x88);
        (*pcVar6)(piVar4,iVar3,iVar5,0xb,param_1,iVar1,pcVar6);
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar4 + 0x88))(piVar4,iVar3,iVar5 + 1,0xb);
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar4 + 0x88))(piVar4,iVar3,iVar5 + 2,0xb);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
    }
    else {
      iVar3 = 0;
      do {
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar4 + 0x88))(piVar4,iVar3,iVar5,10);
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar4 + 0x88))(piVar4,iVar3,iVar5 + 1,10);
        piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
        (**(code **)(*piVar4 + 0x88))(piVar4,iVar3,iVar5 + 2,10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
    }
    iVar5 = iVar5 + 3;
    local_1c = local_1c + 1;
  } while (iVar5 < 0x20);
  return;
}

