
void FUN_02153ff4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = *(int **)(iVar1 + 4);
  pcVar3 = *(code **)(*piVar2 + 0x148);
  (*pcVar3)(piVar2,0x10,pcVar3,param_4,param_4);
  return;
}

