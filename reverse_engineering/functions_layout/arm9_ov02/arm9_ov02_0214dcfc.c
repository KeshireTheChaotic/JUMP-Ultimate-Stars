
void FUN_0214dcfc(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int iVar1;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int in_stack_00000020;
  
  FUN_02023894(*(undefined4 *)(unaff_r8 + 4),param_2 + unaff_r4,0);
  (**(code **)(**(int **)(*(int *)(unaff_r8 + 4) + 0x68) + 0x6c))();
  iVar1 = unaff_r9 + unaff_r4 * -10;
  if (unaff_r9 == -1) {
    iVar1 = 0xc;
  }
  if (unaff_r4 == 0) {
    (**(code **)(**(int **)(unaff_r8 + 4) + 0xd8))();
    (**(code **)(**(int **)(unaff_r7 + 4) + 0xd8))(*(int **)(unaff_r7 + 4),0);
    (**(code **)(**(int **)(unaff_r6 + 4) + 0xd8))(*(int **)(unaff_r6 + 4),1);
    FUN_02023894(*(undefined4 *)(unaff_r6 + 4),in_stack_00000020 + iVar1,0);
    (**(code **)(**(int **)(*(int *)(unaff_r6 + 4) + 0x68) + 0x6c))();
    return;
  }
  (**(code **)(**(int **)(unaff_r6 + 4) + 0xd8))(*(int **)(unaff_r6 + 4),0);
  (**(code **)(**(int **)(unaff_r8 + 4) + 0xd8))(*(int **)(unaff_r8 + 4),1);
  (**(code **)(**(int **)(unaff_r7 + 4) + 0xd8))(*(int **)(unaff_r7 + 4),1);
  FUN_02023894(*(undefined4 *)(unaff_r7 + 4),in_stack_00000020 + iVar1,0);
  (**(code **)(**(int **)(*(int *)(unaff_r7 + 4) + 0x68) + 0x6c))();
  return;
}

