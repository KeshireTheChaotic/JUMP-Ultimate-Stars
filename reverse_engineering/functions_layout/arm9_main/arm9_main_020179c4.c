
uint FUN_020179c4(int param_1,uint param_2,int param_3)

{
  if ((param_2 & 1) == 1) {
    return *(byte *)(*(int *)(param_1 + 0xc) +
                    (param_3 * (uint)*(ushort *)(param_1 + 8) >> 1) + (param_2 >> 1)) & 0xf;
  }
  return (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) +
                             (param_3 * (uint)*(ushort *)(param_1 + 8) >> 1) + (param_2 >> 1)) >> 4;
}

