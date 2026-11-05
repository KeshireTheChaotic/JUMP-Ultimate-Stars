
void FUN_02061f30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if ((DAT_020aeca8 == param_1) && (DAT_020aecac != 0)) {
    if (DAT_020aecb8 != param_2) {
      FUN_02055684();
    }
    DAT_020aecac = DAT_020aecac + -1;
    if (DAT_020aecac == 0) {
      DAT_020aeca8 = -3;
      DAT_020aecb8 = 0;
      FUN_02053210(&DAT_020aecb0);
    }
  }
  else {
    FUN_02055684();
  }
  *DAT_020aeca0 = 0;
  OS_RestoreInterrupts(uVar1);
  return;
}

