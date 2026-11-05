
void FUN_02166ca8(int *param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 1); iVar1 = iVar1 + 1) {
    if (*(int *)(*param_1 + iVar1 * 4) != 0) {
      FUN_02083648();
      *(undefined4 *)(*param_1 + iVar1 * 4) = 0;
    }
  }
  if (*param_1 != 0) {
    FUN_0201b268();
  }
  FUN_0201b244(param_1);
  return;
}

