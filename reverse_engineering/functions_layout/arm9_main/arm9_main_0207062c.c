
void FUN_0207062c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    (&DAT_020afe5c)[iVar1] = 0xffffffff;
    iVar2 = iVar1 + 1;
    (&DAT_020afe74)[iVar1] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 6);
  DAT_020afe8c = 0;
  do {
    (&DAT_020afe44)[iVar3] = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

