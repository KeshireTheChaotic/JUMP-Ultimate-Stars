
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020489b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2a;
  undefined4 uStack_28;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fffa8"] */
  uStack_28 = param_4;
  if ((*(int *)(param_1 + 0xac) == 0) && ((int)(_DAT_027fffa8 & 0x8000) >> 0xf == 0)) {
    iVar1 = FUN_02060c78();
    uVar3 = 0;
    do {
      iVar2 = uVar3 + iVar1 + -3;
      if (iVar2 < 0) {
        iVar2 = uVar3 + iVar1 + 2;
      }
      if (*(short *)(&DAT_020a1c6c + iVar2 * 8) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      else if (*(short *)(&DAT_020a1c6e + iVar2 * 8) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        FUN_02060a04(&local_30);
        if ((local_2a & 1) == 0) {
          local_34 = (uint)local_30 << 0xc;
          FUN_02048ad4(param_1,&local_34);
        }
        if ((local_2a & 2) == 0) {
          local_38 = (uint)local_2e << 0xc;
          FUN_02048af0(param_1,&local_38);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  else {
    local_3c = 0;
    FUN_02048ad4(param_1,&local_3c);
    local_40 = 0;
    FUN_02048af0(param_1,&local_40);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

