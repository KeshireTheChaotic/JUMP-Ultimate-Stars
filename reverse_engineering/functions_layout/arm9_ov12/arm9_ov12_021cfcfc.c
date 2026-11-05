
void FUN_021cfcfc(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  psVar1 = &DAT_021d50f4;
  iVar4 = 0;
  DAT_021d6754 = 0;
  DAT_021d6758 = 0x19d;
  puVar2 = &DAT_021d6bd4;
  iVar3 = 0;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x800);
  puVar6 = &DAT_021d677c;
  piVar5 = &DAT_021d6764;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    *piVar5 = (int)*psVar1;
    piVar5 = piVar5 + 1;
    psVar1 = psVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

