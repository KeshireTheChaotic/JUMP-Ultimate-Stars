
void FUN_0215f008(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    pcVar3 = *(code **)(*piVar1 + 0xd8);
    (*pcVar3)(piVar1,0,pcVar3,param_4,param_4);
    piVar1 = *(int **)(*(int *)(param_1 + 0x38) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + iVar4 * 4 + 0x28);
      if (iVar2 != 0) {
        piVar1 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x38) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + iVar4 * 4 + 0x28);
      if (iVar2 != 0) {
        piVar1 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  FUN_0215f124(param_1,param_2);
  return;
}

