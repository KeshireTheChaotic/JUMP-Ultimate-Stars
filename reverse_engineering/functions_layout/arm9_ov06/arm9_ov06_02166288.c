
void FUN_02166288(undefined4 param_1,int param_2)

{
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  FUN_02083648();
  *(char *)(*(int *)(param_2 + 0xc) + 0x14d) = *(char *)(*(int *)(param_2 + 0xc) + 0x14d) + -1;
  *(uint *)(*(int *)(param_2 + 0xc) + 0x148) =
       *(uint *)(*(int *)(param_2 + 0xc) + 0x148) & ~(1 << *(sbyte *)(param_2 + 0x23));
  return;
}

