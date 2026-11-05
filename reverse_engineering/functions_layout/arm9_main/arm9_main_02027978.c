
void FUN_02027978(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 1) != 0) {
    uVar1 = FUN_0201b45c();
    (**(code **)(**(int **)(param_1 + 0x30) + 0x1c))(*(int **)(param_1 + 0x30),uVar1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  piVar2 = (int *)FUN_0201b45c(param_1);
  (**(code **)(*piVar2 + 0x28))();
  return;
}

