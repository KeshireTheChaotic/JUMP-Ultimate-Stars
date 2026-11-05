
void FUN_02151954(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_021519b4(param_1,1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 8) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)(iVar4 + iVar1 * 4 + 0x50);
      if (iVar2 != 0) {
        piVar3 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar3 + 0x148))(piVar3,0x10);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 7) {
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 4));
  }
  return;
}

