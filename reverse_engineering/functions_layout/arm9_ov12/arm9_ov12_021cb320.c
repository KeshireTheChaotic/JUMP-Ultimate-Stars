
ushort FUN_021cb320(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(*(int **)(param_1 + 0x4c),0x20);
  if (iVar1 == 0) {
    return *(ushort *)(param_1 + 0x38);
  }
  return *(ushort *)(param_1 + 0x38) >> 1;
}

