
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214fbc4(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = FUN_0207382c();
  if (iVar3 == 0) {
    return;
  }
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar5[1];
  }
  uVar4 = FUN_0214fb7c(*(undefined4 *)(pcVar5 + 4));
  FUN_0214d28c(uVar4,1,cVar2,iVar3);
  if (*(int *)(pcVar5 + 0x6c) != 0) {
    FUN_0206ae98();
    pcVar5[0x6c] = '\0';
    pcVar5[0x6d] = '\0';
    pcVar5[0x6e] = '\0';
    pcVar5[0x6f] = '\0';
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(pcVar5 + 0x70) != 0) {
    func_0x021bab64();
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
  }
  if (*(int *)(pcVar5 + 0x68) != 0) {
    func_0x021bd500();
    pcVar5[0x68] = '\0';
    pcVar5[0x69] = '\0';
    pcVar5[0x6a] = '\0';
    pcVar5[0x6b] = '\0';
  }
  iVar3 = 0;
  do {
    if (*(int **)(pcVar5 + iVar3 * 4 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(pcVar5 + iVar3 * 4 + 0x20) + 8))();
      pcVar1 = pcVar5 + iVar3 * 4 + 0x20;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    if (*(int **)(pcVar5 + iVar3 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(pcVar5 + iVar3 * 4 + 0xc) + 0xc))();
      pcVar1 = pcVar5 + iVar3 * 4 + 0xc;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int **)(pcVar5 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(pcVar5 + 4) + 8))();
    pcVar5[4] = '\0';
    pcVar5[5] = '\0';
    pcVar5[6] = '\0';
    pcVar5[7] = '\0';
  }
  func_0x021b65cc();
  FUN_0201b244(pcVar5);
  return;
}

