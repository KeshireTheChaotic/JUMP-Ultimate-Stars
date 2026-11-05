
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062cfc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027ffc00","027ffc10"] */
  if (_DAT_027ffc10 == 0) {
    piVar2 = (int *)&DAT_027ff800;
  }
  else {
    piVar2 = (int *)&DAT_027ffc00;
  }
  if (param_1 != *piVar2) {
    uVar1 = OS_DisableInterrupts();
    FUN_02062db4(0xe,0x11,0);
    OS_RestoreInterrupts(uVar1);
  }
  return;
}

