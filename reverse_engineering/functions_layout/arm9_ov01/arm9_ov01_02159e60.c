
void FUN_02159e60(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x2f8) = param_2;
  for (uVar2 = 0; iVar1 = *(int *)(*(int *)(param_1 + 0xac) + 4), uVar2 < *(uint *)(iVar1 + 0x164);
      uVar2 = uVar2 + 1) {
    FUN_02159a74(iVar1,uVar2);
    iVar1 = FUN_0214d37c();
    (**(code **)(**(int **)(iVar1 + 4) + 0x170))(*(int **)(iVar1 + 4),0);
    iVar1 = FUN_0214d37c();
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0xdc) = param_2;
  }
  return;
}

