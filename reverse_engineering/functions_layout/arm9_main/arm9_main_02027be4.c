
void FUN_02027be4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x1fff) >> 0xc == 0) {
    return;
  }
  uVar1 = FUN_0201b45c();
  uVar2 = FUN_02012318(param_2);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x40))(*(int **)(param_1 + 0x30),uVar1,uVar2);
  return;
}

