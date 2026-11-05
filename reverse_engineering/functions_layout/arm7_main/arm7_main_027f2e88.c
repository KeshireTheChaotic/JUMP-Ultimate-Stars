
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f2e88(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  short sVar4;
  uint uVar5;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808044"] */
  sVar4 = _DAT_04808044 * 0x101;
  if (sVar4 == 0) {
    sVar4 = 1;
  }
  FUN_027e9364(sVar4);
  FUN_027ec420(param_1,sVar4);
  uVar2 = FUN_027e93b0(param_2 + 0x33);
  puVar3 = (undefined2 *)(param_2 + 0x34);
  for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 2) {
    uVar1 = FUN_027e9334();
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return;
}

