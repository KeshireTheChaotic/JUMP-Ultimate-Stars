
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02173024(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = param_3 * 0x10c + param_1 + 0xa8;
  *(undefined4 *)(iVar5 + 0x20) = param_2;
  FUN_02028330(*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 4));
  if (param_4 == 0) {
    *(uint *)(iVar5 + 0xd4) = *(uint *)(iVar5 + 0xd4) & 0xfffffffe;
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & ~(byte)(1 << (param_3 & 0xff));
    FUN_0217d04c(iVar5);
  }
  else {
    *(uint *)(iVar5 + 0xd4) = *(uint *)(iVar5 + 0xd4) | 1;
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (byte)(1 << (param_3 & 0xff));
    FUN_0217d008(iVar5);
  }
  *(undefined1 *)(iVar5 + 0x105) = 1;
  *(undefined4 *)(iVar5 + 0xd8) = 0;
  uVar2 = BattleAI_Deck::BattleAIDeck_Create(*(undefined4 *)(iVar5 + 0x1c),param_3);
  *(undefined4 *)(iVar5 + 0x24) = uVar2;
  FUN_02173144(uVar2,param_4);
  iVar3 = FUN_02070cdc(param_3);
  uVar4 = *(undefined1 *)(iVar3 + 0x34);
  if (*(int *)(_DAT_02172960 + 0x154) == 5) {
    uVar4 = 0;
  }
  iVar3 = BattleAI_State::BattleAIState_Create
                    (*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(param_1 + 0x24),uVar4);
  *(int *)(iVar5 + 0x2c) = iVar3;
  bVar1 = *(byte *)(iVar3 + 0x2e);
  *(byte *)(iVar5 + 0x104) = bVar1;
  if (7 < bVar1) {
    *(undefined1 *)(iVar5 + 0x104) = 7;
  }
  *(undefined1 *)(iVar5 + 0x109) = 0;
  *(int *)(param_1 + param_3 * 4 + 0x98) =
       *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x20) + 0x1a8) + 0x10) + 0x5c) + 0xc;
  return iVar5;
}

