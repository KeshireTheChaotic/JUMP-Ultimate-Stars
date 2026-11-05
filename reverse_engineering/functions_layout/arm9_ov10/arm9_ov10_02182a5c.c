
undefined4 FUN_02182a5c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_18 [2];
  
  iVar4 = *param_1;
  iVar1 = FUN_021875f8(param_1,param_2,local_18);
  if (iVar1 == 0) {
    FUN_0218912c(param_1,s_Invalid_profile__021a50dc);
    return 2;
  }
  FUN_02183b94(param_1,iVar4 + 500,s__delbuddy__021a50f0);
  FUN_02183b94(param_1,iVar4 + 500,s__sesskey__021a50fc);
  FUN_02183b70(param_1,iVar4 + 500,*(undefined4 *)(iVar4 + 0x198));
  FUN_02183b94(param_1,iVar4 + 500,s__delprofileid__021a5108);
  FUN_02183b70(param_1,iVar4 + 500,*local_18[0]);
  FUN_02183b94(param_1,iVar4 + 500,s__final__021a5118);
  if ((int *)local_18[0][2] != (int *)0x0) {
    iVar1 = *(int *)local_18[0][2];
    if (iVar1 < 0) {
      FUN_02002068(s_index_>__0_021a5120,s_gpiBuddy_c_021a512c,0,0x1fd);
    }
    FUN_02175814(*(undefined4 *)(local_18[0][2] + 8));
    *(undefined4 *)(local_18[0][2] + 8) = 0;
    FUN_02175814(*(undefined4 *)(local_18[0][2] + 0xc));
    *(undefined4 *)(local_18[0][2] + 0xc) = 0;
    FUN_02175814(local_18[0][2]);
    local_18[0][2] = 0;
    iVar2 = FUN_021874c0(local_18[0]);
    if (iVar2 != 0) {
      FUN_021875c0(param_1,local_18[0]);
    }
    piVar3 = (int *)(iVar4 + 0x430);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 < 0) {
      FUN_02002068(s_iconnection_>profileList_numBudd_021a5138,s_gpiBuddy_c_021a512c,0,0x204);
    }
    FUN_02187518(param_1,&LAB_02182b8c_1,iVar1);
  }
  return 0;
}

