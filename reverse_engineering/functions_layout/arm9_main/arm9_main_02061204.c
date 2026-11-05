
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061204(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  
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
  uVar3 = (param_2 & 0x7f00) >> 8;
  switch(param_2 & 0xff) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 5;
    break;
  case 4:
    uVar2 = 1;
    break;
  default:
    uVar2 = 6;
  }
  if (uVar3 == 0x51) {
    if (DAT_020aebac != (code *)0x0) {
      (*DAT_020aebac)(uVar2,DAT_020aebb0);
      return;
    }
  }
  else {
    if ((uVar3 == 0x40) && (DAT_020aebb4 != (undefined2 *)0x0)) {
      *DAT_020aebb4 = _DAT_027fff94;
    }
    pcVar1 = DAT_020aeba0;
    if (DAT_020aeb9c != 0) {
      DAT_020aeb9c = 0;
    }
    if (DAT_020aeba0 != (code *)0x0) {
      DAT_020aeba0 = (code *)0x0;
      (*pcVar1)(uVar2,DAT_020aeba4);
    }
  }
  return;
}

