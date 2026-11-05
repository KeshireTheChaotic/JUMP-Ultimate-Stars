
void FUN_02152848(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0215ee44(iVar2 + 0x3dc);
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 100) + 4));
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x90) + 4));
  func_0x021b65cc();
  piVar1 = *(int **)(*(int *)(iVar2 + 0x184) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  return;
}

