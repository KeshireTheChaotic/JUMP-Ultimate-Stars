
void FUN_02178a28(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint local_40;
  int local_38;
  uint local_30 [7];
  
  iVar5 = 0;
  local_38 = 0;
  iVar1 = FUN_02178448();
  iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
  if (1 < iVar1) {
    iVar4 = 0;
    iVar1 = FUN_02178448();
    iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
    if (0 < iVar1) {
      piVar6 = &DAT_021a34f8;
      do {
        iVar1 = FUN_02178448();
        uVar2 = FUN_0217fc04(*(undefined4 *)(iVar1 + 0xe4),iVar4);
        iVar1 = FUN_0217fa50(uVar2,s_dwc_eval_021a4b38,0xffffffff);
        if (local_38 < iVar1) {
          local_38 = iVar1;
        }
        iVar5 = iVar5 + *piVar6;
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + 1;
        iVar1 = FUN_02178448();
        iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
      } while (iVar4 < iVar1);
    }
    uVar3 = FUN_02175ba8(100);
    iVar4 = 0;
    iVar1 = FUN_02178448();
    iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
    if (0 < iVar1) {
      piVar6 = &DAT_021a34f8;
      puVar7 = local_30;
      do {
        iVar1 = FUN_02178448();
        iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
        if (iVar4 == iVar1 + -1) break;
        if (iVar4 < 1) {
          local_40 = 0;
        }
        else {
          local_40 = local_30[iVar4 + -1];
        }
        iVar1 = FUN_0200d12c(*piVar6 * 100,iVar5);
        *puVar7 = iVar1 + local_40;
        if (uVar3 < *puVar7) break;
        piVar6 = piVar6 + 1;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 1;
        iVar1 = FUN_02178448();
        iVar1 = FUN_0217fbf8(*(undefined4 *)(iVar1 + 0xe4));
      } while (iVar4 < iVar1);
    }
    if (local_38 < 0x7fffffff) {
      local_38 = local_38 + 1;
    }
    iVar1 = FUN_02178448();
    uVar2 = FUN_0217fc04(*(undefined4 *)(iVar1 + 0xe4),iVar4);
    FUN_0217faec(uVar2,s_dwc_eval_021a4b38,local_38);
    iVar1 = FUN_02178448();
    FUN_0217fbe8(*(undefined4 *)(iVar1 + 0xe4),0,s_dwc_eval_021a4b38,0);
  }
  return;
}

