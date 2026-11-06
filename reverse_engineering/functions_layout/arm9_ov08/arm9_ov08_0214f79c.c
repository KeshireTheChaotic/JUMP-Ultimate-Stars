
undefined4 FUN_0214f79c(code *param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  FUN_02053d2c(&DAT_0216cfac,&DAT_0216cf9c,4);
  if ((param_1 == (code *)0x0) || (param_2 == (code *)0x0)) {
    return 0xffffffff;
  }
  OS_DisableInterrupts();
  DAT_0216cf8c = param_1;
  DAT_0216cf98 = param_2;
  OS_RestoreInterrupts();
  DAT_0216cf94 = (*DAT_0216cf8c)(0x5890);
  if (DAT_0216cf94 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_0214f998(0x214f8a1,DAT_0216cf94,0x5890);
  if ((iVar1 == 0) || (FUN_02053bd8(&DAT_0216cfac,&local_18,1), 0xf < local_18)) {
    (*DAT_0216cf98)(DAT_0216cf94);
    return 0xffffffff;
  }
  uVar2 = (*(code *)((int)&switchD_0214f826::switchdataD_0214f828 +
                    (int)(short)(&switchD_0214f826::switchdataD_0214f828)[local_18]))();
  return uVar2;
}

