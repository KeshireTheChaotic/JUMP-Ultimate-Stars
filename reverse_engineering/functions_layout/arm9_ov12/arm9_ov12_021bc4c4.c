
void FUN_021bc4c4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(FUN_021d0114 + param_2 * 4 + 4);
  iVar4 = (int)*(short *)(param_1 + 0x58) / 2;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  iVar5 = iVar3 + 8;
  (**(code **)(*piVar1 + 0x60))(piVar1,0,0,7,0xf,0,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,1,0,0xc,0xf,0,0);
  for (iVar2 = 2; iVar2 < *(short *)(param_1 + 0x58) + -2; iVar2 = iVar2 + 1) {
    if ((iVar2 < iVar4 + -4) || (iVar4 + 4 <= iVar2)) {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,0,0xd,0xf,0,0);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,1,0xe,0xf,0,0);
    }
    else {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,0,iVar3,0xf,0,0);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      iVar3 = iVar3 + 1;
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,1,iVar5,0xf,0,0);
      iVar5 = iVar5 + 1;
    }
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,0,0xc,0xf,1,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,iVar2 + 1,0,7,0xf,1,0);
  iVar4 = *(short *)(param_1 + 0x5a) + -1;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,iVar4,1,0xf,0,1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,1,iVar4,4,0xf,0,1);
  for (iVar2 = 2; iVar2 < *(short *)(param_1 + 0x58) + -2; iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,iVar4,5,0xf,0,1);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,iVar4,4,0xf,1,1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,iVar2 + 1,iVar4,1,0xf,1,1);
  for (iVar4 = 2; iVar4 <= *(short *)(param_1 + 0x5a) + -2; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,0,iVar4,3,0xf,0,0);
    for (iVar2 = 1; iVar2 <= *(short *)(param_1 + 0x58) + -2; iVar2 = iVar2 + 1) {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,iVar4,6,0xf,0,0);
    }
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar2,iVar4,3,0xf,1,0);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,1,8,0xf,0,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,*(short *)(param_1 + 0x58) + -1,1,8,0xf,1,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,1,1,9,0xf,0,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,*(short *)(param_1 + 0x58) + -2,1,9,0xf,1,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,2,10,0xf,0,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,*(short *)(param_1 + 0x58) + -1,2,10,0xf,1,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,*(short *)(param_1 + 0x5a) + -2,2,0xf,0,1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))
            (piVar1,*(short *)(param_1 + 0x58) + -1,*(short *)(param_1 + 0x5a) + -2,2,0xf,1,1);
  return;
}

