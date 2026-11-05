
void FUN_0215401c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0214f898(*(undefined4 *)(param_1 + 0x40),0x31305053,param_3,param_4,param_4);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x810002,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  FUN_02154248(param_1,6);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),&LAB_0215422c_1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x30) + 4),1);
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}

