
void FUN_02152680(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b65bc();
  *puVar2 = 1;
  iVar1 = (**(code **)(**(int **)(*(int *)(puVar2 + 0x134) + 4) + 0x194))();
  puVar2[1] = *(undefined1 *)(*(int *)(puVar2 + 0x14c) + iVar1);
  FUN_020282f4(*(undefined4 *)(*(int *)(puVar2 + 0xc) + 4));
  FUN_0207342c(0x78,0);
  FUN_0207538c(*(undefined4 *)(puVar2 + 0x140),puVar2[1]);
  FUN_02151924(3);
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(puVar2 + 8) + 4),&LAB_021500f4_1);
  return;
}

