
void FUN_021b4498(void)

{
  if (DAT_021d5144 != (int *)0x0) {
    (**(code **)(*DAT_021d5144 + 4))();
    DAT_021d5144 = (int *)0x0;
  }
  FUN_021b52f4();
  FUN_020275ec(DAT_021d5140);
  DAT_021d5140 = 0;
  DAT_021d515c = 0;
  if (DAT_021d5148 != 0) {
    FUN_02028868();
    DAT_021d5148 = 0;
  }
  DAT_021d5158 = 0;
  FUN_020315e4();
  FUN_020315e4();
  return;
}

