
void FUN_0214d61c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021c35fc(*(undefined4 *)(iVar3 + 0x20));
  FUN_02043264(1);
  FUN_02073ebc(2,1);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),FUN_0214d698);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x24) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x28) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  return;
}

