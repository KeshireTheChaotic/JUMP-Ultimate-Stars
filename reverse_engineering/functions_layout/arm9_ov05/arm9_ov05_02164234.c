
uint FUN_02164234(int param_1)

{
  uint uVar1;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    return 0;
  case 1:
    uVar1 = FUN_02164410(*(undefined2 *)(param_1 + 4));
    return uVar1;
  case 2:
    uVar1 = FUN_02164434(*(undefined2 *)(param_1 + 4));
    return uVar1;
  case 3:
    return (uint)((*(uint *)(&DAT_020b0d34 + (uint)(*(ushort *)(param_1 + 4) >> 5) * 4) &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 4:
    return (uint)((*(uint *)(&DAT_020b0c94 + (uint)(*(ushort *)(param_1 + 4) >> 5) * 4) &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 5:
    uVar1 = *(ushort *)(param_1 + 4) + 1;
    return (uint)((*(uint *)(&DAT_020b0ba4 + (uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0);
  case 6:
    return (uint)((*(uint *)(&DAT_020b0ca4 + (uint)(*(ushort *)(param_1 + 4) >> 5) * 4) &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 7:
    uVar1 = *(ushort *)(param_1 + 4) + 1;
    return (uint)((*(uint *)(&DAT_020b0d20 + (uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0);
  case 8:
    return (uint)(((&DAT_020b0cdc)[*(ushort *)(param_1 + 4) >> 5] &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 9:
    return (uint)(((&DAT_020b0cf8)[*(ushort *)(param_1 + 4) >> 5] &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 10:
    return (uint)(((&DAT_020b0d10)[*(ushort *)(param_1 + 4) >> 5] &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  case 0xb:
    return (uint)((*(uint *)(&DAT_020b0d28 + (uint)(*(ushort *)(param_1 + 4) >> 5) * 4) &
                  1 << (*(ushort *)(param_1 + 4) & 0x1f)) != 0);
  default:
    return 0;
  }
}

