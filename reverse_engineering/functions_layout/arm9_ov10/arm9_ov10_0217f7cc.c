
void FUN_0217f7cc(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  char *pcVar6;
  ushort *puVar7;
  ushort *puVar8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_9a [134];
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    iVar3 = FUN_021816dc(param_2,param_3);
    if (iVar3 < 0) {
      return;
    }
    pcVar6 = param_2 + iVar3;
    iVar4 = FUN_021816dc(pcVar6,param_3 - iVar3);
    if (iVar4 < 0) {
      return;
    }
    param_3 = (param_3 - iVar3) - iVar4;
    FUN_0217fb10(param_1,param_2,pcVar6);
    param_2 = pcVar6 + iVar4;
    cVar1 = pcVar6[iVar4];
  }
  puVar7 = (ushort *)(param_2 + 1);
  param_3 = param_3 + -1;
  local_bc = 0;
  do {
    if (param_3 < 2) {
      return;
    }
    uVar2 = *puVar7 >> 8 | *puVar7 << 8;
    puVar8 = puVar7 + 1;
    param_3 = param_3 + -2;
    local_c0 = 0;
    cVar1 = (char)*puVar8;
    puVar7 = puVar8;
    while (cVar1 != '\0') {
      iVar3 = FUN_021816dc(puVar7,param_3);
      if (iVar3 < 0) {
        return;
      }
      if (100 < iVar3) {
        return;
      }
      local_c0 = local_c0 + 1;
      puVar7 = (ushort *)((int)puVar7 + iVar3);
      param_3 = param_3 - iVar3;
      cVar1 = (char)*puVar7;
    }
    puVar7 = (ushort *)((int)puVar7 + 1);
    param_3 = param_3 + -1;
    local_b8 = 0;
    if (uVar2 != 0) {
      do {
        local_b4 = 0;
        puVar5 = puVar8;
        if (0 < local_c0) {
          do {
            iVar3 = FUN_021816dc(puVar7,param_3);
            if (iVar3 < 0) {
              return;
            }
            FUN_02003ce0(auStack_9a,&DAT_021a4c94,puVar5,local_b8);
            FUN_0217fb10(param_1,auStack_9a,puVar7);
            puVar7 = (ushort *)((int)puVar7 + iVar3);
            param_3 = param_3 - iVar3;
            iVar3 = FUN_02004b04(puVar5);
            puVar5 = (ushort *)((int)puVar5 + iVar3 + 1);
            local_b4 = local_b4 + 1;
          } while (local_b4 < local_c0);
        }
        local_b8 = local_b8 + 1;
      } while (local_b8 < (int)(uint)uVar2);
    }
    local_bc = local_bc + 1;
  } while (local_bc < 2);
  return;
}

