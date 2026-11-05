
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f2420(int param_1,int param_2)

{
  undefined2 *puVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808044"] */
  if ((*(ushort *)(param_2 + 0x24) & 0x4000) == 0) {
    if (*(short *)(param_2 + 0xc) == -1) {
      FUN_027e9474(param_1,param_2 + 0x18,*(ushort *)(param_2 + 0x16) + 0x24);
    }
    else {
      FUN_027e9438(param_1,param_2 + 0x18,*(undefined4 *)(param_2 + 0x3c),
                   *(undefined2 *)(param_2 + 0x16));
    }
  }
  else {
    if (*(short *)(_DAT_0380fff4 + 0x350) == 3) {
      FUN_027e9e08();
    }
    if (*(short *)(param_2 + 0xc) == -1) {
      FUN_027e93fc(param_1,param_2 + 0x18,param_2 + 0x3c,*(undefined2 *)(param_2 + 0x16));
    }
    else {
      FUN_027e93fc(param_1,param_2 + 0x18,*(undefined4 *)(param_2 + 0x3c),
                   *(undefined2 *)(param_2 + 0x16));
    }
    *(ushort *)(param_1 + 0x24) = _DAT_04808044 * 0x101;
    *(ushort *)(param_1 + 0x26) = _DAT_04808044 & 0xff | *(short *)(_DAT_0380fff4 + 0x336) << 0xe;
    if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) {
      puVar1 = (undefined2 *)(param_1 + (uint)*(ushort *)(param_2 + 0x22) + 5 & 0xfffffffe);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 4) != 0) {
    puVar1 = (undefined2 *)(param_1 + (uint)*(ushort *)(param_2 + 0x22) + 0xb & 0xfffffffc);
    *puVar1 = 0xb6b8;
    puVar1[1] = 0x1d46;
  }
  return;
}

