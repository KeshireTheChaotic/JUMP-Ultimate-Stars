
void FUN_02153af8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 4);
  (**(code **)(*(int *)piVar2[0x19] + 0x70))();
  (**(code **)(*piVar2 + 0xc4))();
  piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  if (param_2 == -1) {
    return;
  }
  uVar1 = FUN_0207452c(*(undefined4 *)(param_1 + 4),param_2 + -1);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x60) + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,uVar1);
  return;
}

