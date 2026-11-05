
void FUN_021c48a8(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_18;
  
  iVar6 = param_2[1] >> 0xc;
  iVar3 = *param_2 >> 0xc;
  iVar5 = 0;
  iVar4 = param_2[2];
  local_18 = 0;
  if (iVar6 != 0) {
    iVar5 = param_3 + (iVar3 + (int)*(short *)(param_4 + 4) * (iVar6 + -1)) * 8;
  }
  iVar1 = iVar6 + (param_2[3] >> 0xc);
  if (iVar1 < *(short *)(param_4 + 6) + -1) {
    local_18 = param_3 + (iVar3 + (iVar1 + 1) * (int)*(short *)(param_4 + 4)) * 8;
  }
  if (iVar5 != 0) {
    if ((*(char *)(iVar5 + 2) == '\x01') || (*(char *)(iVar5 + 2) == '\x03')) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar6,5,0xe,0,0);
      if ((iVar3 != 0) && ((*(char *)(iVar5 + -6) == '\x01' || (*(char *)(iVar5 + -6) == '\x03'))))
      {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar6 + -1,0x14,0xe,0,0);
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar6,2,0xe,0,0);
    }
    iVar5 = iVar5 + 8;
  }
  iVar4 = iVar3 + (iVar4 >> 0xc);
  local_34 = iVar3;
  while (local_34 = local_34 + 1, local_34 < iVar4) {
    if (iVar5 != 0) {
      if ((*(char *)(iVar5 + 2) == '\x01') || (*(char *)(iVar5 + 2) == '\x03')) {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,local_34,iVar6,6,0xe,0,0);
      }
      else {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,local_34,iVar6,3,0xe,0,0);
      }
      iVar5 = iVar5 + 8;
    }
  }
  if (iVar5 != 0) {
    if ((*(char *)(iVar5 + 2) == '\x01') || (*(char *)(iVar5 + 2) == '\x03')) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar4,iVar6,7,0xe,0,0);
      if ((iVar4 < *(short *)(param_4 + 4)) &&
         ((*(char *)(iVar5 + 10) == '\x01' || (*(char *)(iVar5 + 10) == '\x03')))) {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,iVar4,iVar6 + -1,0x15,0xe,0,0);
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar4,iVar6,4,0xe,0,0);
    }
  }
  while (iVar6 = iVar6 + 1, iVar6 < iVar1) {
    FUN_021c4cc8(param_1,param_2,5,iVar6);
  }
  if (local_18 != 0) {
    if ((*(char *)(local_18 + 2) == '\x01') || (*(char *)(local_18 + 2) == '\x03')) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1,5,0xe,0,0);
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1,8,0xe,0,0);
    }
    local_18 = local_18 + 8;
  }
  while (iVar3 = iVar3 + 1, iVar3 < iVar4) {
    if (local_18 != 0) {
      if ((*(char *)(local_18 + 2) == '\x01') || (*(char *)(local_18 + 2) == '\x03')) {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1,6,0xe,0,0);
      }
      else {
        piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
        (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,iVar1,9,0xe,0,0);
      }
      local_18 = local_18 + 8;
    }
  }
  if (local_18 != 0) {
    if ((*(char *)(local_18 + 2) == '\x01') || (*(char *)(local_18 + 2) == '\x03')) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar4,iVar1,7,0xe,0,0);
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar2 + 0x60))(piVar2,iVar4,iVar1,10,0xe,0,0);
    }
  }
  return;
}

