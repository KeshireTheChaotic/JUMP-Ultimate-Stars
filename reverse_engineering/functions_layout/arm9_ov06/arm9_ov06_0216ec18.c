
void FUN_0216ec18(int param_1,int param_2,int param_3)

{
  if ((*(ushort *)(param_2 + 0x26) & 0x10) == 0) {
    return;
  }
  if ((param_3 == 1) && (param_1 != 0)) {
    FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),
               *(undefined4 *)(*(int *)(param_2 + 8) + 0x18),0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  *(ushort *)(param_2 + 0x26) = *(ushort *)(param_2 + 0x26) & 0xffef;
  return;
}

