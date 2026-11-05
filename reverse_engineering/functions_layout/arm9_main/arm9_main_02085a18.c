
void FUN_02085a18(int *param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapObj.cpp" */
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
    *param_1 = 0;
  }
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 4); iVar1 = iVar1 + 1) {
    if (*(int *)(param_1[2] + iVar1 * 4) != 0) {
      FUN_02083648();
      *(undefined4 *)(param_1[2] + iVar1 * 4) = 0;
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  if (param_1[2] != 0) {
    FUN_0201b268();
  }
  FUN_0201b244(param_1);
  return;
}

