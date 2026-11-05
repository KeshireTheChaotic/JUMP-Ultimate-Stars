
void FUN_0207bc2c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = *(int **)(param_1 + 0x10);
  while (piVar3 != (int *)0x0) {
    iVar4 = piVar3[2];
    piVar5 = (int *)*piVar3;
    bVar7 = iVar4 != param_2;
    if (bVar7) {
      iVar4 = piVar3[3];
    }
    if (!bVar7 || iVar4 == param_2) {
      iVar4 = *(int *)(piVar3[3] + 0x20);
      if (iVar4 != 0) {
        piVar1 = (int *)*(int *)(iVar4 + 0x10);
        while (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
          if ((piVar1[3] == param_2) && (piVar1 != piVar3 && piVar1 != piVar5)) {
            FUN_0207ad04(piVar1,DAT_0214be08,iVar4);
          }
          piVar1 = (int *)iVar6;
        }
      }
      FUN_0207ad04(piVar3,DAT_0214be08,param_1);
    }
    piVar3 = piVar5;
  }
  iVar4 = 0;
  iVar6 = DAT_0214be08 + 0x9c;
  do {
    if (*(char *)(iVar6 + 0x13) != '\0') {
      iVar2 = 0;
      if (*(int *)(iVar6 + 8) == param_2) {
        iVar2 = *(int *)(iVar6 + 0xc);
      }
      if (*(int *)(iVar6 + 0xc) == param_2) {
        iVar2 = *(int *)(iVar6 + 8);
      }
      if (iVar2 != 0) {
        FUN_0207ad04(iVar6,DAT_0214be08,*(undefined4 *)(iVar2 + 0x20));
      }
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x14;
  } while (iVar4 < 0xc0);
  return;
}

