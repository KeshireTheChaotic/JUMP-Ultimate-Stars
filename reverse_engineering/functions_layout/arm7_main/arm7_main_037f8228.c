
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f8228(void)

{
  int iVar1;
  int iVar2;
  undefined2 auStack_304 [11];
  byte abStack_2ee [54];
  byte abStack_2b8 [160];
  ushort local_218 [2];
  int local_214;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [256];
  undefined1 auStack_108 [256];
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffcfa"] */
  FUN_027f6584(0x20,2,&local_214);
  local_214 = local_214 << 3;
  FUN_027f6584(local_214,0x100,auStack_208);
  FUN_027f6584(local_214 + 0x100,0x100,auStack_108);
  iVar1 = FUN_037f802c(auStack_208);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      MIi_CpuClear32(0,0x27ffc80,0x74);
    }
    else {
      if (abStack_2ee[iVar1 * 0x100] < 10) {
        for (iVar2 = 10; (int)(uint)abStack_2ee[iVar1 * 0x100] < iVar2; iVar2 = iVar2 + -1) {
          auStack_304[iVar1 * 0x80 + iVar2] = 0;
        }
      }
      if (abStack_2b8[iVar1 * 0x100] < 0x1a) {
        for (iVar2 = 0x1a; (int)(uint)abStack_2b8[iVar1 * 0x100] < iVar2; iVar2 = iVar2 + -1) {
          (abStack_2ee + iVar2 * 2 + iVar1 * 0x100)[0] = 0;
          (abStack_2ee + iVar2 * 2 + iVar1 * 0x100)[1] = 0;
        }
      }
      MIi_CpuCopy32(auStack_208 + (iVar1 + -1) * 0x100,0x27ffc80,0x74);
    }
  }
  else {
    MIi_CpuClear32(0xffffffff,0x27ffc80,0x74);
  }
  FUN_027f6584(0x36,6,auStack_210);
  FUN_037fe788(auStack_210,0x27ffcf4,6);
  FUN_027f6584(0x3c,2,local_218);
  _DAT_027ffcfa = FUN_03807f48(local_218[0] >> 1);
  return;
}

