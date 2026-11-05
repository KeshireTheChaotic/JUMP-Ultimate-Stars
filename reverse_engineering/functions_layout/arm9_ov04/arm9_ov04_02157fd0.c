
bool FUN_02157fd0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  
                    /* JUS-TAG source_file_inferred="JQuizMainMultiScore.cpp" */
  uVar1 = (*(byte *)(*(int *)(*param_1 + 4) + 0x28) & 3) >> 1;
  bVar2 = uVar1 != 0;
  if (!bVar2) {
    uVar1 = *(uint *)(*(int *)(*(int *)(*param_1 + 4) + 0x34) + 0x244);
  }
  return bVar2 || uVar1 != 0;
}

