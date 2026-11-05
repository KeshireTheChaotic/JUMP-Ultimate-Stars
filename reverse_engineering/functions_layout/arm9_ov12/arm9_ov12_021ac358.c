
uint FUN_021ac358(byte *param_1)

{
  if (*(int *)param_1 << 0x1f < 0) {
    return *(uint *)(param_1 + 4);
  }
  return (uint)(*param_1 >> 1);
}

