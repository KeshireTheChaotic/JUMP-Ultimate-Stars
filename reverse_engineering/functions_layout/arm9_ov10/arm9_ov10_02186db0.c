
void FUN_02186db0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (param_2 == 0) {
    FUN_02002068(s_peer____NULL_021a5ccc,s_gpiPeer_c_021a5cdc,0,0x213);
  }
  iVar2 = *(int *)(iVar3 + 0x434);
  if (iVar2 == param_2) {
    *(int *)(iVar3 + 0x434) = *(int *)(param_2 + 0x3c);
  }
  else {
    for (iVar3 = *(int *)(iVar2 + 0x3c); iVar3 != param_2; iVar3 = *(int *)(iVar3 + 0x3c)) {
      if (iVar3 == 0) {
        FUN_02002068(&DAT_021a5de0,s_gpiPeer_c_021a5cdc,0,0x225);
        FUN_02189470(param_1,s_Tried_to_remove_peer_not_in_list_021a5de4);
        return;
      }
      iVar2 = iVar3;
    }
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  iVar3 = FUN_0200131c(*(undefined4 *)(param_2 + 0x38));
  while (iVar3 != 0) {
    piVar1 = (int *)FUN_020012d8(*(undefined4 *)(param_2 + 0x38),0);
    if (piVar1[4] < 100) {
      FUN_02182cb8(param_1,*(undefined4 *)(param_2 + 0xc),piVar1[4],*piVar1 + piVar1[5]);
    }
    FUN_02001150(*(undefined4 *)(param_2 + 0x38),0);
    iVar3 = FUN_0200131c(*(undefined4 *)(param_2 + 0x38));
  }
  FUN_02186e6c(param_1,param_2);
  return;
}

