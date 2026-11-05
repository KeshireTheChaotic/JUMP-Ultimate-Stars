
void FUN_021587a4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    DAT_0216e72c = FUN_02050750(DAT_0216e72c + 2,3);
  }
  else {
    DAT_0216e72c = FUN_02050750(DAT_0216e72c + 1,3);
  }
  FUN_02162378(8);
  uVar1 = (uint)DAT_0216e72c;
  FUN_021547e4((&DAT_0216a940)[uVar1 * 4],(&DAT_0216a944)[uVar1 * 4],(&DAT_0216a942)[uVar1 * 4],
               (&DAT_0216a946)[uVar1 * 4]);
  return;
}

