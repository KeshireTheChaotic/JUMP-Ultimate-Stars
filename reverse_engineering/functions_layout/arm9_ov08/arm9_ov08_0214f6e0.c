
undefined4 FUN_0214f6e0(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  bVar1 = true;
  uVar3 = 0xffffffff;
  if (DAT_0216cf98 == (code *)0x0) {
    return 0xffffffff;
  }
  iVar2 = FUN_0214fb40();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  do {
    FUN_02053bd8(&DAT_0216cfac,&local_10,1);
    switch(local_10) {
    default:
      bVar1 = false;
      break;
    case 4:
    case 5:
      break;
    case 0x14:
      bVar1 = false;
      uVar3 = 0;
      (*DAT_0216cf98)(DAT_0216cf94);
    }
  } while (bVar1);
  OS_DisableInterrupts();
  DAT_0216cf8c = 0;
  DAT_0216cf98 = (code *)0x0;
  OS_RestoreInterrupts();
  return uVar3;
}

