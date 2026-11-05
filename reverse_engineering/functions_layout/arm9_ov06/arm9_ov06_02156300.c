
void FUN_02156300(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x78) == 0) ||
     ((*(uint *)(*(int *)(param_1 + 0x78) + 0x50) &
      (uint)*(ushort *)(&DAT_02171098 + (uint)*(byte *)(param_2 + 2) * 4)) == 0)) {
    FUN_021562e8(*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}

