
void FUN_02153f6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x60) + 4);
  pcVar2 = *(code **)(*piVar1 + 0xd8);
  (*pcVar2)(piVar1,0,pcVar2,param_4,param_4);
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x49e); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x1a4) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  return;
}

