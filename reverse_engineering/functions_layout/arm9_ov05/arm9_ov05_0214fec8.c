
void FUN_0214fec8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  if (piVar1[0x52] == 0) {
    return;
  }
  uVar2 = (**(code **)(*piVar1 + 0x194))();
  FUN_0214ff0c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + 4) + 0x15c),uVar2);
  return;
}

