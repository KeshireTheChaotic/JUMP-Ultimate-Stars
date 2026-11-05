
void FUN_02027a9c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x1f) >> 4 == 0) {
    return;
  }
  uVar1 = FUN_0201b45c();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))(*(int **)(param_1 + 0x30),uVar1);
  return;
}

