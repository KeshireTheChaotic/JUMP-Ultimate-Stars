
void FUN_0215b454(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar2 + 0x70) = 1;
  piVar1 = *(int **)(*(int *)(iVar2 + 0x3c) + 4);
  pcVar3 = *(code **)(*piVar1 + 0x14c);
  (*pcVar3)(piVar1,8,0x14c,pcVar3,param_4);
  func_0x021b65cc();
  return;
}

