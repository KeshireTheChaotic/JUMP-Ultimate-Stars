
void FUN_021bc1a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  for (iVar4 = 0; iVar4 < *(short *)(param_1 + 0x5a);
      iVar4 = iVar4 + *(short *)(param_1 + 0x5a) + -1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,0,iVar4,1,0xf,0,uVar2,param_4);
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,1,iVar4,4,0xf,0,uVar2);
    for (iVar3 = 2; iVar3 < *(short *)(param_1 + 0x58) + -2; iVar3 = iVar3 + 1) {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,iVar4,5,0xf,0,uVar2);
    }
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,iVar4,4,0xf,1,uVar2);
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar3 + 1,iVar4,1,0xf,1,uVar2);
    uVar2 = 1;
  }
  for (iVar4 = 1; iVar4 <= *(short *)(param_1 + 0x5a) + -2; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,0,iVar4,3,0xf,0,0);
    for (iVar3 = 1; iVar3 <= *(short *)(param_1 + 0x58) + -2; iVar3 = iVar3 + 1) {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,iVar4,6,0xf,0,0);
    }
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,iVar4,3,0xf,1,0);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,1,2,0xf,0,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,*(short *)(param_1 + 0x58) + -1,1,2,0xf,1,0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))(piVar1,0,*(short *)(param_1 + 0x5a) + -2,2,0xf,0,1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
  (**(code **)(*piVar1 + 0x60))
            (piVar1,*(short *)(param_1 + 0x58) + -1,*(short *)(param_1 + 0x5a) + -2,2,0xf,1,1);
  return;
}

