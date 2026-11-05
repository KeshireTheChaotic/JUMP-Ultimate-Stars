
void FUN_020470d8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_020104b4(param_2 | 0x46000000);
  (**(code **)(**(int **)(param_1 + 100) + 0x5c))
            (*(int **)(param_1 + 100),*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  return;
}

