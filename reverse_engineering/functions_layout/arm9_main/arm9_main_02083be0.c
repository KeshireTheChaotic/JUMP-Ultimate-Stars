
void FUN_02083be0(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(uint *)(*(int *)(param_1 + 0x10) + 0x44) =
         *(uint *)(*(int *)(param_1 + 0x10) + 0x44) &
         ~(*(uint *)(iRam02083c3c + param_2 * 4) | *(uint *)(iRam02083c40 + param_2 * 4));
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x44) =
       *(uint *)(*(int *)(param_1 + 0x10) + 0x44) |
       *(uint *)((param_3 + -1) * 0x18 + iRam02083c3c + param_2 * 4);
  return;
}

