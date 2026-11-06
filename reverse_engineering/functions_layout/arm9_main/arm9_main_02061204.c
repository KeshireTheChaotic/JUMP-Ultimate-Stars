
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061204(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff94"] */
  pcVar1 = DAT_020aeba0;
  if (param_3 != 0) {
    if (DAT_020aeb9c != 0) {
      DAT_020aeb9c = 0;
    }
    if (DAT_020aeba0 != (code *)0x0) {
      DAT_020aeba0 = (code *)0x0;
      (*pcVar1)(6,DAT_020aeba4);
    }
  }
  uVar2 = (param_2 & 0x7f00) >> 8;
  if ((param_2 & 0xff) < 5) {
    (*(code *)((int)&switchD_0206124c::switchdataD_0206124e +
              (int)(short)(&switchD_0206124c::switchdataD_0206124e)[param_2 & 0xff]))();
    return;
  }
  if (uVar2 == 0x51) {
    if (DAT_020aebac != (code *)0x0) {
      (*DAT_020aebac)(6,DAT_020aebb0);
      return;
    }
  }
  else {
    if ((uVar2 == 0x40) && (DAT_020aebb4 != (undefined2 *)0x0)) {
      *DAT_020aebb4 = _DAT_027fff94;
    }
    pcVar1 = DAT_020aeba0;
    if (DAT_020aeb9c != 0) {
      DAT_020aeb9c = 0;
    }
    if (DAT_020aeba0 != (code *)0x0) {
      DAT_020aeba0 = (code *)0x0;
      (*pcVar1)(6,DAT_020aeba4);
    }
  }
  return;
}

