
void FUN_0206af68(int *param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_50 [32];
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="CommonPaletteAnime.cpp" */
  uStack_10 = param_4;
  if (param_3 != 0) {
    FUN_0206af1c();
  }
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 4); iVar1 = iVar1 + 1) {
    local_50[iVar1] = param_2;
  }
  FUN_02029c68(*(undefined4 *)(param_1[1] + 4),local_50,*(undefined2 *)((int)param_1 + 0xe));
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  return;
}

