
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205542c(byte *param_1)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":6}
                       io=["027ffc82","027ffc83","027ffc84","027ffc9a","027ffcd0","027ffce4"] */
  *param_1 = (byte)_DAT_027ffce4 & 7;
  param_1[1] = DAT_027ffc82 & 0xf;
  param_1[2] = DAT_027ffc83;
  param_1[3] = DAT_027ffc84;
  *(ushort *)(param_1 + 0x18) = (ushort)DAT_027ffc9a;
  *(ushort *)(param_1 + 0x4e) = (ushort)DAT_027ffcd0;
  MIi_CpuCopy16(0x27ffc86,param_1 + 4,0x14);
  MIi_CpuCopy16(0x27ffc9c,param_1 + 0x1a,0x34);
  return;
}

