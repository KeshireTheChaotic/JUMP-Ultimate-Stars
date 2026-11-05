
void FUN_0214fa3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0206aeec(*(int *)(param_1 + 0x18),8,param_3,param_4,param_4);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined2 *)(iVar1 + 0x16) = 0xffff;
    *(undefined1 *)(iVar1 + 0x18) = 0x10;
    *(undefined1 *)(iVar1 + 0x19) = 1;
    piVar2 = *(int **)(param_1 + 0x18);
    FUN_0206af1c(piVar2);
    FUN_02028330(*(undefined4 *)(*piVar2 + 4));
  }
  FUN_0214f834(param_1);
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  return;
}

