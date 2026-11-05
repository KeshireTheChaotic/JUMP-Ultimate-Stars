
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03804280(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc10"] */
  if (_DAT_027ffc10 == 0) {
    piVar1 = (int *)&DAT_027ff800;
  }
  else {
    piVar1 = (int *)&DAT_027ffc00;
  }
  iVar2 = *piVar1;
  iVar3 = FUN_03803c50();
  DAT_0380a4e8 = (uint)(iVar3 != iVar2);
  return;
}

