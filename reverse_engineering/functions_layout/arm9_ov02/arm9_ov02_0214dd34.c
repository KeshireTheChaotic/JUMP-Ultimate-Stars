
void FUN_0214dd34(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  bool in_ZR;
  int in_stack_00000020;
  
  if (in_ZR) {
    unaff_r5 = 0xc;
  }
  if (unaff_r4 == 0) {
    (**(code **)(**(int **)(unaff_r8 + 4) + 0xd8))();
    (**(code **)(**(int **)(unaff_r7 + 4) + 0xd8))(*(int **)(unaff_r7 + 4),0);
    (**(code **)(**(int **)(unaff_r6 + 4) + 0xd8))(*(int **)(unaff_r6 + 4),1);
    FUN_02023894(*(undefined4 *)(unaff_r6 + 4),in_stack_00000020 + unaff_r5,0);
    (**(code **)(**(int **)(*(int *)(unaff_r6 + 4) + 0x68) + 0x6c))();
    return;
  }
  (**(code **)(**(int **)(unaff_r6 + 4) + 0xd8))(*(int **)(unaff_r6 + 4),0);
  (**(code **)(**(int **)(unaff_r8 + 4) + 0xd8))(*(int **)(unaff_r8 + 4),1);
  (**(code **)(**(int **)(unaff_r7 + 4) + 0xd8))(*(int **)(unaff_r7 + 4),1);
  FUN_02023894(*(undefined4 *)(unaff_r7 + 4),in_stack_00000020 + unaff_r5,0);
  (**(code **)(**(int **)(*(int *)(unaff_r7 + 4) + 0x68) + 0x6c))();
  return;
}

