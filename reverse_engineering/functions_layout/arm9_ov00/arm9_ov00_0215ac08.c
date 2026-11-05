
void FUN_0215ac08(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 == 0x10) {
    func_0x021b65e0(*(undefined4 *)(param_1 + 4));
    return;
  }
  if (iVar1 != 0x20) {
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  puVar4 = (undefined4 *)piVar2[4];
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  func_0x021b65d8(*(undefined4 *)(param_1 + 4));
  for (uVar5 = 0; uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x16c))(), uVar5 < uVar3;
      uVar5 = uVar5 + 1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x170))(*(int **)(param_1 + 4),uVar5);
    iVar1 = FUN_0214ed84();
    func_0x021b7210(*(undefined4 *)(iVar1 + 4));
  }
  FUN_021587b8(*puVar4);
  return;
}

