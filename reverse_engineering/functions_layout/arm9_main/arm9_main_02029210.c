
uint FUN_02029210(int param_1)

{
  return *(uint *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x18) &
         ~*(uint *)(param_1 + *(int *)(param_1 + 0x74) * 4 + 0x18);
}

