
uint * FUN_021ac3ec(uint *param_1,uint param_2,int ***param_3,int param_4,byte *param_5)

{
  int iVar1;
  int **ppiVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r10;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint local_50;
  undefined1 local_4c;
  int ***local_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [12];
  int ***local_8;
  int local_4;
  
  local_4 = param_4;
  local_8 = param_3;
  bVar9 = (*param_1 & 1) != 0;
  if (bVar9) {
    uVar5 = param_1[1];
    local_50 = *param_1 >> 1;
    pbVar4 = (byte *)param_1[2];
  }
  else {
    local_50 = 0xb;
    pbVar4 = (byte *)((int)param_1 + 1);
    uVar5 = (uint)(byte)((byte)*param_1 >> 1);
  }
  if (uVar5 < param_2) {
    FUN_02003bd8(s_basic_string__out_of_range_021d062c);
    FUN_02001f18();
  }
  local_48 = (int ***)(uVar5 - param_2);
  if (local_48 < local_8) {
    param_3 = (int ***)&local_48;
  }
  if (local_48 >= local_8) {
    param_3 = (int ***)&local_8;
  }
  uVar6 = (int)param_5 - local_4;
  ppiVar2 = *param_3;
  bVar11 = 0x7ffffffd < uVar6;
  bVar10 = uVar6 == 0x7ffffffe;
  if (uVar6 < 0x7fffffff) {
    unaff_r10 = uVar5 - (int)ppiVar2;
    bVar11 = 0x7ffffffe - uVar6 <= unaff_r10;
    bVar10 = unaff_r10 == 0x7ffffffe - uVar6;
  }
  if (bVar11 && !bVar10) {
    FUN_02003bd8(s_basic_string__length_error_021d0648);
    FUN_02001f18();
  }
  uVar7 = uVar6 + unaff_r10;
  iVar8 = uVar5 - (param_2 + (int)ppiVar2);
  if (uVar7 < local_50) {
    FUN_021ac1c0(auStack_40);
    iVar1 = local_4;
    if (((iVar8 != 0) && (pbVar4 + uVar6 + param_2 < param_5)) && (param_5 <= pbVar4 + uVar5)) {
      uVar3 = FUN_021ac358(auStack_40);
      FUN_021ac3ec(auStack_40,0,uVar3,iVar1,param_5,local_4c);
      FUN_021ac338(auStack_40,&local_4,auStack_44);
    }
    if (iVar8 != 0) {
      FUN_02002450(pbVar4 + uVar6 + param_2,pbVar4 + (int)ppiVar2 + param_2,iVar8);
    }
    FUN_02002450(pbVar4 + param_2,local_4,uVar6);
    pbVar4[uVar7] = DAT_021d05c0;
    if (bVar9) {
      param_1[1] = uVar7;
    }
    else {
      *(byte *)param_1 = (byte)*param_1 & 1 | (byte)((uVar7 & 0x7f) << 1);
    }
    FUN_021ac3c4(auStack_40);
  }
  else {
    for (; local_50 = local_50 + 0xf & 0xfffffff0, local_50 < uVar7 + 1; local_50 = local_50 << 1) {
    }
    uVar5 = FUN_021ac6a0(param_1,local_50,0);
    if (param_2 != 0) {
      FUN_02002434(uVar5,pbVar4,param_2);
    }
    FUN_02002450(uVar5 + param_2,local_4,(int)param_5 - local_4);
    if (iVar8 != 0) {
      FUN_02002434(uVar5 + param_2 + uVar6,pbVar4 + (int)ppiVar2 + param_2,iVar8);
    }
    *(undefined1 *)(uVar5 + uVar7) = DAT_021d05c1;
    if (bVar9) {
      FUN_0201b244(pbVar4);
    }
    else {
      *param_1 = *param_1 & 0xfffffffe | 1;
    }
    param_1[2] = uVar5;
    param_1[1] = uVar7;
    *param_1 = *param_1 & 1 | local_50 << 1;
  }
  return param_1;
}

