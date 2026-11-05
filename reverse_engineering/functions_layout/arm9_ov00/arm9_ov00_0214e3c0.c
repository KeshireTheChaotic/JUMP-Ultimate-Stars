
void FUN_0214e3c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0214e55c();
  if (iVar1 == 0) {
    return;
  }
  *(code **)(param_1 + 0x48) = FUN_0214e478;
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  iVar1 = FUN_0203b424(3);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x974) = 1;
  iVar1 = FUN_0203b424(3);
  uVar3 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x948))();
  FUN_020517fc(uVar3,0,0xc000);
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined2 *)(param_1 + 0x54) = 0;
  return;
}

