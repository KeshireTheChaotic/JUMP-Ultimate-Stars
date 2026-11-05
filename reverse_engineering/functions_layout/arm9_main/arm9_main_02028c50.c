
/* JUS-CLASS BattleAI::BattleAI [class-source-file] stores vtable 02094864 into *this (constructor)
    */

undefined4 * BattleAI::BattleAI(undefined4 *param_1)

{
  undefined4 *puVar2;
  undefined4 *puVar1;
  uint uVar3;
  uint uVar4;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf;
  param_1[5] = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  puVar1 = param_1 + 0x22;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = 0;
    puVar1 = puVar2;
  } while (puVar2 < param_1 + 0x24);
  puVar1 = param_1 + 0x24;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = 0;
    puVar1 = puVar2;
  } while (puVar2 < param_1 + 0x34);
  FUN_02028d10();
  param_1[0x37] = 0;
  FUN_02029284(param_1);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    param_1[uVar3 + 6] = 0;
    uVar3 = uVar4;
  } while (uVar4 < 4);
  return param_1;
}

