
void FUN_0215911c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x18 + param_1 + 0x7c;
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 0x100;
    if (*(short *)(iVar2 + 0xc) == 0xc) {
      FUN_0214e26c();
    }
    else if (*(short *)(iVar2 + 0xc) == 0x11) {
      FUN_021594bc();
    }
    FUN_021591f4(*(undefined4 *)(param_1 + 0x1a8),0);
    FUN_02159210(*(undefined4 *)(param_1 + 0x1a8),0);
    *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0x5ce) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 0;
    if (*(char *)(param_1 + 0x1eb) != '\0') {
      FUN_0214e2f4(0x1fff);
      piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 4));
      FUN_0214e30c();
    }
  }
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(iVar2 + 0xe) = 0;
  (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 4) + 0xd8))();
  return;
}

