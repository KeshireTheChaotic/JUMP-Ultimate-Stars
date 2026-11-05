
undefined4 FUN_02173964(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 local_30;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_1 + 0x1a34;
  local_1c = 0x20;
  local_18 = 0;
  FUN_020517fc(local_20,0,0x100);
  uVar9 = *(undefined4 *)(param_1 + 0x1a04);
  iVar2 = FUN_02004d40(uVar9,&DAT_021a39b4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_02004b04(iVar2 + 4);
  iVar4 = FUN_02004d40(uVar9,&DAT_021a39bc);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = *(undefined1 *)(iVar4 + 4);
  *(undefined1 *)(iVar4 + 4) = 0;
  iVar5 = FUN_02173b40(param_1,&local_20,s_httpresult_021a39c0,iVar4 + 1);
  if (iVar5 != 1) {
    *(undefined1 *)(iVar4 + 4) = uVar1;
    return 0;
  }
  *(undefined1 *)(iVar4 + 4) = uVar1;
  if ((param_2 == 1) || (iVar5 = FUN_02004cec(iVar4 + 1,&DAT_021a39cc,3), iVar5 != 0)) {
    return 1;
  }
  puVar6 = (undefined1 *)FUN_02004d40(iVar4 + 5,&DAT_021a39d0);
  if (puVar6 == (undefined1 *)0x0) {
    return 0;
  }
  while( true ) {
    pcVar10 = puVar6 + 2;
    if (((*pcVar10 == '\r') || (puVar6[3] == '\n')) ||
       (puVar7 = (undefined1 *)FUN_02004d40(pcVar10,&DAT_021a39d4), puVar7 == (undefined1 *)0x0))
    goto LAB_02173a84;
    uVar1 = *puVar7;
    *puVar7 = 0;
    puVar6 = puVar7 + 2;
    puVar8 = (undefined1 *)FUN_02004d40(puVar6,&DAT_021a39d0);
    if (puVar8 == (undefined1 *)0x0) break;
    local_30 = *puVar8;
    *puVar8 = 0;
    iVar4 = FUN_02173b40(param_1,&local_20,pcVar10,puVar6);
    if (iVar4 != 1) {
      *puVar7 = uVar1;
      *puVar8 = local_30;
      return 0;
    }
    iVar4 = FUN_02004b04(puVar6);
    puVar6 = puVar6 + iVar4;
    *puVar7 = uVar1;
    *puVar8 = local_30;
  }
  *puVar7 = uVar1;
LAB_02173a84:
  puVar6 = (undefined1 *)(iVar2 + 4);
  while( true ) {
    if (((undefined1 *)(iVar2 + 4 + iVar3) <= puVar6) ||
       (puVar7 = (undefined1 *)FUN_02004d40(puVar6,&DAT_021a39d8), puVar7 == (undefined1 *)0x0)) {
      return 1;
    }
    uVar1 = *puVar7;
    *puVar7 = 0;
    puVar11 = puVar7 + 1;
    puVar8 = (undefined1 *)FUN_02004d40(puVar11,&DAT_021a39dc);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)FUN_02004d40(puVar11,&DAT_021a39d0);
    }
    if (puVar8 != (undefined1 *)0x0) {
      local_30 = *puVar8;
      *puVar8 = 0;
    }
    iVar4 = FUN_02173b40(param_1,&local_20,puVar6,puVar11);
    if (iVar4 != 1) break;
    iVar4 = FUN_02004b04(puVar11);
    puVar6 = puVar11 + iVar4 + 1;
    *puVar7 = uVar1;
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = local_30;
    }
  }
  *puVar7 = uVar1;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = local_30;
  }
  return 0;
}

