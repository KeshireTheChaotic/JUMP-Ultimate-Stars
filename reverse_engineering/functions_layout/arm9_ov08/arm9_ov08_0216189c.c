
int FUN_0216189c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  *param_1 = DAT_0216e7ec + 0x1300;
  iVar4 = 0;
  iVar2 = *param_1;
  do {
    iVar1 = FUN_020024cc(iVar2 + 0x20,&DAT_0216ad3c,6);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 0x2a;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  return iVar3;
}

