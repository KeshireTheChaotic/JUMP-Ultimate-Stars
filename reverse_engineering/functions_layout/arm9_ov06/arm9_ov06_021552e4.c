
int FUN_021552e4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_020329ec();
  iVar1 = FUN_02151294();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_18 = param_5 << 0xc;
  FUN_021512bc(iVar1,&local_18);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  local_20 = param_4 << 0xc;
  local_1c = param_3 << 0xc;
  FUN_021519d0(iVar1,&local_1c,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),param_6);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  return iVar1;
}

