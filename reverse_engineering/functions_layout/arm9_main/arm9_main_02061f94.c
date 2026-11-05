
void FUN_02061f94(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_020aeca8 == param_1) {
    if (DAT_020aecb8 != param_2) {
      FUN_02055684();
    }
  }
  else {
    while (DAT_020aeca8 != -3) {
      FUN_02053290(&DAT_020aecb0);
    }
    DAT_020aeca8 = param_1;
    DAT_020aecb8 = param_2;
  }
  DAT_020aecac = DAT_020aecac + 1;
  *DAT_020aeca0 = 0;
  OS_RestoreInterrupts(uVar1);
  return;
}

