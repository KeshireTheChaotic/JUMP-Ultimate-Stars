
void FUN_0215b3d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (uVar5 = 0; uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar5 < uVar2;
      uVar5 = uVar5 + 1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 4) + 0xc0))(*(int **)(param_1 + 4),uVar5);
      iVar1 = FUN_0214f340();
    }
    if (uVar5 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    }
  }
  if (*(int *)(iVar6 + 0x44) != 0) {
    piVar3 = *(int **)(*(int *)(iVar6 + 0x44) + 4);
    pcVar4 = *(code **)(*piVar3 + 0x198);
    (*pcVar4)(piVar3,0,0x198,pcVar4,param_4);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x44) + 4),1);
    func_0x021b6214(*(undefined4 *)(**(int **)(iVar6 + 0x4c) + 4),1);
  }
  return;
}

