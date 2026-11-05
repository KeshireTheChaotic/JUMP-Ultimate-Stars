
void FUN_02060cec(uint param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  DAT_020aeb6c = 0;
  DAT_020aeb6e = (undefined2)param_2;
  DAT_020aeb74 = (undefined2)param_4;
  DAT_020aeb70 = param_3;
  if (param_4 != 0) {
    iVar3 = 0;
    do {
      *(undefined2 *)(DAT_020aeb70 + iVar3 + 4) = 0;
      iVar3 = iVar3 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_4);
  }
  uVar2 = OS_DisableInterrupts();
  iVar3 = FUN_020557c8(6,param_2 & 0xff | 0x2000100,0);
  if (iVar3 < 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_020557c8(6,param_1 | 0x1010000,0);
    if (iVar3 < 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (bVar1) {
    DAT_020aeb96 = DAT_020aeb96 | 2;
    DAT_020aeb94 = DAT_020aeb94 & 0xfffd;
    OS_RestoreInterrupts(uVar2);
  }
  else {
    OS_RestoreInterrupts(uVar2);
    DAT_020aeb94 = DAT_020aeb94 | 2;
    if (DAT_020aeb60 != (code *)0x0) {
      (*DAT_020aeb60)(1,4,0);
      return;
    }
  }
  return;
}

