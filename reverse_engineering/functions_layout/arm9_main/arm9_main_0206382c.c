
undefined4 FUN_0206382c(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined1 auStack_98 [132];
  
  pcVar10 = *(char **)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x40);
  FUN_020633d8(param_1,2);
  cVar1 = *pcVar10;
  do {
    if (cVar1 == '\0') {
      if (iVar5 == 0) {
        return 1;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x44);
      uVar6 = *(undefined4 *)(param_1 + 0x24);
      *puVar7 = *(undefined4 *)(param_1 + 0x20);
      puVar7[1] = uVar6;
      puVar7[2] = *(undefined4 *)(param_1 + 0x28);
      return 0;
    }
    iVar8 = 0;
    while( true ) {
      cVar2 = pcVar10[iVar8];
      bVar3 = false;
      if (((cVar2 != '\0') && (cVar2 != '/')) && (cVar2 != '\\')) {
        bVar3 = true;
      }
      if (!bVar3) break;
      iVar8 = iVar8 + 1;
    }
    if ((cVar2 != '\0') || (iVar9 = 0, iVar5 != 0)) {
      iVar9 = 1;
    }
    if (iVar8 == 0) {
      return 1;
    }
    if (cVar1 == '.') {
      if (iVar8 == 1) {
        pcVar10 = pcVar10 + 1;
      }
      else {
        if (iVar8 != 2 || pcVar10[1] != '.') goto LAB_020638b6;
        if (*(short *)(param_1 + 0x24) != 0) {
          FUN_02063ad4(param_1,*(undefined4 *)(param_1 + 0x2c));
        }
        pcVar10 = pcVar10 + 2;
      }
    }
    else {
LAB_020638b6:
      if (0x7f < iVar8) {
        return 1;
      }
      *(undefined4 **)(param_1 + 0x30) = &local_ac;
      *(undefined4 *)(param_1 + 0x34) = 0;
      do {
        iVar4 = FUN_020633d8(param_1,3);
        if (iVar4 != 0) {
          return 1;
        }
      } while (((iVar9 != local_a0) || (iVar8 != local_9c)) ||
              (iVar4 = FUN_02063b6c(pcVar10,auStack_98,iVar8), iVar4 != 0));
      if (iVar9 == 0) {
        if (iVar5 == 0) {
          puVar7 = *(undefined4 **)(param_1 + 0x44);
          *puVar7 = local_ac;
          puVar7[1] = local_a8;
          return 0;
        }
        return 1;
      }
      pcVar10 = pcVar10 + iVar8;
      *(undefined4 *)(param_1 + 0x30) = local_ac;
      *(undefined4 *)(param_1 + 0x34) = local_a8;
      *(undefined4 *)(param_1 + 0x38) = local_a4;
      FUN_020633d8(param_1,2);
    }
    pcVar10 = pcVar10 + (*pcVar10 != '\0');
    cVar1 = *pcVar10;
  } while( true );
}

