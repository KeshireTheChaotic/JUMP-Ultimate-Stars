
void FUN_0215a47c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b7170();
  if (*(int *)(iVar2 + 0x304) == 2) {
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0xac) + 4),1);
    return;
  }
  *(undefined4 *)(iVar2 + 0x304) = 2;
  FUN_021594ec(iVar2);
  FUN_0215a778(iVar2);
  piVar1 = *(int **)(*(int *)(iVar2 + 0xac) + 4);
  if (piVar1[0x52] != 0) {
    (**(code **)(*piVar1 + 0x198))(piVar1,0);
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0xac) + 4),1);
  FUN_0207342c(0x78,3);
  return;
}

