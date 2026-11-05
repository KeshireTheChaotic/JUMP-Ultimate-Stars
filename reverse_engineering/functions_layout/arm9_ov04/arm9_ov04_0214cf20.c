
void FUN_0214cf20(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(ushort *)(iVar1 + 0x8b8) =
       (ushort)((*param_2 * 0x1f + ((uint)(*param_2 * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >> 0xc) &
       0x1f | (ushort)(((*param_3 * 0x1f + ((uint)(*param_3 * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >>
                        0xc & 0x1f) << 5) |
       (ushort)(((*param_4 * 0x1f + ((uint)(*param_4 * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >> 0xc &
                0x1f) << 10) | 0x8000;
  *(undefined1 *)(iVar1 + 0x8fc) = 1;
  return;
}

