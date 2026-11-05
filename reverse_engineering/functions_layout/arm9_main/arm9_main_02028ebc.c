
/* JUS-CLASS BattleAI::vfunc_05 [class-virtual] slot 5 of vtable 02094864 (own slot, not inherited)
    */

void BattleAI::vfunc_05(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_02028ac8();
  (**(code **)(param_1 + 8))();
  return;
}

