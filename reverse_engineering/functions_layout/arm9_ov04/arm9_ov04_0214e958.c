
void FUN_0214e958(int param_1,short *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = (int)*param_2;
  iVar2 = (int)param_2[2];
  if (iVar3 < iVar2) {
    iVar2 = iVar2 - iVar3;
  }
  else {
    iVar2 = iVar3 - iVar2;
  }
  if (iVar2 == 0) {
    return;
  }
  uVar5 = (uint)param_2[1];
  iVar2 = (int)param_2[3];
  if ((int)uVar5 < iVar2) {
    iVar2 = iVar2 - uVar5;
  }
  else {
    iVar2 = uVar5 - iVar2;
  }
  if (iVar2 == 0) {
    return;
  }
  for (; uVar5 < (uint)(int)param_2[3]; uVar5 = uVar5 + 1) {
    for (uVar4 = (uint)*param_2; uVar4 < (uint)(int)param_2[2]; uVar4 = uVar4 + 1) {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar1 + 0x88))(piVar1,uVar4,uVar5,param_3);
    }
  }
  return;
}

