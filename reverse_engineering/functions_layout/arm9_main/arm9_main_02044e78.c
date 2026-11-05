
undefined2 * FUN_02044e78(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
  if (iVar1 == 0) {
    return (undefined2 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + param_2 * 4);
  }
  DAT_020a0f0c = 0;
  DAT_020a0f0e = (char)((int)(uint)*(ushort *)(param_1 + 0x2c) >> 3);
  DAT_020a0f0f = (char)((int)(uint)*(ushort *)(param_1 + 0x2e) >> 3);
  return &DAT_020a0f0c;
}

