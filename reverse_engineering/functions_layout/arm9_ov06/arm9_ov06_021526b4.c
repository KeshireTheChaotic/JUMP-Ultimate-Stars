
void FUN_021526b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x9c;
  iVar2 = 0x10;
  do {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_0206d444();
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x1c;
  } while (0 < iVar2);
  FUN_02078f88(*(undefined4 *)(param_1 + 0x98));
  (**(code **)(**(int **)(param_1 + 0x58) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x68) + 8))();
  (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  FUN_0201b244(param_1);
  return;
}

