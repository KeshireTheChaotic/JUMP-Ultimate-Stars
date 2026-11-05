
void FUN_02003d00(int param_1,uint param_2,int param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint local_34;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_1c;
  
  if (param_2 < 2) {
    return;
  }
  local_1c = (param_2 >> 1) + 1;
  local_20 = (undefined1 *)(param_1 + (param_2 >> 1) * param_3);
  local_24 = (undefined1 *)(param_1 + (param_2 - 1) * param_3);
  local_28 = param_3 * local_1c;
  local_34 = param_2;
  do {
    iVar3 = param_3;
    puVar7 = local_24;
    puVar6 = local_20;
    if (local_1c < 2) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar1 = *puVar6;
        *puVar6 = *puVar7;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      local_34 = local_34 - 1;
      if (local_34 == 1) {
        return;
      }
      local_24 = local_24 + -param_3;
    }
    else {
      local_28 = local_28 - param_3;
      local_1c = local_1c - 1;
      local_20 = local_20 + -param_3;
    }
    puVar7 = (undefined1 *)(param_1 + (local_28 - param_3));
    uVar5 = local_1c;
    while (puVar6 = puVar7, uVar5 * 2 <= local_34) {
      uVar5 = uVar5 * 2;
      puVar7 = (undefined1 *)(param_1 + (uVar5 - 1) * param_3);
      if ((uVar5 < local_34) && (iVar3 = (*param_4)(puVar7,puVar7 + param_3), iVar3 < 0)) {
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + param_3;
      }
      iVar4 = (*param_4)(puVar6,puVar7);
      puVar2 = puVar7;
      iVar3 = param_3;
      if (-1 < iVar4) break;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar1 = *puVar6;
        *puVar6 = *puVar2;
        *puVar2 = uVar1;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  } while( true );
}

