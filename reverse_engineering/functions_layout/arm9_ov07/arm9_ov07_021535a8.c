
void FUN_021535a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0214f898(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x3c),0x31305053,
                       param_3,param_4,param_4);
  iVar2 = FUN_0214f1bc(iVar1,0);
  if (iVar2 != 0) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0x810002,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    func_0x021b65cc();
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

