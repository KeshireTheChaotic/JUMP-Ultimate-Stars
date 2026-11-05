
void FUN_0214f24c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  *(int *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) {
    FUN_0214fe54(*(undefined4 *)(param_1 + 0x14));
  }
  else if (param_2 == 1) {
    FUN_021590b0(*(undefined4 *)(param_1 + 0x18),0);
  }
  FUN_0215502c(*(undefined4 *)(param_1 + 0x1c));
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),FUN_0214f2b0);
  return;
}

