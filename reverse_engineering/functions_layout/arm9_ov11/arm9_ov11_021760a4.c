
void FUN_021760a4(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iVar1 = FUN_02083ab8();
  FUN_0207b000(*(undefined4 *)(iVar1 + 0xec),*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0xff;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xffffffe7;
  return;
}

