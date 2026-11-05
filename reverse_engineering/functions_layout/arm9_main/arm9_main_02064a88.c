
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02064a88(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc40"] */
  iVar1 = FUN_02064da8();
  if (_DAT_027ffc40 == 2) {
    iVar6 = 0;
    if ((*(byte *)((int)param_1 + 0x1f) & 2) != 0) {
      uVar3 = *param_1;
      uVar2 = FUN_0200d12c(0,0x14);
      if (uVar3 < uVar2) {
        iVar6 = FUN_02064b2c(uVar3 * 0x14 + 0x20a05a4,param_1[1],iVar1);
      }
    }
    if (iVar6 == 0) {
      FUN_020517fc(param_1[1],0,iVar1);
      FUN_02055684();
      return;
    }
  }
  if ((*(byte *)((int)param_1 + 0x1f) & 1) != 0) {
    MIi_UncompressBackward(param_1[1] + iVar1);
  }
  DC_FlushRange(param_1[1],param_1[2]);
  puVar5 = (undefined4 *)param_1[5];
  for (puVar4 = (undefined4 *)param_1[4]; puVar4 < puVar5; puVar4 = puVar4 + 1) {
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

