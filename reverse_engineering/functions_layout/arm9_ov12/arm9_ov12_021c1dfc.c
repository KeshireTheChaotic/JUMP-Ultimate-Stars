
undefined4 FUN_021c1dfc(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  piVar4 = *(int **)param_1[0xf];
  iVar1 = ((undefined4 *)param_1[0xf])[1];
  iVar5 = 0;
  local_1c = 0;
  puVar3 = (undefined2 *)*param_1;
  local_20 = 0;
  if (0 < iVar1) {
    do {
      if (((*piVar4 != 0) || (param_3 == 0)) && ((piVar4[1] & param_2) != 0)) {
        *(int **)(puVar3 + 0x1a) = piVar4;
        *puVar3 = *(undefined2 *)((int)piVar4 + 0x16);
        puVar3[1] = (short)piVar4[5];
        *(int *)(puVar3 + 2) = *(int *)(param_1[0xf] + 8) + piVar4[4] * 4;
        iVar2 = iVar5 * 4;
        *(int *)(puVar3 + 4) = param_1[6] + iVar2;
        *(int *)(puVar3 + 6) = param_1[7] + iVar2;
        *(int *)(puVar3 + 0xe) = param_1[8] + iVar2;
        *(int *)(puVar3 + 0x10) = param_1[9] + iVar5 * 2;
        *(int *)(puVar3 + 0x14) = param_1[10] + iVar5 * 8;
        *(int *)(puVar3 + 8) = param_1[2] + local_1c * 4;
        *(int *)(puVar3 + 10) = param_1[3] + local_1c * 2;
        *(int *)(puVar3 + 0xc) = param_1[4] + local_1c * 2;
        FUN_021c167c(puVar3);
        local_1c = local_1c + (uint)*(ushort *)(piVar4 + 5);
        iVar5 = iVar5 + (uint)*(ushort *)((int)piVar4 + 0x16);
        puVar3 = puVar3 + 0x1c;
      }
      local_20 = local_20 + 1;
      piVar4 = piVar4 + 6;
    } while (local_20 < iVar1);
  }
  return 1;
}

