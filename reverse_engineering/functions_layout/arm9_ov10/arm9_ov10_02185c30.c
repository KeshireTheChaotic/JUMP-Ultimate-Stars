
int FUN_02185c30(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int local_280;
  undefined1 **local_27c;
  int local_278;
  int local_274;
  undefined4 local_270;
  char acStack_26c [64];
  undefined1 local_22c [31];
  undefined1 local_20d [21];
  undefined1 local_1f8 [51];
  undefined1 local_1c5 [31];
  undefined1 local_1a6 [31];
  undefined1 local_187 [51];
  undefined1 *local_154 [7];
  undefined1 *local_138 [2];
  undefined1 local_12d;
  undefined1 *apuStack_12c [3];
  undefined1 local_120 [128];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [80];
  
  iVar6 = *param_1;
  iVar2 = FUN_021893dc(param_1,param_3,1);
  if (iVar2 != 0) {
    return 4;
  }
  iVar2 = FUN_02004cec(param_3,&DAT_021a5b50,4);
  if (iVar2 != 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5b58);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar2 = FUN_02189328(param_3,s__profileid__021a5920,acStack_26c,0x40);
  if (iVar2 == 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5b58);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar2 = FUN_02005f14(acStack_26c);
  if (iVar2 < 1) {
    FUN_02002068(s_profileid_>_0_021a5b88,s_gpiInfo_c_021a5b98,0,0x15a);
  }
  FUN_021875f8(param_1,iVar2,&local_278);
  local_280 = 7;
  ppuVar1 = local_154;
  do {
    local_27c = ppuVar1;
    *local_27c = (undefined1 *)0x0;
    local_27c[1] = (undefined1 *)0x0;
    local_27c[2] = (undefined1 *)0x0;
    local_27c[3] = (undefined1 *)0x0;
    local_27c[4] = (undefined1 *)0x0;
    local_27c[5] = (undefined1 *)0x0;
    local_27c[6] = (undefined1 *)0x0;
    local_27c[7] = (undefined1 *)0x0;
    local_280 = local_280 + -1;
    ppuVar1 = local_27c + 8;
  } while (local_280 != 0);
  local_27c[8] = (undefined1 *)0x0;
  local_27c[9] = (undefined1 *)0x0;
  local_27c[10] = (undefined1 *)0x0;
  local_27c[0xb] = (undefined1 *)0x0;
  local_154[0] = local_22c;
  local_154[1] = local_20d;
  local_154[2] = local_1f8;
  local_154[3] = local_1c5;
  local_154[4] = local_1a6;
  local_154[5] = local_64;
  local_8c = local_187;
  iVar3 = FUN_02189328(param_3,s__nick__021a596c,local_154[0],0x1f);
  if (iVar3 == 0) {
    *local_154[0] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__uniquenick__021a5974,local_154[1],0x15);
  if (iVar3 == 0) {
    *local_154[1] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__email__021a5984,local_154[2],0x33);
  if (iVar3 == 0) {
    *local_154[2] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__firstname__021a5998,local_154[3],0x1f);
  if (iVar3 == 0) {
    *local_154[3] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__lastname__021a59a4,local_154[4],0x1f);
  if (iVar3 == 0) {
    *local_154[4] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__icquin__021a5a04,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_154[6] = (undefined1 *)0xffffffff;
  }
  else {
    local_154[6] = (undefined1 *)FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__homepage__021a59b0,local_154[5],0x4c);
  if (iVar3 == 0) {
    *local_154[5] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__zipcode__021a59bc,local_138,0xb);
  if (iVar3 == 0) {
    local_138[0]._0_1_ = 0;
  }
  iVar3 = FUN_02189328(param_3,s__countrycode__021a59e0,&local_12d,3);
  if (iVar3 == 0) {
    local_12d = 0;
  }
  iVar3 = FUN_02189328(param_3,s__lon__021a5ba4,acStack_26c,0x40);
  if (iVar3 == 0) {
    apuStack_12c[1] = (undefined1 *)0x0;
  }
  else {
    FUN_02005954(acStack_26c);
    apuStack_12c[1] = (undefined1 *)FUN_0200b6c4();
  }
  iVar3 = FUN_02189328(param_3,s__lat__021a5bac,acStack_26c,0x40);
  if (iVar3 == 0) {
    apuStack_12c[2] = (undefined1 *)0x0;
  }
  else {
    FUN_02005954(acStack_26c);
    apuStack_12c[2] = (undefined1 *)FUN_0200b6c4();
  }
  iVar3 = FUN_02189328(param_3,s__loc__021a5bb4,local_120,0x80);
  if (iVar3 == 0) {
    local_120[0] = 0;
  }
  iVar3 = FUN_02189328(param_3,s__birthday__021a5950,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
  }
  else {
    uVar4 = FUN_02005f14(acStack_26c);
    iVar3 = FUN_021863cc(param_1,uVar4,&local_a0,&local_9c,&local_98);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  iVar3 = FUN_02189328(param_3,s__sex__021a59fc,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_94 = 0x502;
  }
  else if (acStack_26c[0] == '0') {
    local_94 = 0x500;
  }
  else if (acStack_26c[0] == '1') {
    local_94 = 0x501;
  }
  else {
    local_94 = 0x502;
  }
  iVar3 = FUN_02189328(param_3,s__pmask__021a5bbc,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_90 = 0xffffffff;
  }
  else {
    local_90 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__aim__021a5a44,local_8c,0x33);
  if (iVar3 == 0) {
    *local_8c = 0;
  }
  iVar3 = FUN_02189328(param_3,s__pic__021a5a4c,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__occ__021a5a54,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__ind__021a5a5c,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__inc__021a5a64,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__mar__021a5a6c,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__chc__021a5a74,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_74 = 0;
  }
  else {
    local_74 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,&DAT_021a5a7c,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,&DAT_021a5bc4,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__conn__021a5bcc,acStack_26c,0x40);
  if (iVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_02005f14(acStack_26c);
  }
  iVar3 = FUN_02189328(param_3,s__sig__021a5bd4,acStack_26c,0x40);
  if (iVar3 == 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5b58);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar3 = *(int *)(iVar6 + 0x100);
  for (piVar7 = *(int **)(iVar6 + 0x434); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[0xf]) {
    if ((piVar7[3] == iVar2) && (*piVar7 == 0x65)) {
      if (local_278 == 0) {
        local_278 = FUN_02187628(param_1,iVar2);
      }
      *piVar7 = 0x66;
      iVar3 = 1;
    }
  }
  if ((local_278 == 0) && (*(int *)(iVar6 + 0x100) != 0)) {
    local_278 = FUN_02187628(param_1,iVar2);
  }
  if (iVar3 != 0) {
    FUN_02175814(*(undefined4 *)(local_278 + 0x18));
    *(undefined4 *)(local_278 + 0x18) = 0;
    uVar4 = FUN_02001e9c(acStack_26c);
    *(undefined4 *)(local_278 + 0x18) = uVar4;
  }
  if (*(int *)(iVar6 + 0x100) != 0) {
    FUN_021850d4(param_1,local_278,local_154);
  }
  local_274 = *(int *)(param_2 + 0xc);
  local_270 = *(undefined4 *)(param_2 + 0x10);
  if (local_274 != 0) {
    puVar5 = (undefined4 *)FUN_0217583c(0x204);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a58f8);
      return 1;
    }
    FUN_021861a0(local_154,puVar5);
    *puVar5 = 0;
    puVar5[1] = iVar2;
    iVar2 = FUN_02183ec4(param_1,local_274,local_270,puVar5,param_2,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  FUN_021865e4(param_1,param_2);
  return 0;
}

