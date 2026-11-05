
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038049dc(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffaa","027fffac"] */
  iVar1 = FUN_03804588(0,0x10,1,param_1);
  if (iVar1 == 0) {
    uVar2 = local_10 & 0xf9ffffff;
    local_10._2_2_ = (ushort)(uVar2 >> 0x10) | 0x600;
    local_10._0_2_ = (undefined2)uVar2;
    _DAT_027fffaa = (undefined2)local_10;
    _DAT_027fffac = local_10._2_2_;
    FUN_038046d4(0x10,param_1 & 0xff);
  }
  return;
}

