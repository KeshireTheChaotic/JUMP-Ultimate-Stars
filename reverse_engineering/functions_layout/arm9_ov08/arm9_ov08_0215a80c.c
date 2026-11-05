
void FUN_0215a80c(int param_1,int param_2)

{
  if (param_1 < (int)(uint)*(byte *)((int)DAT_0216e774 + 0x51)) {
    *(ushort *)(DAT_0216e774[param_2 + 4] + 4) =
         *(ushort *)(DAT_0216e774[param_2 + 4] + 4) & 0xfc00 |
         *(ushort *)
          ((int)DAT_0216e774 + (uint)*(byte *)(*DAT_0216e774 + param_1 * 0x2a + 0x28) * 2 + 0x42);
    *(ushort *)(DAT_0216e774[param_2 + 9] + 4) =
         *(ushort *)(DAT_0216e774[param_2 + 9] + 4) & 0xfc00 |
         *(ushort *)
          ((int)DAT_0216e774 + (uint)*(ushort *)(*DAT_0216e774 + param_1 * 0x2a + 0x26) * 2 + 0x48);
  }
  return;
}

