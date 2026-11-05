
void FUN_02157bd4(int param_1)

{
  uint uVar1;
  
  if ((param_1 != 1) && (param_1 != 3)) {
    DAT_0216e720 = DAT_0216e720 ^ 1;
    FUN_02162378(8);
    uVar1 = (uint)DAT_0216e720;
    FUN_021547e4((&DAT_0216a8b8)[uVar1 * 4],(&DAT_0216a8bc)[uVar1 * 4],(&DAT_0216a8ba)[uVar1 * 4],
                 (&DAT_0216a8be)[uVar1 * 4]);
  }
  return;
}

