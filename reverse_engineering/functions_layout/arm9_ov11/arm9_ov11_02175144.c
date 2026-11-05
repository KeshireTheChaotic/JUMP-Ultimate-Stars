
void FUN_02175144(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  if (*(int *)(param_1 + param_2 * 4 + 0x14) == 0) {
    return;
  }
  iVar1 = FUN_02083ab8();
  FUN_0207b000(*(undefined4 *)(iVar1 + 0xec),*(undefined4 *)(param_1 + param_2 * 4 + 0x14));
  iVar1 = param_1 + param_2 * 4;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(param_1 + param_2 + 0xc0) = 0xff;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  uVar2 = *(uint *)(param_1 + 0xa8);
  bVar4 = (uVar2 & 0x200) != 0;
  if (bVar4) {
    uVar2 = *(uint *)(iVar1 + 0x34);
  }
  if (bVar4 && uVar2 != 0) {
    FUN_020282f4(*(undefined4 *)(uVar2 + 4));
    piVar3 = *(int **)(*(int *)(param_1 + param_2 * 4 + 0x34) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    return;
  }
  return;
}

