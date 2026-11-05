
void FUN_0216383c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*param_1 != 0) {
    FUN_0207a878(*(undefined4 *)(*param_1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + 4),
               *(byte *)(param_1[1] + 0xd) + 0x401200 + param_2,0,*(int *)(*param_1 + 0xc),param_4);
  (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  return;
}

