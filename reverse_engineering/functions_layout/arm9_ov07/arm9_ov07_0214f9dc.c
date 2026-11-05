
void FUN_0214f9dc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((3 < param_2) && (param_2 < 7)) {
    iVar1 = FUN_0214f898(*(undefined4 *)(param_1 + 0x48),0x31305053);
    if (param_3 == 0) {
      param_2 = 2;
    }
    else {
      param_2 = param_2 - 4;
    }
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 | 0x818000,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  return;
}

