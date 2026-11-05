
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03804a54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_r1;
  uint uVar3;
  undefined2 local_2c [2];
  undefined2 local_28;
  undefined2 local_26;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffaa","027fffac"] */
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 < 3) {
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        if (DAT_0380a9b4 != 1) {
          FUN_038046d4(1,3);
          return;
        }
        for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 8); uVar3 = uVar3 + 1) {
          iVar2 = FUN_03807acc(uVar3 * 0x107);
          FUN_03807acc(*(int *)(param_1 + 0xc) + iVar2,0x107);
          (&DAT_0380aa60)[uVar3] = extraout_r1;
          FUN_037fe0d0(&DAT_0380a9c0 + uVar3 * 0x28,(int)(short)(&DAT_0380aa60)[uVar3],10,
                       FUN_038049dc,uVar3);
        }
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,0);
        DAT_0380a9b4 = 2;
        return;
      }
      if (uVar3 != 2) {
        return;
      }
      if (DAT_0380a9b4 == 3) {
        FUN_037fdf78(0x54505641);
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,0);
        DAT_0380a9b4 = 0;
        return;
      }
      FUN_038046d4(2,3);
      return;
    }
  }
  else {
    if (uVar3 != 0x10) {
      return;
    }
    if (DAT_0380a9b4 != 2) {
      return;
    }
  }
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_038046b8(0);
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,4);
  }
  else {
    FUN_038046a0(0);
    OS_RestoreInterrupts(uVar1);
    FUN_0380504c(&local_28,DAT_0380a9b8,local_2c);
    FUN_03804c88(&local_28,local_2c[0]);
    _DAT_027fffaa = local_28;
    _DAT_027fffac = local_26;
    if (*(uint *)(param_1 + 4) == 0) {
      FUN_038046d4(0,0);
    }
    else {
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,*(uint *)(param_1 + 8) & 0xff);
    }
    FUN_0380465c(0);
  }
  return;
}

