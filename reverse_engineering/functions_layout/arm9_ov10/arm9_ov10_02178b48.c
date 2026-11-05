
undefined4 FUN_02178b48(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  bVar2 = false;
  iVar3 = FUN_02178448();
  iVar3 = FUN_0217fbf8(*(undefined4 *)(iVar3 + 0xe4));
  if (0 < iVar3) {
    do {
      iVar3 = FUN_02178448();
      uVar4 = FUN_0217fc04(*(undefined4 *)(iVar3 + 0xe4),iVar10);
      iVar3 = FUN_02178448();
      if (*(char *)(iVar3 + 0x15) == '\0') {
        iVar3 = FUN_0217fa50(uVar4,s_dwc_pid_021a4b44,0);
        bVar1 = false;
        iVar9 = 1;
        iVar5 = FUN_02178448();
        if (*(char *)(iVar5 + 0xd) != '\0') {
          iVar5 = 4;
          do {
            iVar6 = FUN_02178448();
            if (iVar3 == *(int *)(iVar6 + iVar5 + 0xf4)) {
              iVar3 = FUN_02178448();
              FUN_0217fc4c(*(undefined4 *)(iVar3 + 0xe4),uVar4);
              iVar10 = iVar10 + -1;
              bVar1 = true;
              break;
            }
            iVar5 = iVar5 + 4;
            iVar9 = iVar9 + 1;
            iVar6 = FUN_02178448();
          } while (iVar9 <= (int)(uint)*(byte *)(iVar6 + 0xd));
        }
        if (!bVar1) goto LAB_02178bd2;
      }
      else {
LAB_02178bd2:
        iVar3 = FUN_02178448();
        if (*(int *)(iVar3 + 0x46c) == 0) {
          uVar8 = FUN_02175ba8(0x80);
          FUN_0217faec(uVar4,s_dwc_eval_021a4b38,uVar8);
        }
        else {
          iVar3 = FUN_02178448();
          iVar5 = FUN_02178448();
          iVar3 = (**(code **)(iVar3 + 0x46c))(iVar10,*(undefined4 *)(iVar5 + 0x470));
          if (iVar3 < 1) {
            iVar3 = FUN_02178448();
            FUN_0217fc4c(*(undefined4 *)(iVar3 + 0xe4),uVar4);
            iVar10 = iVar10 + -1;
            bVar2 = true;
          }
          else {
            if (0x7fffff < iVar3) {
              iVar3 = 0x7fffff;
            }
            uVar7 = FUN_02175ba8(0x100);
            FUN_0217faec(uVar4,s_dwc_eval_021a4b38,iVar3 << 8 | uVar7);
          }
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = FUN_02178448();
      iVar3 = FUN_0217fbf8(*(undefined4 *)(iVar3 + 0xe4));
    } while (iVar10 < iVar3);
  }
  if (param_1 != 0) {
    iVar3 = FUN_02178448();
    iVar3 = FUN_0217fbf8(*(undefined4 *)(iVar3 + 0xe4));
    if (iVar3 != 0) {
      iVar3 = FUN_02178448();
      FUN_0217fbe8(*(undefined4 *)(iVar3 + 0xe4),0,s_dwc_eval_021a4b38,0);
    }
  }
  if (bVar2) {
    iVar3 = FUN_02178448();
    iVar3 = FUN_0217fbf8(*(undefined4 *)(iVar3 + 0xe4));
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

