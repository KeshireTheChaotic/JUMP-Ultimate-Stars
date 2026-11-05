
void FUN_021567bc(int param_1,ushort *param_2)

{
  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  (*(code *)(&PTR_FUN_02172020)[*param_2 & 0xff])();
  return;
}

