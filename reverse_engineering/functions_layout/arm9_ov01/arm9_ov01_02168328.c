
void FUN_02168328(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x2c) + 4) + 0x68) + 0x68))();
  if (iVar1 != 0) {
    if (*(code **)(iVar2 + 0x40) != (code *)0x0) {
      (**(code **)(iVar2 + 0x40))(*(undefined4 *)(iVar2 + 0x44));
    }
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

