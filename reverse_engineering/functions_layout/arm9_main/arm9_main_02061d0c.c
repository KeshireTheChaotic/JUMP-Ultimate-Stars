
void FUN_02061d0c(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_020aebd4;
  if (DAT_020aebd0 != 0) {
    DAT_020aebd0 = 0;
  }
  if (DAT_020aebd4 != (code *)0x0) {
    DAT_020aebd4 = (code *)0x0;
    (*pcVar1)(param_1,DAT_020aebd8);
  }
  return;
}

