
void FUN_0215bb60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  
  local_1c = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x19c))();
  iVar1 = FUN_0215716c(param_1);
  iVar3 = 5;
  iVar5 = *(int *)(param_1 + 0x24);
  do {
    if ((local_1c < iVar1) && (local_1c != *(char *)(param_1 + 0x312))) {
      iVar6 = 0;
      do {
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        pcVar4 = *(code **)(*piVar2 + 0x88);
        (*pcVar4)(piVar2,iVar6,iVar3,0xb,param_1,iVar1,pcVar4);
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar2 + 0x88))(piVar2,iVar6,iVar3 + 1,0xb);
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar2 + 0x88))(piVar2,iVar6,iVar3 + 2,0xb);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x20);
    }
    else {
      iVar6 = 0;
      do {
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar2 + 0x88))(piVar2,iVar6,iVar3,10);
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar2 + 0x88))(piVar2,iVar6,iVar3 + 1,10);
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 100);
        (**(code **)(*piVar2 + 0x88))(piVar2,iVar6,iVar3 + 2,10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x20);
    }
    iVar3 = iVar3 + 3;
    local_1c = local_1c + 1;
  } while (iVar3 < 0x20);
  return;
}

