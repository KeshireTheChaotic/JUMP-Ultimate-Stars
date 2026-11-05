
void FUN_02027b14(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x7f) >> 6 == 0) {
    return;
  }
  uVar1 = FUN_0201b45c();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x34))(*(int **)(param_1 + 0x30),uVar1);
  return;
}

