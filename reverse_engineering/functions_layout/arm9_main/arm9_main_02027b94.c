
void FUN_02027b94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0xfff) >> 0xb == 0) {
    return;
  }
  uVar1 = FUN_0201b45c();
  uVar2 = FUN_02012318(param_2);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))(*(int **)(param_1 + 0x30),uVar1,uVar2);
  return;
}

