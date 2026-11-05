
void FUN_021c35fc(int *param_1)

{
  while ((*(byte *)((int)param_1 + 0xa9) & 1) != 0) {
    (*DAT_020a0e18)();
  }
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  FUN_02028384(*(undefined4 *)(*param_1 + 4),0x21c3aa9);
  (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))(*(int **)(param_1[2] + 4),0);
  FUN_021c3488(param_1,0,0);
  *(byte *)((int)param_1 + 0xa9) = *(byte *)((int)param_1 + 0xa9) & 0xf7;
  FUN_020282f4(*(undefined4 *)(param_1[1] + 4));
  return;
}

