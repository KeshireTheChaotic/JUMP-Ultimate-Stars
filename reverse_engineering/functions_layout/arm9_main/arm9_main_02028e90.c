
void FUN_02028e90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = jus_AllocDebug(0xe0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BattleAI::BattleAI();
  }
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(iVar2 + 8) = param_1;
  return;
}

