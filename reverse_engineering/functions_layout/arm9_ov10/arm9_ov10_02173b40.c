
undefined4 FUN_02173b40(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_1 + 0x1010);
  pcVar5 = *(code **)(param_1 + 0x1014);
  if (param_2[1] < param_2[2]) {
    return 0;
  }
  iVar1 = FUN_02004b04(param_3);
  uVar2 = (*pcVar4)(s_ALLOC_result_>entry_i__label_021a39e0,iVar1 + 1);
  *(undefined4 *)(*param_2 + param_2[2] * 8) = uVar2;
  iVar3 = param_2[2] * 8;
  iVar1 = *param_2;
  if (*(int *)(iVar1 + iVar3) != 0) {
    iVar1 = FUN_02004b04(param_4);
    uVar2 = (*pcVar4)(s_ALLOC_result_>entry_i__value_021a3a00,iVar1 + 1);
    *(undefined4 *)(*param_2 + param_2[2] * 8 + 4) = uVar2;
    iVar3 = param_2[2] * 8;
    iVar1 = *param_2;
    if (*(int *)(iVar1 + iVar3 + 4) != 0) {
      FUN_02004b18(*(undefined4 *)(iVar1 + iVar3),param_3);
      FUN_02004b18(*(undefined4 *)(*param_2 + param_2[2] * 8 + 4),param_4);
      param_2[2] = param_2[2] + 1;
      return 1;
    }
  }
  if (*(int *)(iVar1 + iVar3) != 0) {
    (*pcVar5)(s_FREE_result_>entry_i__label_021a3a20,*(int *)(iVar1 + iVar3),0);
    *(undefined4 *)(*param_2 + param_2[2] * 8) = 0;
  }
  iVar1 = *(int *)(*param_2 + param_2[2] * 8 + 4);
  if (iVar1 != 0) {
    (*pcVar5)(s_FREE_result_>entry_i__value_021a3a3c,iVar1,0);
    *(undefined4 *)(*param_2 + param_2[2] * 8 + 4) = 0;
  }
  return 0;
}

