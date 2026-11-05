
void FUN_02166d04(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = *(int *)(*param_1 + param_2 * 4);
  if (iVar1 != 0) {
    FUN_0207a878(*(undefined4 *)(iVar1 + 0x14));
  }
  if (param_3 == 0) {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),0x300044,0);
    return;
  }
  FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),
               *(byte *)(*(int *)(iVar1 + 0x30) + 8) + 0x300042,0);
  return;
}

